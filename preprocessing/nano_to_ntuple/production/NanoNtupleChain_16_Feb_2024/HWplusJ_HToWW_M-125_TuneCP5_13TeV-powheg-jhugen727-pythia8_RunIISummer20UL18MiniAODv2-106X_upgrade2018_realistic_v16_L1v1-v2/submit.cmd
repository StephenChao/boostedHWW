
universe=Vanilla
RequestMemory = 2048
RequestCpus = 1
executable=/ospool/cms-user/yuzhe/NanoNtupleChain/boostedHWW/preprocessing/nano_to_ntuple/production/NanoNtupleChain_16_Feb_2024/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/exe_UL18_NanoNtupleChain.sh
transfer_executable=True
transfer_input_files=/ospool/cms-user/yuzhe/NanoNtupleChain/boostedHWW/preprocessing/nano_to_ntuple/x509up_u12976,/ospool/cms-user/yuzhe/NanoNtupleChain/boostedHWW/preprocessing/nano_to_ntuple/scripts/fetchFiles.py
transfer_output_files=out_1.root
log=/ospool/cms-user/yuzhe/NanoNtupleChain/boostedHWW/preprocessing/nano_to_ntuple/production/NanoNtupleChain_16_Feb_2024/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/log//$(Cluster).log
output=/ospool/cms-user/yuzhe/NanoNtupleChain/boostedHWW/preprocessing/nano_to_ntuple/production/NanoNtupleChain_16_Feb_2024/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/log/std_logs/$(Cluster).$(Process).out
error=/ospool/cms-user/yuzhe/NanoNtupleChain/boostedHWW/preprocessing/nano_to_ntuple/production/NanoNtupleChain_16_Feb_2024/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/log/std_logs/$(Cluster).$(Process).err
notification=Never
should_transfer_files = YES
when_to_transfer_output = ON_EXIT
x509userproxy=x509up_u12976
+MaxRuntime=150000
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/70000/F11FE430-40C2-EE49-81C8-D2D3B87CF0CC.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_41.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/70000/7D5BB81E-A87B-0F41-ADE5-8B2DFB7EC11B.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_24.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/70000/934E5BC9-273E-6D44-B309-3CD9A23FE713.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_25.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/70000/D5895727-3773-0F46-AD5E-547470085F7E.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_26.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/70000/51474CA2-DAF8-0C43-B360-58D0F14F4A1D.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_27.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/70000/6D23EA34-2F23-3B44-B295-4893058356AB.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_20.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/70000/6B3820E4-A149-994A-A10A-846461E980FC.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_21.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/70000/7C7BAD82-8CE6-4641-8F1E-05079E72864E.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_22.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/70000/75E7F22A-ECBF-F642-8453-9CBF58C8C465.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_23.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/70000/8DBF8C2D-041F-3449-8B90-7E04F617F3F8.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_28.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/70000/40C1C7D0-50B9-0B45-9DB8-54EAC8A31C63.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_29.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/70000/56D65193-D581-C247-8FEE-25E6B60F2BA6.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_0.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/70000/5D2EAA13-B812-2D48-B9F9-DE5000D4EACE.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_4.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/70000/855668E2-A6B2-7741-9532-D624E1BC7738.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_8.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/70000/343A7B0A-0871-9A43-B8B0-4655CDAB75F6.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_120.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/70000/DCB09CAD-6440-6640-9499-78D8C789F773.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_121.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/70000/B9F19CF7-9B44-7149-9525-3F6B18A417CC.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_122.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/70000/D7F4E313-52A5-5B42-9FE5-81CC050AD83D.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_123.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/70000/38E44FAD-CC15-8E49-9EE4-B3DE80703EFE.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_124.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/70000/230CBD56-1FF0-2B4A-8D74-A932353F8A97.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_125.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2820000/2E08AB1B-2C54-C247-A612-73B6FE093006.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_126.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/70000/EF2F66B6-D52F-3A46-8502-23D85830F5D9.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_59.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/70000/F7E88B36-4D3C-BA49-B954-390DA926E212.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_58.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/70000/99F1F48A-BCD6-3F4F-8EF6-A7854D447EAA.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_55.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/70000/8064AA7F-9DAA-414C-8114-3F7B17C80AE1.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_54.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/70000/BE89A8BA-6A4A-1C4B-9C82-99F3A4B772CD.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_57.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/70000/EBFB892A-F8DE-7E43-9AE1-EF349ACE7550.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_56.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/70000/444C03EF-F3F0-C548-8971-926EBECB6065.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_51.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/70000/16B25C54-1104-784A-AD1D-76020081E46D.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_50.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/70000/5A3035CC-5458-A742-ABFE-AA972CFC8D2E.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_53.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/70000/E2D4D758-D6F2-9A40-9600-47E58F81AA5F.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_52.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/70000/018D483E-3FB1-8749-909B-3EAA6A92852B.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_115.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/70000/DCAFB214-91BF-2E41-8D23-67230C72AEFE.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_114.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/70000/60B9398F-3E13-B443-8BE8-8829E5C6B6E5.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_88.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/70000/36966585-1676-1549-B28C-58166EE6D9ED.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_89.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/70000/DEBD1B82-C7E9-4643-9F1E-A6924D53D746.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_111.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/70000/2607DEF0-FBCA-A944-A7F3-E6E3205BB8BD.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_110.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/70000/9FB1D2E6-DA86-5B47-A0AE-E8E874F98931.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_113.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/70000/63565323-EC26-404E-9A76-87FD1806B676.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_112.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/70000/F59EEDF4-7903-7546-B886-E69EBA4A0679.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_82.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/70000/E44ED0E4-CD4E-984B-8621-B9DBDE10C853.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_83.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/70000/76211268-00F7-584E-9EE4-1B1355D5821A.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_80.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/70000/F8C3D8F1-6CA1-D04E-93C0-DEAAE6D98AE1.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_81.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/70000/D4F919C5-43D4-4D4E-B815-91F6E8F2DDF4.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_119.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/70000/AB50E22F-1DB2-3048-8E92-F7BEC5E040E6.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_118.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/70000/2D736DBB-36AA-9145-9EF7-582F642A647A.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_84.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/70000/E8DD1BB6-2D05-2443-BE1B-7D315B40AFC2.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_85.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/70000/3B17E266-364B-F343-ACEB-60AF0DC0B5AC.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_3.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/70000/C745A207-1EB7-2C43-9119-E4E0B5DF3806.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_7.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/70000/E6FE942E-6F4B-6E4D-89C2-4AE840FA5740.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_108.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/70000/5033BC9D-9A0B-5D4A-A73B-1CB61D398480.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_109.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/70000/A6C9D4D4-D24C-C241-9C36-717B81B18E36.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_102.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/70000/89D555CC-3493-954E-AB4B-8410B7C0891A.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_103.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/70000/9F363278-05DD-CE48-8D7D-528C171EA103.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_100.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/70000/C7AC084E-546F-794C-B186-1DA8295F8268.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_101.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/70000/B35769F7-9FC8-DD45-B52B-89AFB36169BE.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_106.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/70000/476C05F7-9EE9-7241-84BC-9CEE4DEBD579.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_107.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/70000/5C972AEC-A6D2-F04A-B81B-E3D0004B918C.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_104.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/70000/96437D62-9671-1141-BCE8-AB788119C294.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_105.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/70000/16FF88ED-3355-2D46-A376-D11EEFEA8B8C.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_39.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/70000/51BDB2FD-93EA-0443-9CF5-B486124B5951.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_38.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/70000/34FB6C74-AFB3-B14B-A36F-C064D8C769C0.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_33.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/70000/69448098-CA6E-5E49-A55F-2E0ABE12FC7B.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_32.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/70000/48EC8849-E0CF-854A-B593-38CED015D2AF.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_31.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/70000/09D718CB-4817-4449-ABEC-7574306A4AFC.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_30.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/70000/6DEC3F15-B784-6C4B-A21A-2327B7647952.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_37.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/70000/22D165B2-23E6-EA4C-9165-730C3AD0EFC7.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_36.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/70000/6F564301-1A53-ED49-9593-0D76FEAFC63B.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_35.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/70000/95C3D974-6ECA-9548-B424-309B7BCA9743.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_34.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/70000/D603FD76-AD47-4949-A5A6-1386052D6412.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_60.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/70000/43BF1A78-474C-244E-A468-3BE873D00B84.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_61.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/70000/0EF16609-E587-9844-A7A2-2202D28A229C.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_62.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/70000/307F0534-8293-B74B-B384-0C84AF9D1BFF.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_63.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/70000/2F22A42D-B3C9-FC4E-A096-5ECB0FC7D5C1.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_64.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/70000/469F2867-89A8-2C4F-B5BA-10414916985E.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_65.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/70000/75C2BA89-D3D0-064B-A669-88E856BE59B4.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_66.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/70000/44C98092-0669-824F-A957-F22F6ED66751.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_67.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/70000/C178C358-12FE-A640-A525-52E975927201.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_68.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/70000/4CBDEF55-1CC7-4342-BDB2-E9E51A71A089.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_69.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/70000/CBAB049B-E4C9-9F40-9952-2E4698248F57.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_2.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/70000/591EF774-ADD7-B741-9074-93F25C3667BC.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_6.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/70000/0DE797FB-53ED-CD48-A7EB-3540F545250D.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_99.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/70000/FEA0C68E-B779-F947-A717-79459407EEFB.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_98.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/70000/C4FA96BE-247A-DD4F-BB82-BE47798FB60C.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_91.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/70000/2FABF918-CAAB-4646-B686-CA69F587C2DD.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_90.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/70000/06FEBAF7-3F5F-0945-84B3-97BDA053474D.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_93.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/70000/C72A3C44-E2D6-7A45-A250-A7320272CF01.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_92.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/70000/789C2553-D1C5-C64C-90DF-53D0D90D72C8.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_95.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/70000/4AA08BC6-1352-C84B-A77A-7143139FCE35.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_94.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/70000/1E252992-D364-0342-88EB-B4D4E1C1FA13.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_97.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/70000/4F62EB63-8CB4-C745-A1D8-6671ABE25637.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_96.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/70000/4EAD3519-9827-1548-B6ED-4F18CA3311EF.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_11.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/70000/2360CCD6-B07D-0842-B231-E08D1978F09E.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_10.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/70000/8C5E20EA-3C5A-0040-AA34-09D890BEA85B.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_13.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/70000/5BEAD3F4-560C-5B4B-8297-9876570C161D.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_12.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/70000/13329A41-454A-7A43-8F46-5E1FA628333F.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_15.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/70000/DD97FB22-0DD0-7B48-823E-570D97618164.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_14.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/70000/27E7982C-AFEA-1B4C-A5CD-4CEB2D66C8D0.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_17.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/70000/88E45123-54BC-C645-8B44-25E112574B20.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_16.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/70000/597766FA-C6D7-2741-9746-7F455398E45C.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_19.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/70000/A9EE1055-E3C2-454C-AE6C-B7F2EE54359E.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_18.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/70000/36EF5F67-4FE2-EF4C-AD1A-4D54FE0795EE.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_117.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/70000/B8B65A0D-0429-CD4D-9EE1-98871B04D5B8.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_116.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/70000/545DEDF0-8CAE-334D-8025-42C20BA4026C.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_48.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/70000/500C40BF-D660-E64B-A6D1-4979B7C8B7DF.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_49.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/70000/25107D7A-0906-FD46-A51E-39C469C3598E.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_46.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/70000/BB7F38FD-BA9B-3743-BE9C-AAAFD77D9826.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_86.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/70000/777D22BB-8126-0744-94A6-E1492B2F3860.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_44.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/70000/F72DC36A-168A-F246-8A65-D4B6A91E82D0.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_45.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/70000/C9B91912-459B-6448-955E-CBE5C63CAC3D.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_42.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/70000/DF085C46-40C0-9E45-B70E-02ABE89D7EAC.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_43.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/70000/D73EC252-94F7-E84D-A408-18457BA9D8D3.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_40.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/70000/381D8A5B-08DD-9349-AF11-FEE3CF345F96.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_87.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/70000/51363458-59D8-F945-A068-D9168F0445E6.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_1.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/70000/42A4BFCA-DA8D-8745-9C81-98DEE0E2D430.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_5.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/70000/8BC01AED-DD1A-CE41-AD6E-07570891AF8A.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_9.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/70000/42019C71-CC7F-AC4D-AFB6-71E9E89B0F31.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_77.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/70000/80102830-5916-7140-95E4-2CBF84F72222.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_76.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/70000/427B99F9-C2DC-6D4C-8624-0E38729C306B.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_75.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/70000/054754FD-1547-1840-96FA-3C90FCCB3EC9.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_74.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/70000/27010809-243F-414F-8205-F77E490ECCCA.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_73.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/70000/B71D0A99-ACC6-9349-B4B5-5F6AD44B2695.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_72.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/70000/5334AE26-0653-D54C-AF7F-7842003E863D.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_71.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/70000/E3853C3A-C78F-584A-99F3-F441A518E1F5.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_70.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/70000/3EE8CD9D-6A55-0447-9A18-40812720CBE6.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_79.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/70000/279CE4DD-5D43-2F40-99A2-635E6F1B4A11.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_78.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/70000/9F6B461D-FB37-C847-BA4D-80AFD4448ADC.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWplusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_47.root "
queue
        