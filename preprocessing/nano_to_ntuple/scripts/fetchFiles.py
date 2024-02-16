import sys,os
from optparse   import OptionParser
import re
import optparse
import ROOT as r
import os

parser = OptionParser()
parser.add_option( '--isNanoAOD', action="store_true", dest="isNanoAOD" )
(options, args) = parser.parse_args()

def getValidSite(filepath, retry = 5):
    print "Searching for valid site"
    ValidSite = '''
import sys,os
import FWCore.ParameterSet.Config as cms
from FWCore.ParameterSet.VarParsing import VarParsing

options = VarParsing ('analysis')
options.parseArguments()

process = cms.Process("Test")

process.maxEvents = cms.untracked.PSet(
    input = cms.untracked.int32(1)
)

process.source = cms.Source ("PoolSource",
    fileNames = cms.untracked.vstring(options.inputFiles)
)
    '''

    with open("%s/src/ValidSite.py"%(os.getenv("CMSSW_BASE")), "w") as f:
        f.write(ValidSite)

    for i in range(retry):
        os.system("cmsRun ${CMSSW_BASE}/src/ValidSite.py inputFiles=\""+filepath+"\" > test_ValidSite.log 2>&1")
        with open ("test_ValidSite.log","r") as test:
            if 'Successfully opened file ' in test.read():
                break

    with open('Localfile.txt','w') as f:
        f.write(filepath.split("/")[-1])

    with open ("test_ValidSite.log","r") as test:
        test_lines = test.read()
        if 'Successfully' in test_lines:
            if '/store/mc' in test_lines:
                valid_site = test_lines.split('Successfully opened file ')[1].split('/store/mc')[0]
            if '/store/data' in test_lines:
                valid_site = test_lines.split('Successfully opened file ')[1].split('/store/data')[0]
            if "root:/" not in valid_site:
                valid_site = 'root://cmsxrootd.fnal.gov/'
            print "valid site for ", filepath, ": ", valid_site, "\n"
            return(valid_site)
        else:
            print "found no accessable site for "+filepath
            return('root://cmsxrootd.fnal.gov/')

def get_FileSize(filePath):
    filePath = unicode(filePath,'utf8')
    fsize = os.path.getsize(filePath)
    fsize = fsize/float(1024)
    return round(fsize,2)

class fetchFiles():
    def __init__(self, BASEDIR, INPUTFILENAMES ):
        self.files = INPUTFILENAMES.split(",")
        self.BASEDIR = BASEDIR # all the files are copy to the BASEDIR

    def cmsconnetFile(self,ifile):
        filename = ifile.split("/")[-1]
        wget = "wget --tries=3 --no-check-certificate http://stash.osgconnect.net/+yuzhe/{file} -O {PATH}/In_{filename}"
        ifile = ifile.replace("/stash/user/yuzhe/public/","")
        os.system( wget.format(file = ifile, PATH = self.BASEDIR ,filename = filename) )
        return "%s/In_%s"%(self.BASEDIR,filename)

    def DasFile(self,ifile):
        filename = ifile.split("/")[-1]
        site = getValidSite(ifile)
        xrdcp = "xrdcp {site}{ifile} {PATH}/In_{filename}"
        os.system( xrdcp.format(site = site,ifile = ifile, PATH = self.BASEDIR ,filename = filename) )
        return "%s/In_%s"%(self.BASEDIR,filename)

    def writeToText(self,InLocalFiles,text = "Localfile.txt"):
        with open("%s/%s"%(self.BASEDIR,text),"w") as f:
            f.write(",".join(InLocalFiles))

    def checkFiles(self,InLocalFiles,isNanoAOD):
        foundBad = False
        Badfiles = []
        for ifile in InLocalFiles:
            if isNanoAOD:
                try:
                    f1 = r.TFile(ifile)
                    t = f1.Get("Events")
                    nevts = t.GetEntries()
                    for i in range(0,t.GetEntries(),1):
                        if t.GetEntry(i) < 0:
                            foundBad = True
                            print "[RSR] found bad event %i" % i
                            break
                except: 
                    foundBad = True
                    Badfiles.append(ifile)
            else:
                if not (get_FileSize(ifile) > 1): 
                    foundBad = True
                    Badfiles.append(ifile)
        if foundBad : print "foundBad files",
        return foundBad

    def GetFile(self,isNanoAOD):
        InLocalFiles = []
        for ifile in self.files:
            if "/stash/user/yuzhe/public" in ifile:
                InLocalFiles.append(self.cmsconnetFile(ifile))
            if (ifile.startswith("/store/mc/")) or (ifile.startswith('/store/data')):
                InLocalFiles.append(self.DasFile(ifile))
        if not self.checkFiles(InLocalFiles,isNanoAOD):
            print "successfully download all the files"
            self.writeToText(InLocalFiles)
        return InLocalFiles
    
if __name__ == '__main__':
    print sys.argv[1],sys.argv[2]
    fetchFiles_ = fetchFiles(sys.argv[1],sys.argv[2],)
    fetchFiles_.GetFile(options.isNanoAOD) # different way to check NanoAOD and miniAOD files
