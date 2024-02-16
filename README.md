# boostedHWW
Search for boosted Higgs boson(H) decaying to two W bosons, with the decay product in a single large radius jet.

### preprocessing: MiniAOD to Ntuple(e.g., submit condor jobs on Cmsconnect)
1. run `voms-proxy-init -voms cms -valid 192:00` to update certificate, replace `x509up_u12976` in `condor.py` with your own certificate name.
2. run `source create_json.sh` to create json files and get official MiniAOD path on DAS, store output in `json` directory.
3. run `source create_cmd.sh` to create job files(e.g., can be used to submit condor jobs), store output to `production` directory. (A script will be generated to include all condor jobs, e.g., change `--submitsh "NanoNtupleChain_16_Feb_2024.sh"` in `create_cmd.sh` to customize its name.)
4. E.g., run `source NanoNtupleChain_16_Feb_2024.sh` to submit all condor jobs.


### run prefit results and store histgrams
Use file `./combine/Analyze.ipynb`

### create datacards
Use file `./combine/create_datacard.py`

### perform GoF
Use file `./combine/scripts/run_ftest.sh` and `./combine/scripts/run_blinded.sh`


