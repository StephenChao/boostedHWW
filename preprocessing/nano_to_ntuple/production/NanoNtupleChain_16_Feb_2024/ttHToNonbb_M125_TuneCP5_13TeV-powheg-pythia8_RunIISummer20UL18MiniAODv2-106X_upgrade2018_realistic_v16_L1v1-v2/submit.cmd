
universe=Vanilla
RequestMemory = 2048
RequestCpus = 1
executable=/ospool/cms-user/yuzhe/NanoNtupleChain/boostedHWW/preprocessing/nano_to_ntuple/production/NanoNtupleChain_16_Feb_2024/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/exe_UL18_NanoNtupleChain.sh
transfer_executable=True
transfer_input_files=/ospool/cms-user/yuzhe/NanoNtupleChain/boostedHWW/preprocessing/nano_to_ntuple/x509up_u12976,/ospool/cms-user/yuzhe/NanoNtupleChain/boostedHWW/preprocessing/nano_to_ntuple/scripts/fetchFiles.py
transfer_output_files=out_1.root
log=/ospool/cms-user/yuzhe/NanoNtupleChain/boostedHWW/preprocessing/nano_to_ntuple/production/NanoNtupleChain_16_Feb_2024/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/log//$(Cluster).log
output=/ospool/cms-user/yuzhe/NanoNtupleChain/boostedHWW/preprocessing/nano_to_ntuple/production/NanoNtupleChain_16_Feb_2024/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/log/std_logs/$(Cluster).$(Process).out
error=/ospool/cms-user/yuzhe/NanoNtupleChain/boostedHWW/preprocessing/nano_to_ntuple/production/NanoNtupleChain_16_Feb_2024/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/log/std_logs/$(Cluster).$(Process).err
notification=Never
should_transfer_files = YES
when_to_transfer_output = ON_EXIT
x509userproxy=x509up_u12976
+MaxRuntime=150000
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/230000/CFB91D97-8B4C-7B47-827C-11789CC3FB2C.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_133.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/230000/08714258-4AC6-F44D-B500-0F40ADC49340.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_132.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/230000/65A7AD7C-4F6E-9B4F-B8E5-487FCC0F1476.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_131.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/230000/19229B3D-FA7C-A04E-B840-E986927E8F42.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_130.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/230000/C53104D1-8662-C245-9D72-077537537F35.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_137.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/230000/EE52B31D-A5B9-5242-8BAB-BF19C72E57EB.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_136.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/230000/5763CFC0-1EEE-7743-8497-CC12FA0EC6DD.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_135.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/230000/DE1ED339-D113-E847-8BD3-37832154E429.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_134.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/230000/CF6043E7-D5D7-B64D-AC39-096CA6175D11.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_139.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/230000/D86AFA4C-5CCE-784A-9F33-2F97E968AB35.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_138.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/40000/AF9A6FE9-DA6F-094F-8B86-599B1A204013.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_93.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2510000/DB520562-1079-4E42-91C6-5FDD5DB1B3DB.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_24.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2510000/CCAF5691-4244-4E4E-921B-7CACF965780D.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_25.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2510000/31C4FF78-867D-5B42-86E6-5090C4BB8675.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_26.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2510000/5F223A41-ECED-164B-8013-52CC123CE0F7.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_27.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2510000/91280B53-1B44-534B-974D-CE55E9B35BAA.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_20.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2510000/B2BDD03F-7A4C-6E4C-BBAF-3A004F77D5CA.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_21.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2510000/313E1834-59B2-8945-ABF5-F35460CABCC8.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_22.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2510000/36C20869-CBBC-E041-80E3-44A940E5A849.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_23.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/40000/F1810712-7B85-8242-94EC-5576218CEB1D.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_95.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2510000/1EAC8D68-055F-AB4A-BACD-0315638C369F.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_28.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2510000/C7A442DA-67AA-8645-9B37-282CA35FB32B.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_29.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/40000/01368E94-683A-0844-ACEE-0C7770C6F46D.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_94.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/100000/1354FE0F-727D-2B40-B6D0-D5D73EEA4D4E.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_0.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2430000/CA0607C6-6EFF-574F-B21B-8B4D4E62B4AA.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_4.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2500000/507BCA20-2927-9640-9A6A-C3E42B6284D9.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_8.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/230000/842A8EE1-CEAD-EF49-BAD9-9AE26893E60F.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_96.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/230000/C7E7750F-07B7-1E43-A057-EDE13CC87DCB.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_120.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/230000/1732172A-ABA1-D748-B237-A15661FF0892.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_121.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/230000/33C4D7DC-6010-F842-B11C-865C404331B5.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_122.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/230000/678B4465-3D1A-4447-AB75-B8E477C2683B.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_123.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/230000/7EE0D572-8341-524F-B566-F8EA5DF7B383.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_124.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/230000/DD37B3FA-573A-4C4A-9389-CE163A2E581A.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_125.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/230000/A988A913-B5DC-2E4D-8B00-FAC3E3A35174.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_126.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/230000/C32CBD9C-7E66-C540-A978-5E3567524487.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_127.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/230000/488982ED-5891-BC46-8280-4FB30208C303.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_128.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/230000/3D870A0A-F76F-D646-911A-870AB7F93654.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_129.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/40000/965D1D58-F6BD-4D42-A793-2978FC61F3AD.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_91.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/250000/CC1E3EE8-83B7-AD4D-8A7C-A8D398BE2F6D.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_59.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/250000/1AAB78CB-DB0C-8A49-823B-C70140192BA9.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_58.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/250000/AA963D2D-2AC0-4D41-90FF-FFF9A752439C.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_55.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/250000/75100C1D-C9DF-704F-A5BE-B91002A0E6D5.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_54.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/250000/1A52D9BC-F545-294C-B194-13CAAF57B856.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_57.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/250000/F151DDD5-D73E-B744-84E6-C0CC4221817C.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_56.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/250000/345D6F4C-56B5-2841-B836-10A478E7F8EA.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_51.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/250000/F242F150-3BBE-894C-A1BC-B28E4BCA4ED6.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_50.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/250000/53BFD737-360B-EE4D-8C61-0EF2B4998065.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_53.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/250000/0C405A77-8152-FF4B-BF25-1566D84D1ADE.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_52.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/40000/0D218BBC-6B75-814A-A24D-25B822DCDF5E.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_90.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/230000/66A4F6D2-FEF4-AF4E-8CA0-03758C632FED.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_115.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/230000/1DE70D5E-D7CF-C942-B049-99A0B7C63161.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_114.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/40000/60BAB16B-E7CE-E34E-BBA0-C57F06D63F04.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_88.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/40000/D1A1AB53-B59E-974B-9C34-3EEB2C6E411A.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_89.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/230000/3F063F9E-64B5-4048-892F-8636C735A7D5.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_111.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/230000/C57BB72A-2B3B-924D-8E7F-D3B8B6BA622F.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_110.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/230000/447E52CB-CB1A-9845-926A-A2EF8BB02429.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_113.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/230000/393F82DE-85EA-3C4E-A609-B41D3A9A4577.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_112.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/40000/A51708F3-88B2-1645-98E2-ACCCDBA6437C.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_82.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/40000/163D8CB1-D23C-C348-BD35-55F4714E240C.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_83.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/40000/09A6C149-CAE5-FF4D-9D41-19F349774CCE.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_80.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/40000/2904A471-107E-C14C-9712-1332B7351273.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_81.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/230000/259CF2A3-F74E-3D4F-83EE-370C43B53C52.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_119.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/230000/A4C0FD93-1C97-C44D-8E22-1AF6559ACBE4.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_118.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/40000/1648F0CD-C793-3749-9033-F93C214F29E2.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_84.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/40000/C0417A19-8887-3D4E-AA7D-A96C5E537BD0.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_85.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2430000/0C847DC4-D6B5-7B49-918A-F6192EF3E9B6.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_3.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2500000/58C1FFEF-258E-8143-AC11-D19EC9EC932D.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_7.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/230000/4BBEC897-D2BF-584D-AF53-C91A76088280.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_108.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/230000/5CD46A97-05B9-7E41-B4DB-C2A4B3451DCE.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_109.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/230000/66448604-BEB0-5147-B09D-50505506413B.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_102.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/230000/71A609D8-7401-B94D-B848-6CA7409E3938.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_103.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/230000/5B8CF603-800A-C644-AE65-991053567FD4.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_100.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/230000/8ECB8523-41CB-8A4A-8456-F0408EB8DABC.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_101.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/230000/134706CE-04C1-454A-818C-2DEA5DBF8FE7.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_106.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/230000/8A03F20A-11B6-DB4C-BD7E-D29806222FBD.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_107.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/230000/B56D47E0-386E-864D-A34B-D57EC652F316.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_104.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/230000/D8C9DA0D-E3DB-614A-B4D4-D90BBECE88EB.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_105.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/250000/5FF71390-679F-7A4A-91A5-D2D63C62CD54.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_39.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/250000/21FB786D-5509-564E-BEFD-ADE554862CB4.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_38.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2510000/AB97D011-B423-E047-8F8D-28ADAA444DE6.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_33.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2510000/239DDF95-9B4D-D84A-B50E-FB5DA07C8908.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_32.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/250000/AB084A80-6C81-A544-8498-4F09BD988E40.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_31.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/250000/6D9DED9E-45EB-F14C-89E4-F88B53CDC7BF.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_30.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2510000/5934A131-0EDA-CD44-ACEA-10063DAAF77C.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_37.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2510000/789F8C18-B078-AD49-A8EC-F94BCAE0E342.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_36.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2510000/B9189DF1-BBC6-004C-B782-658ADFB491FB.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_35.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2510000/9BFEF406-1807-4E4D-A34E-EB288B2EDF3D.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_34.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/250000/42EB23F8-3404-3841-8981-860C6A5CDE97.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_60.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/250000/2FB450D2-0B5A-DD46-8900-A3BAE077B02D.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_61.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/250000/D9005592-0CF8-3947-BB48-0E18348F2905.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_62.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2510000/F9D6E793-99E9-A143-9F7A-FF7D360AD078.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_63.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2510000/E80DFE83-E205-B242-8AB7-BEB461F8D074.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_64.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2510000/0F5725C8-FDA2-1244-8164-133DB1A6F39C.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_65.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/100000/BB37F565-D179-F946-82E0-EAC7530C37C8.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_66.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/100000/21EBFE5D-B4C4-A340-AE3A-6A41B96DEABA.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_67.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/100000/E76E2B2D-44E1-A247-A6EB-77955D933166.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_68.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/100000/2E05C6BD-595C-ED4F-A75A-40D962236826.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_69.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2430000/50006F74-170C-CD49-9EBA-2093BD96A823.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_2.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2430000/4471FFF5-147C-BD4A-8800-E10D0C608157.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_6.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/230000/4C0D352B-1E49-3E48-AE8E-B002EB6635C0.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_97.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/230000/35CB6F96-89CF-7C44-A6EF-CCAF598EC5F5.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_99.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/230000/38F6AEF3-B362-1349-9DC8-7F0CD3AF4AE5.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_98.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/230000/C0EB00B0-86CA-7C43-A64D-80407EB30892.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_164.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/230000/8ED152B8-E368-464A-9A9F-F7708802CCD3.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_165.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/230000/BAD7A431-1C85-0A45-8B54-EF5F1940AEF1.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_166.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/40000/5FE47D4A-10AE-D44C-965A-0E64B518B6FD.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_92.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/230000/301CFEF8-0DD0-8246-9F3D-AE2342BE4DE6.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_160.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/230000/D7254883-11DA-3146-8CE7-224FAE383EFE.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_161.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/230000/A63A9C2D-CB0F-D24D-8058-24D54901DA90.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_162.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/230000/932143E2-E81C-964E-8882-BAE0A86A093B.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_163.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2500000/90698CF9-FF9B-234B-9682-B10E94900678.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_11.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2500000/DDD8D138-2D24-364A-8602-83BC51BDD4E6.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_10.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2500000/B2409106-9CF3-CA49-BF07-DC5D4CD87486.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_13.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2500000/1A32CE19-4BB4-2B45-A84E-55BB33B64AF4.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_12.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2510000/DC3074AD-AEFF-DD4E-8258-21F876A767D3.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_15.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2510000/16E46088-5935-9648-B7C0-80F65EA76C67.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_14.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/250000/11912D91-C79A-6B47-AEF5-6F7F69B16444.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_17.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/250000/41E67BC3-E172-6446-BE9C-0DF2895BFBBE.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_16.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/250000/19669B96-6CE0-FA4D-A66E-5C18B1069C00.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_19.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/250000/B2DA0E9D-6BA1-E648-8816-FDF61F689C9E.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_18.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/230000/989D432C-511B-AC4F-AB74-40012BEE6B55.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_117.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/230000/9BD9265A-D815-5149-9287-250656FD5406.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_116.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/230000/B6B81988-C776-A042-BDB9-5FED39986F0E.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_151.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/230000/EEA678C3-2E6D-684B-BBD9-131677D87AA3.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_150.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/230000/058ABBFB-C7B2-2E4B-B5E4-A14CF09367F0.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_153.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/230000/5D87E8F0-E74A-1441-AAD7-4CA1D549CDD8.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_152.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/230000/1880BD5F-7109-0745-ABBA-391F0C055A3E.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_155.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/230000/6B2B79CC-B424-AC48-A416-36E0C8F0E0F6.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_154.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/230000/DA8E4155-0A06-0843-9BBD-2C79EA723FD5.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_157.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/230000/C0031BB0-A393-B740-8703-6A68FCC7CF84.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_156.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/230000/C5FE03D9-B3B3-5247-A03C-3484D232FBBA.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_159.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/230000/79E92D3A-05CE-6A47-ADFE-D3CDF6E3CC9A.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_158.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/250000/4BF0403A-45C6-B340-A098-03FFBF3C949A.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_48.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/250000/AB95865E-4428-A941-BC7C-007300ADA83E.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_49.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/250000/89E6D421-EF10-5A4F-9956-BEAF95642C46.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_46.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/40000/12743DCC-BF26-104C-8B1A-6F44662FB9D2.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_86.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/250000/81F5E4BC-33FC-6B48-8A57-2E520D855610.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_44.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/250000/B852B793-6A6E-884F-AB84-B1A902C9AB54.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_45.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/250000/EF2802FF-B71A-8D45-95C0-8CFA59784BE7.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_42.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/250000/C18AD781-0DAA-D041-B9D9-C77AA19E4C4C.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_43.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/250000/B4047FAD-DFF0-8D49-91F2-72B54F6D1B1F.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_40.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/40000/8C07AADA-F018-3D42-97D9-CC2312E08E64.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_87.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2430000/36897EAD-1994-C044-AD30-7817AA6E90CA.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_1.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2430000/02347392-FA4F-B846-B651-132977FEA46F.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_5.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2500000/6E5AE749-6770-BD4B-8AC1-4CA51793D893.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_9.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/230000/17AA316A-8E97-F04B-9F60-36BB76782058.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_146.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/230000/86B9FEA4-9B9A-A047-927D-046BD5439749.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_147.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/230000/973246EC-C919-C34F-9171-1A6E1CD6F90C.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_144.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/230000/E6D1CF11-62D7-0441-A47D-C5AD13A5DF06.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_145.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/230000/A72788B9-C8D9-6142-894D-0D25311BD9E1.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_142.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/230000/FC491123-8619-6244-91E9-DEC668F14D41.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_143.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/230000/71946FB6-D263-044F-A37B-2A4331B73F4F.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_140.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/230000/0D618DEE-5E8D-8E4B-95C1-A0E74B095AB0.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_141.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/230000/0820293F-D545-654A-8B17-B6B5DB9EAA81.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_148.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/230000/50BC962E-56C1-DB49-84ED-861FCFFBBAD3.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_149.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/40000/D8CF66F3-A930-DD42-BDC7-8690411AF2B7.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_77.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/40000/9559F1D3-9F47-8C47-891B-D5EF2D105D04.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_76.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/40000/36630362-4829-094B-90FD-FA41A7107EDE.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_75.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/40000/41DC8CF9-21F9-2F43-96ED-8592DA62B7A8.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_74.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/24310000/9FD56AF6-9157-944A-878A-0A43DFF48FD4.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_73.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/24310000/1E87BA92-6901-6C48-B6CD-0AC438FF1096.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_72.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/100000/CD93667B-E883-0F40-B50A-53E5C8E95B23.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_71.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/100000/2079491E-384B-9746-A120-6DCDBFB1EE7F.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_70.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/40000/02B143F5-54C1-4148-AC4A-024102003B17.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_79.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/40000/915D5C49-EDD8-0942-86E2-7BE14B294A9F.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_78.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/250000/2426AB3A-B788-BC47-90F8-C56498FBDBDD.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_41.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/250000/FBECE96A-5815-F647-B9E7-86E8660B6F06.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_47.root "
queue
        