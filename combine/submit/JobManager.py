import multiprocessing
from JobExecuter import run

pool = multiprocessing.Pool()
applications = [ ]

def concurrent_jobs(jobs):
    global pool
    pool.close()
    pool = multiprocessing.Pool(jobs)
    
def submit(cmd):
    applications.append(pool.apply_async(run, [cmd]))
    
def wait():
    while applications:
        application = applications.pop(0)
        retcode, cmd = application.get()
        if retcode:
            print("ERROR: command return code %d: %s" % (retcode, cmd))