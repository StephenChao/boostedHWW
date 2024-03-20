
universe=Vanilla
RequestMemory = 2048
RequestCpus = 1
executable=/ospool/cms-user/yuzhe/NanoNtupleChain/boostedHWW/preprocessing/nano_to_ntuple/production/NanoNtupleChain_16_Feb_2024/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/exe_UL18_NanoNtupleChain.sh
transfer_executable=True
transfer_input_files=/ospool/cms-user/yuzhe/NanoNtupleChain/boostedHWW/preprocessing/nano_to_ntuple/x509up_u12976,/ospool/cms-user/yuzhe/NanoNtupleChain/boostedHWW/preprocessing/nano_to_ntuple/scripts/fetchFiles.py
transfer_output_files=out_1.root
log=/ospool/cms-user/yuzhe/NanoNtupleChain/boostedHWW/preprocessing/nano_to_ntuple/production/NanoNtupleChain_16_Feb_2024/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/log//$(Cluster).log
output=/ospool/cms-user/yuzhe/NanoNtupleChain/boostedHWW/preprocessing/nano_to_ntuple/production/NanoNtupleChain_16_Feb_2024/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/log/std_logs/$(Cluster).$(Process).out
error=/ospool/cms-user/yuzhe/NanoNtupleChain/boostedHWW/preprocessing/nano_to_ntuple/production/NanoNtupleChain_16_Feb_2024/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/log/std_logs/$(Cluster).$(Process).err
notification=Never
should_transfer_files = YES
when_to_transfer_output = ON_EXIT
x509userproxy=x509up_u12976
+MaxRuntime=150000
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/510000/25A22952-E631-9846-B999-462BD57DDDF4.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_130.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/50000/6E5C82CB-8230-D848-A904-364EFA693D78.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_41.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/40000/59C14EC0-DD0E-244A-8A6B-46A1F1B80A87.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_24.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/40000/ED4B10A0-DD82-BE46-AC95-B1ABAA724817.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_25.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/40000/F5ADA508-13C8-CD45-8A53-ACEA95A8CA23.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_26.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/40000/3962605B-38D0-0845-93B5-199945A1C071.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_27.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/40000/585C1F43-37D8-8C45-A102-3681D50A5BEB.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_20.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/40000/0A5AB8E5-74CC-B244-BF34-99FCC076AD4C.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_21.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/40000/EBB5A7C9-1A00-4345-80F7-4835DCB58345.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_22.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/40000/858F6B68-227E-3042-A7F0-21DE5F2713F0.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_23.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/40000/A8C6B260-EB9B-6146-B7F5-7822BDDE8361.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_28.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/40000/C08FFB03-7A86-6E41-AE02-E3F47BA99ED1.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_29.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/50000/C151F1FD-9BE5-8D46-A6B2-CC2918B1A7D8.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_0.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/50000/F612E78B-3B0C-1A4D-B92F-246AF4F33AD1.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_4.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/50000/B27C3357-DA6C-4948-A87C-2E932C663009.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_8.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/510000/FAEDFECC-1E64-894C-8613-6568B816B67C.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_120.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/510000/A3D43761-CDDF-A549-8F0C-969448A85DF5.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_121.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/510000/C116A369-C4A2-184F-AFA4-32B5DFAC53F3.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_122.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/510000/33A17C5F-B1E1-D44D-AC90-C79D3DF61555.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_123.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/510000/CBC52CAF-33D2-C94E-8AB2-24D1FB56167B.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_124.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/510000/C15B6B4F-D3B3-B949-92EC-C940BDF764A4.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_125.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/510000/54111F18-B432-4348-988B-8382D445676A.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_126.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/510000/D3E513EA-623B-AC42-A9B3-557F07BED8B0.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_127.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/510000/776F8E63-885C-FF4A-BA33-9350908817D2.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_128.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/510000/4AEB3CA9-3301-C349-AA92-4BCB4A999FCD.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_129.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/50000/0C0B9101-748E-B344-97E4-A69B8B2B688A.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_59.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/50000/667CA52C-D3C1-EC4A-86B2-49B47139C08D.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_58.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/50000/DAEF8650-B82C-8944-9327-824CB01311DA.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_55.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/50000/85D3AE90-AB35-1B48-9C45-AA95BE9349B3.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_54.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/50000/48DC98A7-244D-7248-8282-4719B3A00C30.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_57.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/50000/A2887465-2EAF-D84A-935F-3BA4A3BE94CB.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_56.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/50000/75C391F3-2566-9945-944C-26648E279E17.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_51.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/50000/449E1B91-A0F2-2340-A179-AE3329BC59D0.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_50.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/50000/B104A2F1-9C40-5045-89F5-86F033E7EB86.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_53.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/50000/60F96E9A-5502-4A49-AB57-C6A88711D9B7.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_52.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/510000/2EEBFDC6-8AB5-764E-8FCF-BB7739B7C085.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_115.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/510000/2B0F1DF3-FBC0-0E47-A8F6-CE615380FC03.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_114.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/510000/7363ED4E-B60D-8B4C-A52D-CDD64C65D2EB.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_88.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/510000/D520320A-FEB7-CB48-BD73-8F3EF37EEA6E.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_89.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/510000/87F8E613-7056-1A45-8B78-A6AB43A5B172.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_111.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/510000/7D7D120E-5F0C-9A43-8B60-6C718EE3D5F0.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_110.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/510000/B63A3D20-2F29-2A44-8A41-C8A385F25913.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_113.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/510000/7E0719BD-85DD-7149-BFDA-82035CA140C3.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_112.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/510000/AE7B5DD6-5ED2-B349-99CA-60A67F403E98.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_82.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/510000/B60B51D6-2559-4446-AD4F-7F819B96A8D0.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_83.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/510000/DBEC0B36-9C31-EF4D-B891-2864C3FAA461.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_80.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/510000/EB8FCAA1-B0ED-244B-9184-AF519E54116D.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_81.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/510000/4E9752E0-ED6A-BD49-B7A7-985B54AD3952.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_119.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/510000/9B52B9B1-98F9-C441-989F-833D2F9F67E6.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_118.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/510000/C9A2DF79-1B2D-BC49-9BBA-85A2ABC430F7.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_84.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/510000/36FBA9B0-6B42-8248-BEB3-CA32662B982B.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_85.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/50000/F7636D20-EE13-D64C-8112-7F465B4D2266.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_3.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/50000/1561F3B5-608B-4F45-954F-DC1430CE2272.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_7.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/510000/15CD002B-3AE4-694D-A51A-4A5AB4D11352.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_108.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/510000/2E7A5F89-3C51-A748-A5A8-EA792D2D5288.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_109.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/510000/ACC62D54-699E-FE43-84D2-7A4999F828C3.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_102.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/510000/D205AD74-10D8-BD48-B6AA-072417B7C16C.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_103.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/510000/78E22F1D-A043-0046-8288-17AE90E7628E.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_100.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/510000/7445E071-5DFB-ED40-8CA9-DE335DB99698.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_101.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/510000/115D5DF1-C583-A44C-B96D-36E0CA58D5B1.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_106.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/510000/613E5D68-BF08-724F-8E68-A789114A431A.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_107.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/510000/C8331689-5214-8E45-88ED-6DE60BDD656F.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_104.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/510000/A4992332-DBF2-2444-AF3F-66BD5FCAC1BC.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_105.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/50000/DE70D3D2-531A-2A47-9E1A-16933AE34003.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_39.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/50000/B4E9BF4D-4CC2-6740-922C-997749A5F197.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_38.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/50000/E534728C-EB9C-4D4F-B0E7-ED427FF0939A.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_33.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/50000/07CC8FC0-8B6C-8E41-814C-50E5C6A1D330.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_32.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/40000/1E956B29-ACD3-D842-BED7-2401ACF01DC3.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_31.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/40000/C117AF67-7E16-584D-8EC0-8339334E56F2.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_30.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/50000/953A8AC1-837C-8A4D-BF63-DAD41B20C974.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_37.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/50000/686AD8B5-4412-F444-920F-C4D0DBC2F4FA.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_36.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/50000/913F981F-D3DD-CD4A-84B7-5231096E7371.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_35.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/50000/07E1BAF2-477B-A447-AE6E-7531EBAA1088.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_34.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/50000/AE78D4E3-6B46-514C-B8EF-DBFC41013447.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_60.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/50000/1CF6F582-F9A8-3446-9ABC-FC2461479C1E.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_61.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/50000/11E964FC-3D7D-934B-A221-D45A27D5DE04.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_62.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/50000/9589A49C-5EE7-2D46-AE7B-68DCA2D3F934.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_63.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/50000/23ACD838-1E6B-8844-B391-81C2DBB52190.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_64.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/40000/CA3C42A2-CC1B-244F-B275-D306B72EB232.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_65.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/40000/68D6820E-5FC2-EC43-959B-C0E1DBD4D599.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_66.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/40000/8219DF51-EF85-9C47-82E7-B5A55D1DFBD2.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_67.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/40000/98704C61-F2D6-DD41-89BD-099A9DD8255B.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_68.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2520000/3BFC36A8-6135-D44B-A8CA-083454E455F7.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_69.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/50000/22C01115-B6F0-A546-A2DA-BF12172B215C.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_2.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/50000/1DFE129C-1546-4E4A-9B1B-308D7D91A2A1.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_6.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/510000/792E4068-00CC-0A4E-B303-0ECC420FCF16.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_99.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/510000/B22F6C45-21B7-CE4F-A622-2EBDEB01301D.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_98.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/510000/CC31B7B9-0C25-7E48-9B0E-DEE48591741E.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_91.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/510000/F76B55B0-7187-E941-BA98-933F279C0DC0.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_90.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/510000/84B78460-17E7-654A-92C8-427DD35C9941.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_93.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/510000/198D8E4F-2E77-914E-B7DC-022609526F99.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_92.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/510000/A846F7FA-59B7-674F-942B-7E1FDE45825B.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_95.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/510000/131503BB-89FF-ED44-A3F9-6613C8DA41D6.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_94.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/510000/DAE9CA65-2209-4342-986F-6D8342E6016A.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_97.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/510000/C62AD51E-C4C7-514A-9567-723FF07D219F.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_96.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/40000/F3C59EDD-E693-ED4C-A764-8C0DF4BA71C0.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_11.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/40000/7F080727-3061-284B-A2BE-CE310BD14192.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_10.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/40000/6ECF578D-4476-E849-A0F4-587B37CE3B86.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_13.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/40000/206334DF-9A3F-9D4B-8EFC-1E97495F91FA.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_12.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/40000/E9930751-42EA-A548-A20E-AAB849337222.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_15.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/40000/2124BC8B-F530-C64F-A562-0BD2C4FF04B1.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_14.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/40000/A4C2D56F-3DBE-154C-AF16-7B986E65BAEA.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_17.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/40000/29AE04E2-AA3A-FA45-9074-C7F99CEE1743.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_16.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/40000/CF2BDFA0-EA8F-2E4E-8C48-0C799B597ED4.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_19.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/40000/CBD41ECE-6326-F249-A336-3D080C3D90EF.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_18.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/510000/D795253F-C616-9E44-8B65-E3AF60099290.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_117.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/510000/60AA2A1C-E0E1-9E49-B38D-08EC8411AD32.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_116.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/50000/AD7A8C71-F4F7-884F-9C99-26D5AC0BF82E.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_48.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/50000/BF597A1F-3CC4-434E-B0B9-E5C9E5BDF710.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_49.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/50000/9378F071-2685-2343-AAFD-43837355E9E3.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_46.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/510000/A42192B2-2744-B84F-AD21-721DB0769C3F.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_86.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/50000/C5916B30-E8A4-7D41-A33C-693A06257457.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_44.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/50000/4426CDD6-513C-794B-94C9-3944F010CB72.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_45.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/50000/CA193A1D-7CA8-2B45-AD59-4C6C73E66C14.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_42.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/50000/659ABBB5-0521-DB4E-A820-C090CBDA747D.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_43.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/50000/A4C00021-5639-614F-80C1-1A8CA7ABD333.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_40.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/510000/44D16CB3-8ECD-DC45-9889-4D015E26B2BE.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_87.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/50000/18C95953-CB9E-2D4C-B1C9-D0A6231B4448.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_1.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/50000/C0C1C485-2CE2-D54C-8AE3-7A4F3CE364F9.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_5.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/40000/DAE0D3CC-C1E5-9841-B966-B91A365C5067.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_9.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/510000/3F029DFA-577C-5B45-B3A0-619E4F643E08.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_77.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/510000/131BA4AE-BD1A-C546-B486-E2A33B57B068.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_76.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/510000/5D482FB4-4D2B-2C42-9FDF-0701BCA3DA7F.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_75.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/510000/23E293C1-21E9-6945-A8A9-B2D03E474B73.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_74.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2520000/4B0171DE-669F-184A-94EB-F997600F5BAE.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_73.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2520000/6818EF8F-B27B-E849-8B78-F17AF941D60F.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_72.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2520000/34A768B4-284F-8045-BB20-D7F74EFAAC90.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_71.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2520000/CA5CB001-C358-D243-8634-B042DEB0B6A9.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_70.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/510000/6F2105BA-E776-0E4D-9D6B-BA02BBE97FBA.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_79.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/510000/5A2E69A2-3A95-994F-886A-E35486607C19.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_78.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/50000/C02E9963-E0DC-664B-924B-26A32DE68A05.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HWminusJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_47.root "
queue
        