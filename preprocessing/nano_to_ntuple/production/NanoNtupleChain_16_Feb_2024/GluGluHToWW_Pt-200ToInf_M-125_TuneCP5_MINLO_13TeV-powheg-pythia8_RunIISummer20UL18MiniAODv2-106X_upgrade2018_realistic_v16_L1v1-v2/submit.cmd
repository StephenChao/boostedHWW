
universe=Vanilla
RequestMemory = 2048
RequestCpus = 1
executable=/ospool/cms-user/yuzhe/NanoNtupleChain/boostedHWW/preprocessing/nano_to_ntuple/production/NanoNtupleChain_16_Feb_2024/GluGluHToWW_Pt-200ToInf_M-125_TuneCP5_MINLO_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/exe_UL18_NanoNtupleChain.sh
transfer_executable=True
transfer_input_files=/ospool/cms-user/yuzhe/NanoNtupleChain/boostedHWW/preprocessing/nano_to_ntuple/x509up_u12976,/ospool/cms-user/yuzhe/NanoNtupleChain/boostedHWW/preprocessing/nano_to_ntuple/scripts/fetchFiles.py
transfer_output_files=out_1.root
log=/ospool/cms-user/yuzhe/NanoNtupleChain/boostedHWW/preprocessing/nano_to_ntuple/production/NanoNtupleChain_16_Feb_2024/GluGluHToWW_Pt-200ToInf_M-125_TuneCP5_MINLO_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/log//$(Cluster).log
output=/ospool/cms-user/yuzhe/NanoNtupleChain/boostedHWW/preprocessing/nano_to_ntuple/production/NanoNtupleChain_16_Feb_2024/GluGluHToWW_Pt-200ToInf_M-125_TuneCP5_MINLO_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/log/std_logs/$(Cluster).$(Process).out
error=/ospool/cms-user/yuzhe/NanoNtupleChain/boostedHWW/preprocessing/nano_to_ntuple/production/NanoNtupleChain_16_Feb_2024/GluGluHToWW_Pt-200ToInf_M-125_TuneCP5_MINLO_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/log/std_logs/$(Cluster).$(Process).err
notification=Never
should_transfer_files = YES
when_to_transfer_output = ON_EXIT
x509userproxy=x509up_u12976
+MaxRuntime=150000
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/GluGluHToWW_Pt-200ToInf_M-125_TuneCP5_MINLO_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/40000/A2723114-0D26-4C4C-AE1A-B8D8B52D19F2.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/GluGluHToWW_Pt-200ToInf_M-125_TuneCP5_MINLO_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_24.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/GluGluHToWW_Pt-200ToInf_M-125_TuneCP5_MINLO_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/40000/95A2A128-618D-5644-B459-6E01366EB065.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/GluGluHToWW_Pt-200ToInf_M-125_TuneCP5_MINLO_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_25.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/GluGluHToWW_Pt-200ToInf_M-125_TuneCP5_MINLO_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/40000/3F8089F2-CF0D-4942-BCA7-DB87347C7312.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/GluGluHToWW_Pt-200ToInf_M-125_TuneCP5_MINLO_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_26.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/GluGluHToWW_Pt-200ToInf_M-125_TuneCP5_MINLO_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/40000/D8003FEA-4261-744D-BF5E-0497474D1AD0.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/GluGluHToWW_Pt-200ToInf_M-125_TuneCP5_MINLO_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_27.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/GluGluHToWW_Pt-200ToInf_M-125_TuneCP5_MINLO_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/40000/D0907552-B6CB-A946-A64E-2087F2259E4E.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/GluGluHToWW_Pt-200ToInf_M-125_TuneCP5_MINLO_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_20.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/GluGluHToWW_Pt-200ToInf_M-125_TuneCP5_MINLO_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/40000/FA51E38F-95BF-D44D-AEAF-DC81D7F08722.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/GluGluHToWW_Pt-200ToInf_M-125_TuneCP5_MINLO_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_21.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/GluGluHToWW_Pt-200ToInf_M-125_TuneCP5_MINLO_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/40000/5BAB9465-2AE7-794B-8AC5-472CDCB073BC.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/GluGluHToWW_Pt-200ToInf_M-125_TuneCP5_MINLO_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_22.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/GluGluHToWW_Pt-200ToInf_M-125_TuneCP5_MINLO_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/40000/75369DDD-96E3-6C4F-A949-689658F4FEBF.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/GluGluHToWW_Pt-200ToInf_M-125_TuneCP5_MINLO_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_23.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/GluGluHToWW_Pt-200ToInf_M-125_TuneCP5_MINLO_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/40000/5CBE8385-6330-2A46-A822-5DAA1CD7856F.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/GluGluHToWW_Pt-200ToInf_M-125_TuneCP5_MINLO_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_28.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/GluGluHToWW_Pt-200ToInf_M-125_TuneCP5_MINLO_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/40000/7A5D7508-298A-C945-85C2-010D4EEEC30E.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/GluGluHToWW_Pt-200ToInf_M-125_TuneCP5_MINLO_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_29.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/GluGluHToWW_Pt-200ToInf_M-125_TuneCP5_MINLO_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/60000/DA6EB4EB-2451-B34D-967A-BA345F88A078.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/GluGluHToWW_Pt-200ToInf_M-125_TuneCP5_MINLO_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_1.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/GluGluHToWW_Pt-200ToInf_M-125_TuneCP5_MINLO_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/60000/612D6EFD-9451-284D-B62B-021AF65B45A4.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/GluGluHToWW_Pt-200ToInf_M-125_TuneCP5_MINLO_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_0.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/GluGluHToWW_Pt-200ToInf_M-125_TuneCP5_MINLO_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/60000/9E3C7622-7972-0845-A95D-F64E37C2F1EB.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/GluGluHToWW_Pt-200ToInf_M-125_TuneCP5_MINLO_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_3.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/GluGluHToWW_Pt-200ToInf_M-125_TuneCP5_MINLO_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/60000/39BEDE0A-846C-0045-A2F8-4C9E3D6441FD.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/GluGluHToWW_Pt-200ToInf_M-125_TuneCP5_MINLO_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_2.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/GluGluHToWW_Pt-200ToInf_M-125_TuneCP5_MINLO_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/60000/7C1E454D-04E9-0944-A4C1-43DDA6642D49.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/GluGluHToWW_Pt-200ToInf_M-125_TuneCP5_MINLO_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_5.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/GluGluHToWW_Pt-200ToInf_M-125_TuneCP5_MINLO_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/60000/910B39DE-EF08-9149-9B0D-D92CF5E64444.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/GluGluHToWW_Pt-200ToInf_M-125_TuneCP5_MINLO_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_4.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/GluGluHToWW_Pt-200ToInf_M-125_TuneCP5_MINLO_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2560000/05DE655B-C779-7346-8268-C382CB85B79F.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/GluGluHToWW_Pt-200ToInf_M-125_TuneCP5_MINLO_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_7.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/GluGluHToWW_Pt-200ToInf_M-125_TuneCP5_MINLO_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/60000/8974A049-1D37-2E42-86CD-17C53C5794A3.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/GluGluHToWW_Pt-200ToInf_M-125_TuneCP5_MINLO_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_6.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/GluGluHToWW_Pt-200ToInf_M-125_TuneCP5_MINLO_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/40000/50005C3F-A052-9E40-87A6-5FF5420C6C37.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/GluGluHToWW_Pt-200ToInf_M-125_TuneCP5_MINLO_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_9.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/GluGluHToWW_Pt-200ToInf_M-125_TuneCP5_MINLO_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/40000/4605C2E7-FEFF-AC4E-AAA9-9737D0451EFF.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/GluGluHToWW_Pt-200ToInf_M-125_TuneCP5_MINLO_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_8.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/GluGluHToWW_Pt-200ToInf_M-125_TuneCP5_MINLO_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/40000/E6CBCD1B-F390-5342-97DC-0BA33E46D248.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/GluGluHToWW_Pt-200ToInf_M-125_TuneCP5_MINLO_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_11.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/GluGluHToWW_Pt-200ToInf_M-125_TuneCP5_MINLO_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/40000/E1B7CB31-1BED-3742-9293-AC98EA898B44.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/GluGluHToWW_Pt-200ToInf_M-125_TuneCP5_MINLO_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_10.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/GluGluHToWW_Pt-200ToInf_M-125_TuneCP5_MINLO_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/40000/0D6028AB-1B29-E84B-B118-8621162DE629.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/GluGluHToWW_Pt-200ToInf_M-125_TuneCP5_MINLO_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_13.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/GluGluHToWW_Pt-200ToInf_M-125_TuneCP5_MINLO_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/40000/49FA627C-424A-1A49-A645-F2D8708CDA7D.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/GluGluHToWW_Pt-200ToInf_M-125_TuneCP5_MINLO_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_12.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/GluGluHToWW_Pt-200ToInf_M-125_TuneCP5_MINLO_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/40000/9074B6C1-799F-D94D-90C0-217D3A43F325.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/GluGluHToWW_Pt-200ToInf_M-125_TuneCP5_MINLO_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_15.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/GluGluHToWW_Pt-200ToInf_M-125_TuneCP5_MINLO_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/40000/7FD57C06-3F5B-4048-90D0-BCF3B3EAC8DF.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/GluGluHToWW_Pt-200ToInf_M-125_TuneCP5_MINLO_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_14.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/GluGluHToWW_Pt-200ToInf_M-125_TuneCP5_MINLO_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/40000/5D8A2545-C7D8-784D-9750-2FC4DFB6CCD0.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/GluGluHToWW_Pt-200ToInf_M-125_TuneCP5_MINLO_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_17.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/GluGluHToWW_Pt-200ToInf_M-125_TuneCP5_MINLO_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/40000/7BC22EAB-C76C-4C4A-B9C4-5AE14A9A5F87.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/GluGluHToWW_Pt-200ToInf_M-125_TuneCP5_MINLO_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_16.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/GluGluHToWW_Pt-200ToInf_M-125_TuneCP5_MINLO_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/40000/0FC9F8F4-1575-8F43-8273-16A2363E1FF2.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/GluGluHToWW_Pt-200ToInf_M-125_TuneCP5_MINLO_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_19.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/GluGluHToWW_Pt-200ToInf_M-125_TuneCP5_MINLO_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/40000/4D9A37E6-0DE5-C14F-9F3A-9136E0EA56F4.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/GluGluHToWW_Pt-200ToInf_M-125_TuneCP5_MINLO_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_18.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/GluGluHToWW_Pt-200ToInf_M-125_TuneCP5_MINLO_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/40000/F069B058-ABEA-E34F-B0D1-3A6A393AC832.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/GluGluHToWW_Pt-200ToInf_M-125_TuneCP5_MINLO_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_30.root "
queue
        