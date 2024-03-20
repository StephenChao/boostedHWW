
universe=Vanilla
RequestMemory = 2048
RequestCpus = 1
executable=/ospool/cms-user/yuzhe/NanoNtupleChain/boostedHWW/preprocessing/nano_to_ntuple/production/NanoNtupleChain_16_Feb_2024/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/exe_UL18_NanoNtupleChain.sh
transfer_executable=True
transfer_input_files=/ospool/cms-user/yuzhe/NanoNtupleChain/boostedHWW/preprocessing/nano_to_ntuple/x509up_u12976,/ospool/cms-user/yuzhe/NanoNtupleChain/boostedHWW/preprocessing/nano_to_ntuple/scripts/fetchFiles.py
transfer_output_files=out_1.root
log=/ospool/cms-user/yuzhe/NanoNtupleChain/boostedHWW/preprocessing/nano_to_ntuple/production/NanoNtupleChain_16_Feb_2024/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/log//$(Cluster).log
output=/ospool/cms-user/yuzhe/NanoNtupleChain/boostedHWW/preprocessing/nano_to_ntuple/production/NanoNtupleChain_16_Feb_2024/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/log/std_logs/$(Cluster).$(Process).out
error=/ospool/cms-user/yuzhe/NanoNtupleChain/boostedHWW/preprocessing/nano_to_ntuple/production/NanoNtupleChain_16_Feb_2024/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/log/std_logs/$(Cluster).$(Process).err
notification=Never
should_transfer_files = YES
when_to_transfer_output = ON_EXIT
x509userproxy=x509up_u12976
+MaxRuntime=150000
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2810000/1272999B-42F2-F142-B6F7-C8AAB59A5B21.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_133.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2810000/D24FEA8F-554E-2B4C-8302-FB640F773B28.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_132.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2810000/2F166428-5AF9-9F4B-B38F-0E7FD6ED1F95.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_131.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2810000/33F98996-7D3F-5047-AC08-1F20A6D3A588.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_130.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/28110000/67D9171E-B0EB-374B-B9A1-27749F6E74DA.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_135.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2810000/C59A4A91-BADC-184C-B06F-84226DBC2BE6.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_134.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2820000/2826B8E4-47BD-874E-BD00-615DB32FF4CE.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_41.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/70000/E35797A5-0370-0742-947B-89435BA5F97E.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_24.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/70000/C2A86107-1267-9F43-900C-2F933A40C1BF.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_25.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/70000/AEBA4035-E84A-8A4B-9764-A861FA22011C.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_26.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/70000/C6768732-FF2F-4744-9606-3AE667F3FA3D.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_27.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/70000/7B1CF97E-23A6-0E4E-BCDF-AF10EE3F8852.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_20.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/70000/BC7B0FC5-05CA-7D4D-9E39-A32DD0357E99.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_21.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/70000/3F64EFB5-12B7-424E-9FFD-F74F2A1EB42D.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_22.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/70000/44BEF8ED-6832-E142-B623-38D72FE1AF58.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_23.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/70000/1132872C-A1A3-854E-B5AF-8B3F8E5294D1.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_28.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/70000/9D5161F1-3FE6-F141-834D-425F33F46321.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_29.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2820000/EECA4269-9BE8-9942-9808-BC16B5E95BF7.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_0.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/70000/0BF5E446-968D-754A-8844-A3E53BD277ED.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_4.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/70000/46B08160-2E9F-F841-8879-2E0F09758DDE.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_8.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2810000/BFA2A05A-C9CC-A04F-A6AE-9EDDF07548F9.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_120.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2810000/F02E0E7B-15E4-534B-9C56-D64D90FFD00E.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_121.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2810000/E1A2CBED-B7BA-8B42-A06F-3AC64FD4E718.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_122.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2810000/5185EE9F-008B-F845-88E6-A7A2F434DFEC.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_123.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2810000/7123AD6E-09A3-5547-B93A-04ADDE4C3B2D.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_124.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2810000/6489452D-4A2D-524F-8A98-0752DBEDFE9B.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_125.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2810000/8C02E93F-BC9E-F848-BBC2-8ABF3C0E5CAD.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_126.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2810000/21685DCE-E698-BC42-A93D-89469704C4DA.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_127.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2810000/C3E029FC-1BB0-F94B-9C66-30728D4617BA.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_128.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2810000/AF5EE10F-0359-7E4F-8992-86B04A304302.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_129.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2820000/03D3E254-BC38-B244-9E41-0165FAD6806F.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_59.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2820000/58D1B03F-7F4F-204D-8C9A-298FBF5C047B.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_58.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2820000/9E8ADFAC-68D6-7347-9CBB-6DBCC4B2F370.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_55.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2820000/60E2F397-CDC7-DA47-9C9F-CE33B41947AE.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_54.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2820000/CC084E6D-EA90-CD45-AF67-FC6C3458460D.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_57.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2820000/2809BE27-D7E9-0A4C-A7DD-63CC3BD62920.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_56.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2820000/7937410A-E015-F84A-860A-E407F2FE24FF.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_51.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2820000/A405B129-D6E3-6A46-8A06-3A635C936A34.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_50.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2820000/6AE860E9-225D-AB49-AF56-3166BE3FB2A8.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_53.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2820000/C04E71D4-0857-BD47-844A-6BF30DCBEEC3.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_52.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2810000/61F7FDBF-5E1E-2D41-B47B-DCE9A2753486.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_115.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/70000/FA477583-90EB-4941-8F7F-477D0F2FC13D.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_114.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2820000/E143776E-6359-F74D-AABD-50A473BDFBE5.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_88.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2820000/6BCD05D5-FC1F-DB4A-8A08-6D335D8B3739.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_89.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/70000/F53FD000-4273-7646-B503-64E9BEC106B2.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_111.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/70000/3B3FC3F4-AC08-2349-B5ED-CB8FA34D57E4.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_110.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/70000/F13A4F19-5D25-8A47-BF51-CED78B1168B3.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_113.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/70000/8B76CD47-0FD6-4C48-BD30-EAF7D93B7B80.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_112.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2820000/AC6E2DBE-FCA1-CE49-9753-329433EB82BC.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_82.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2820000/44DF1F87-814B-A14A-904A-EBBC7F9E6536.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_83.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2820000/4E3F130F-9807-DF4C-BCDF-E92847D39C77.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_80.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2820000/CDBADBBF-4285-EF47-9950-8505472ECB92.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_81.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2810000/655EB699-2F07-C841-AA2D-E8135CC409BA.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_119.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2810000/13AEE1E5-8E6D-0446-9E72-32B94E649B40.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_118.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2820000/8DBD88E2-2E26-6F42-90A8-BE1585B7AF6B.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_84.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/70000/BA1C0013-00CE-7D42-AC83-8ACD7A911012.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_85.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/70000/5E39DAC6-9003-CA43-9BC0-B4C86B2E29DF.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_3.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/70000/A1B3B031-2486-7A46-B40D-E685F5763AC3.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_7.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/70000/336DC077-C3CA-794E-B224-4D936169E2E2.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_108.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/70000/EDCB417F-B19E-4B41-8416-A663778D22F9.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_109.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/70000/DB0E8B24-7382-AB47-98DD-1B34DC1410E4.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_102.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/70000/025C3D60-9134-1146-AC51-5F752E33FE92.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_103.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2820000/4F10102C-4D02-7646-AEB3-A58A3A2B672A.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_100.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/70000/04836F45-4F81-E147-8A62-9AF7DF74AFBA.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_101.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/70000/810C5136-653A-FC40-B62F-6FF31C5396FF.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_106.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/70000/B77A5AF5-ABCA-D44B-A471-EF8FE4D5FA6C.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_107.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/70000/A009ECE8-5F42-9145-9202-986DF35F125E.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_104.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/70000/D78E168C-7AF4-7040-BE70-F73A3036517D.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_105.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2820000/74CA5316-DCE6-2F48-A847-ACA7BF0647EB.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_39.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2820000/D73E30FA-A616-2B41-9D57-0D26DD2FDB06.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_38.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2820000/CA41CBEF-35B1-9341-8FD1-11A52AD2947B.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_33.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2820000/C0092844-2353-D141-8F11-834BCC55CF2B.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_32.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2820000/763C7209-C9E1-E143-A52F-11080A6CCB30.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_31.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/70000/D7BAB0B6-E188-354F-B3B1-A232126D2684.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_30.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2820000/06209FC2-5B95-BC4F-A41D-1BA077C39DAA.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_37.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/70000/A4FF4C62-B91E-7E47-81EC-AC69A75BEA37.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_36.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2820000/E197AED0-D486-4549-830A-43E4AA847252.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_35.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2820000/121273D8-357F-084A-8F31-03D82144281B.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_34.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2820000/21CFAF37-477B-0B49-BA65-671C5FD8C13A.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_60.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2820000/A1C2BBED-CA0C-B746-BAC7-14D6101B28F4.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_61.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/70000/02439A3A-267B-BF4A-AF69-C40371CD9B43.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_62.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/70000/5628B078-9868-C74E-A239-6B992CA21BA5.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_63.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/70000/FA43112E-640E-7149-B852-2EC232BE1EFB.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_64.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/70000/0C09690F-EA42-F448-B1FB-B0E814CFD813.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_65.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/70000/76445C4A-1E86-2C45-8CBF-223476776D0A.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_66.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/70000/A5296324-B471-0947-B20B-45A9952B8318.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_67.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/70000/B44755E4-01DB-7241-A583-337ECC29A6AC.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_68.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/70000/BBC9DF6F-A9BD-EB4C-8477-4BFB0A9260E7.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_69.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2820000/0B5633E1-C834-AA4B-AA2A-D4BDEAE3BE20.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_2.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/70000/6FF9D40D-DBED-E047-A916-AB2BA684E8A9.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_6.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2820000/A38952D4-44B5-C14F-8BCD-666B24DB2ADE.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_99.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2820000/283B5B0C-26CB-0243-8676-5A19EC56D7A9.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_98.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2820000/78A8CE15-0162-FB40-866B-26CED64A5465.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_91.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/70000/72B13B52-1673-0B45-BD5A-6EA745FC19B1.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_90.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2820000/854BF688-D23B-644E-B14A-C1B86566F0F0.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_93.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/70000/1E4E2284-5826-F64C-A9D8-0A732C9C5F80.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_92.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2820000/8B316771-CECE-8D4F-A87F-4B2D6BE181B5.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_95.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2820000/2D86F3B5-A233-9F4E-95B1-294F37B93285.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_94.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2820000/8FD71CFB-83D9-A74D-B4A6-EB1C99A3384B.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_97.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2820000/47EFCB4F-DC35-C244-841C-FE5FF84AA5D9.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_96.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2820000/D27FE6F5-BE87-064B-B7FA-6E32F494017B.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_11.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2820000/DCF4A53B-C528-924C-9D74-D97B62619397.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_10.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2820000/35D615F6-ABB0-424E-BACA-91F6025A013C.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_13.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2820000/2A896314-63F1-C645-824B-C7FF4925E890.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_12.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2820000/F079140A-8029-8A4D-8146-1524C8C01D35.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_15.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2820000/770C9938-FDA9-A34F-9C5A-F33A2D4F6E06.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_14.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2820000/333A93A9-1BED-8E4F-8858-4F73620DF20D.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_17.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2820000/9A07A144-4DF8-1744-A2F8-3756F8A9EC5A.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_16.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/70000/CD2EE0E7-368A-CE4D-8470-3BDF6FCC7456.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_19.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2820000/A2275E6C-CC1E-BE4B-B4F1-92B837B10A78.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_18.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2810000/98BCC679-E3B0-734D-B13C-4E7B0541F9FD.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_117.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2810000/BA65AA4E-2453-584F-9F41-11AC45C52156.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_116.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/70000/7DB20A24-E703-D24E-8D40-266CDA360CD9.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_48.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2820000/FA23C48B-1365-4147-851F-17A7749D2A57.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_49.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2820000/9A4496BF-851F-D34E-9214-D2503FE08489.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_46.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2820000/5FAA1E0F-3192-CF43-A64B-BDFE2103A9DB.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_86.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2820000/48CB550F-D2A2-5147-A291-5CE992C2BA2F.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_44.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2820000/664AD64F-96AA-354B-A915-377CF8E06FC5.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_45.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2820000/24672C50-EB41-CC47-9F7D-7EE6720E245A.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_42.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2820000/433DE341-89F1-8647-96CE-9A71DA3C4FEB.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_43.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2820000/5EC8E833-5711-1942-87D5-EC4818ABF879.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_40.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2820000/09661EAE-2DAA-744C-A200-7B9B9A2EE54B.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_87.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2820000/1B013288-4D56-B94C-A9A4-6FAC512DB129.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_1.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/70000/5A9F5EF9-8C18-C843-B706-6E72C8FFC5A8.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_5.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/70000/A77E7DEE-7F7F-E145-BFCC-8FF7CB0B250F.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_9.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2820000/442E3331-8DEF-2244-849B-89E92A9A2FAF.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_77.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2820000/C8BD468C-EAE5-B645-9813-28E423CEB366.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_76.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2820000/2C19B784-8F07-594E-877F-4AFF0DAF7586.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_75.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2820000/0BCCF10E-29AE-3C44-870E-75A2DECDA1E7.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_74.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2820000/13B24D90-7C1F-0C40-97E1-CD8A4E7CF70C.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_73.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/70000/67E9CF07-F117-A046-AF0C-7AB73619201E.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_72.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/70000/9400134A-44AE-B74A-8D20-C5EEFC9C7993.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_71.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/70000/C9876B8C-35DB-134E-9456-37214B4EDE53.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_70.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2820000/2DFC1C2A-C4C0-234A-ABE2-F176AF526FAE.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_79.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2820000/416BD31A-F388-0F42-975C-742669271D78.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_78.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2820000/096459C8-70A8-A64E-8865-BD9562096C69.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/VBFHToWWToAny_M-125_TuneCP5_withDipoleRecoil_13TeV-powheg-jhugen751-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_47.root "
queue
        