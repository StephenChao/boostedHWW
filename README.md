# boostedHWW
Search for boosted Higgs boson(H) decaying to two W bosons, with the decay product in a single large radius jet.

- [boostedHWW](#boostedhww)
  - [Preprocessing](#preprocessing)
    - [MiniAOD to Ntuple(e.g., submit condor jobs on Cmsconnect)](#miniaod-to-ntupleeg-submit-condor-jobs-on-cmsconnect)
    - [Ntuple to PKUTree](#ntuple-to-pkutree)
    - [PKUTree to SlimmedTree](#pkutree-to-slimmedtree)
  - [Postprocessing](#postprocessing)
    - [run prefit results and store histgrams](#run-prefit-results-and-store-histgrams)
  - [Combine](#combine)
    - [Setup combine enviroment](#setup-combine-enviroment)
    - [create datacards](#create-datacards)
    - [perform GoF](#perform-gof)
  
## Preprocessing

### MiniAOD to Ntuple(e.g., submit condor jobs on Cmsconnect)
1. run `voms-proxy-init -voms cms -valid 192:00` to update certificate, replace `x509up_u12976` in `condor.py` with your own certificate name.
2. run `source create_json.sh` to create json files and get official MiniAOD path on DAS, store output in `json` directory.
3. run `source create_cmd.sh` to create job files(e.g., can be used to submit condor jobs), store output to `production` directory. (A script will be generated to include all condor jobs, e.g., change `--submitsh "NanoNtupleChain_16_Feb_2024.sh"` in `create_cmd.sh` to customize its name.)
4. E.g., run `source NanoNtupleChain_16_Feb_2024.sh` to submit all condor jobs.

### Ntuple to PKUTree

### PKUTree to SlimmedTree

## Postprocessing

### run prefit results and store histgrams
Use file `./combine/Analyze.ipynb`

## Combine

### Setup combine enviroment

The settings for this repository is saved in `combine/envs/setup_env.sh`

### create datacards
Use file `./combine/create_datacard.py`

### perform GoF
Use file `./combine/scripts/run_ftest.sh` and `./combine/scripts/run_blinded.sh`


