import os
# from tkinter import W
import ROOT

path_tree ="/data/pubfs/zhaoyz/Tree/V5/Splitted/2016/Data/" # Your dir for Ntuple file waiting for TransferTree,waiting for changing.
file_dir1='/data/pubfs/zhaoyz/Ntuple/V2/2016_MERGED/Data/'           # Your dir for Tree file after TransferTree, waiting for changing.

for das in os.listdir(file_dir1):
    os.mkdir("%s%s"%(path_tree,das))
    for file in os.listdir(file_dir1+das):
        if file.endswith('.root'):
            print("Should print:python runEDBR2PKUTree.py --inputfile \"%s/%s\" --outputfile \"%s/Tree_%s\" --year 2016postVFP --channel \"HWW\" --IsData 0"%(file_dir1+das,file,path_tree+das,file))
            os.system("python runEDBR2PKUTree.py --inputfile \"%s/%s\" --outputfile \"%s/Tree_%s\" --year \"2016postVFP\" --channel \"HWW\" --IsData 0"%(file_dir1+das,file,path_tree+das,file))
    print("TransferTree for ",das,"done")

