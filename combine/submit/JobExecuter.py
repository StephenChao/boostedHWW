import subprocess

def run(cmd):
    print('Running:', cmd)
    return subprocess.run(['sh', '-c', cmd]).returncode, cmd