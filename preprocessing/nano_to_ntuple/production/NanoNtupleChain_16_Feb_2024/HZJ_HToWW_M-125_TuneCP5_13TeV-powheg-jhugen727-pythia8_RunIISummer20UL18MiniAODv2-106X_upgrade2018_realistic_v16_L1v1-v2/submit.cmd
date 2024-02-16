
universe=Vanilla
RequestMemory = 2048
RequestCpus = 1
executable=/ospool/cms-user/yuzhe/NanoNtupleChain/boostedHWW/preprocessing/nano_to_ntuple/production/NanoNtupleChain_16_Feb_2024/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/exe_UL18_NanoNtupleChain.sh
transfer_executable=True
transfer_input_files=/ospool/cms-user/yuzhe/NanoNtupleChain/boostedHWW/preprocessing/nano_to_ntuple/x509up_u12976,/ospool/cms-user/yuzhe/NanoNtupleChain/boostedHWW/preprocessing/nano_to_ntuple/scripts/fetchFiles.py
transfer_output_files=out_1.root
log=/ospool/cms-user/yuzhe/NanoNtupleChain/boostedHWW/preprocessing/nano_to_ntuple/production/NanoNtupleChain_16_Feb_2024/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/log//$(Cluster).log
output=/ospool/cms-user/yuzhe/NanoNtupleChain/boostedHWW/preprocessing/nano_to_ntuple/production/NanoNtupleChain_16_Feb_2024/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/log/std_logs/$(Cluster).$(Process).out
error=/ospool/cms-user/yuzhe/NanoNtupleChain/boostedHWW/preprocessing/nano_to_ntuple/production/NanoNtupleChain_16_Feb_2024/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/log/std_logs/$(Cluster).$(Process).err
notification=Never
should_transfer_files = YES
when_to_transfer_output = ON_EXIT
x509userproxy=x509up_u12976
+MaxRuntime=150000
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2430000/BAB3322A-E441-BE43-88F7-DA17D338E456.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_41.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2430000/7B36621E-917F-B74F-822F-1806A2CDECB4.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_24.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2430000/953ADF48-1392-744D-87CC-D8C0EEBCA992.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_25.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2430000/7F44D5A1-2501-B542-A7D5-92F9385AE638.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_26.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2430000/C438A99B-CFC1-2D46-A6F9-7C0BC84C1431.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_27.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2430000/CA9A7255-6B94-E844-A4AD-A041E70BE019.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_20.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2430000/7C69EC8B-C75F-D246-BD79-475D3B9BA6EB.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_21.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2430000/10B7315C-43A6-AF48-A305-8FDEF6888889.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_22.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2430000/97092B76-662D-F741-8C22-DECED2AA66B7.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_23.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2430000/1AA8B284-9CFA-D64C-B18A-17D5791557EC.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_28.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2430000/4B68A14C-FD38-A843-BC0B-C86FA68F416E.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_29.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2430000/814D846F-6824-6843-A0CF-8064DE318EFB.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_0.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2430000/97DBA9C8-B728-004C-A4B5-200DC2F7359F.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_4.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2430000/CF1067D9-0C44-2D41-A131-84B8C5801BFF.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_8.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2430000/0C393425-8449-7448-B542-086F44A7B616.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_120.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2430000/2BDD3452-E62D-794F-8EF3-E980FB3A0499.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_121.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2430000/95622729-6687-F94A-B72F-2C0AC68B9277.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_122.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2430000/A02D2761-F6E1-7E42-B870-29309B5ECDAD.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_123.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2430000/4807E496-673C-214F-8295-690005960AB3.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_124.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2430000/03C72871-EA6C-C643-A71E-B1B354AD570E.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_125.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2430000/56C32D9C-6001-EF41-93A5-A976E0F8294F.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_126.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2430000/B547CD74-1DF2-3A41-BB69-890FD72A43AD.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_127.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2430000/F8AB1161-ABE7-8641-9E77-A3EA0B7CA369.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_128.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2430000/3CF4B81E-5F5D-6540-94EC-1D6474CD45A1.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_129.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2430000/7BE977AF-4613-414C-97C3-570822193918.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_59.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2430000/4D4CE687-FE0C-F84F-8AF8-F3F9AACEA2CE.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_58.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2430000/921631DD-E52C-B645-8043-7FF13C15D000.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_55.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2430000/C73F5517-A1D6-6B45-9F7D-0AE7A867A7FE.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_54.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2430000/D91432E5-0AC8-E64E-804F-C877B05093BE.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_57.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2430000/307A5A5B-3FD4-0A46-8978-954AA979D7C2.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_56.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2430000/85FB7E6B-442C-244A-9B85-31AD37E48E6F.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_51.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2430000/80E35133-FD4F-6244-A3B8-35EE38770D40.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_50.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2430000/CFFF43DC-6A2C-DC43-AE34-F2FA9E20B610.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_53.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2430000/CC54D337-9F6C-7646-8936-A841C29CE782.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_52.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2430000/73521524-6AE5-6648-8B40-26FBD21CBC3E.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_115.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2430000/2464B973-B7C1-7A40-95DC-DFA43FD4A412.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_114.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2430000/FEB893C6-5F4B-0943-8744-FF2B8402B553.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_88.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2430000/57C29186-4249-9248-89A3-E68C6AC7FCA5.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_89.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2430000/E6A829D4-15FE-F94F-B29D-7C3D9A99AD5B.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_111.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2430000/F93EFD3A-08BE-8D45-B317-6EE3B83B874D.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_110.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2430000/A1E9670B-83E3-844D-A3A7-A60E21E30CE1.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_113.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2430000/FEEBE606-BB18-8048-9D6D-6F666EA376E1.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_112.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2430000/5AE36B59-BAA3-8B45-A930-803B9BDF72EC.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_82.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2430000/AC0C6DEA-3974-9648-A898-C7A890D47DF9.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_83.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2430000/8F229097-1169-8841-AF58-087D8B84C342.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_80.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2430000/4616AA93-0EAC-2745-9588-807FC96F7A8A.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_81.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2430000/2F6F5863-ABFE-3646-B558-105AAAE3FCE3.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_119.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2430000/7A2C4D98-E4BA-0C47-BABD-5AED1FFE9C4A.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_118.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2430000/D866E987-D5E8-A84F-B1F8-8BCD6AA87006.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_84.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2430000/CE2D55D6-BF96-D74D-96B6-6A9FEBF95962.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_85.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2430000/A5B440CF-F8DB-0845-92A9-C18196865B85.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_3.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2430000/C5ACE98A-ACFB-4543-AFBF-E023E7645B39.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_7.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2430000/7E4D379C-2477-AB4F-B0F1-8C97FD4AEE1D.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_108.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2430000/B760CF31-1E62-9C4A-9E32-AD35B436BB5A.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_109.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2430000/47338D6F-6588-7345-9641-FFC010E7A3F8.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_102.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2430000/CE68659D-3AE8-7041-885E-B9D5BC582958.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_103.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2430000/F2D58670-3B23-6D4E-8E4D-2427F4DEAC82.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_100.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2430000/24BC0D94-BAEA-5C4D-B12A-EF7BD32E0B71.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_101.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2430000/7A9C11B2-ABE5-334D-B932-8EFC979F4A9E.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_106.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2430000/615F892B-65F1-7641-9E3E-585B9BDB64A6.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_107.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2430000/51C63F31-B023-B14D-A35A-838C65A53022.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_104.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2430000/63402247-94C7-D542-ACC6-8A1C6174E417.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_105.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2430000/D5512DD4-746D-B44E-9DCC-1F47C6572472.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_39.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2430000/FE123C21-7190-544A-A601-DBAF1AEB6D75.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_38.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2430000/A7504BBC-3556-4042-8526-5FD578145D55.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_33.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2430000/97506BD4-0BE2-6C44-88C7-546450836374.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_32.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2430000/1DD3802A-33AE-B846-A76D-2B28E4182A50.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_31.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2430000/39FD8FCF-4E75-2145-8116-0CD6E6D83E60.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_30.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2430000/A8D7B146-0C56-D34B-B8DF-5ECA44A3F746.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_37.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2430000/01341620-53F6-A94D-BB22-2AE6DFC27D4F.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_36.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2430000/657026FF-CB3F-8E41-A73D-57F165C62C0E.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_35.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2430000/7E7AF11C-3635-1646-A4A9-9C47CBB48D80.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_34.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2430000/4EC140B9-7464-CF4D-966E-598602DD5093.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_60.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2430000/6B63D31E-D053-4645-B787-ABF970B651B2.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_61.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2430000/F1EA046B-E965-6E43-84C8-D0FC30F4225A.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_62.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2430000/42BBBC43-74FC-F74D-8913-10309753080B.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_63.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2430000/9EF4CA39-B96D-A140-8B8F-E152E75F8824.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_64.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2430000/D70D3969-19FB-DE49-812B-EA1843655AFB.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_65.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2430000/577011F6-C92D-B443-9EED-C0BDA2E5E4EB.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_66.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2430000/A934512E-B03B-7741-A857-F9837033E15D.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_67.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2430000/51FD8C9B-731E-A747-84B2-41485D10551A.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_68.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2430000/4991071D-8659-5B4E-A913-BAAC9D588AAA.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_69.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2430000/84136B02-967E-5C4F-BCD7-28BE114CFFB2.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_2.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2430000/48E36BB3-DFAB-6A43-932C-C013945CFE8A.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_6.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2430000/E2AF9B75-0B90-1749-B48C-FCD01AE695C7.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_99.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2430000/B6574224-7220-EE42-9F48-4375DAAA75F6.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_98.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2430000/4ED24E5D-3136-9844-88F2-F24184014C9E.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_91.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2430000/0A299626-C0FC-F94B-BC1E-CCD62E4F49B1.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_90.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2430000/96597481-67B0-3C4E-8B2B-44E950566C24.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_93.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2430000/17566C78-88DD-854A-960A-4A6B67796CAB.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_92.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2430000/450B244E-555C-D64F-9CBB-9C0FA7D75DF5.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_95.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2430000/B24A2538-4E41-F34A-AFA3-17225D81F1E4.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_94.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2430000/BB90E398-146F-104E-8146-D4DD09ECEB3A.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_97.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2430000/40E81AD2-3EC4-CD47-80B4-4375285F1FC6.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_96.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2430000/6153BD16-5698-7747-BB55-AA4EADF146A3.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_11.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2430000/4D43A246-EB8C-4D47-9A34-5038BE1E29E3.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_10.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2430000/55373198-0C2A-3349-8890-04134E075CA7.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_13.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2430000/EDBE116D-DDD3-5745-B57D-9D0B961DCA92.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_12.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2430000/6C99E1D5-7731-414E-B51F-E429604CD0D5.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_15.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2430000/CBD71F70-0B89-B748-BE6C-E6A3D1C0256D.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_14.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2430000/F266C742-878A-CE41-B3EB-949200D9724B.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_17.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2430000/7AE7B411-DFE5-6641-A9B2-957D2F75D3AD.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_16.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2430000/06105BD9-AD40-7F4C-A173-2674D5348505.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_19.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2430000/F1F6704E-3DC7-1C44-A464-046F045AE411.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_18.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2430000/D2519FD6-FA25-CB41-917B-F11EE724D149.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_117.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2430000/C47FA2B9-571F-6C45-BE13-B2AEFFCE066E.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_116.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2430000/255332FB-31B0-1E42-801B-4BF80C768510.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_48.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2430000/97CE16B6-8438-2149-A529-93C75BEBD8E9.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_49.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2430000/A6E2E127-9BF8-804E-9628-748D9D709CAF.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_46.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2430000/5F5721C0-DB18-A74B-9C01-B70CD64EED80.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_86.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2430000/12BC6673-8931-BE40-B63B-5377A3ACB913.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_44.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2430000/08FE5EFB-5217-6242-9185-2855DC3FED30.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_45.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2430000/0A436952-DAE7-6641-ACF7-5E25AFE9401B.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_42.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2430000/7A25C213-C350-D34C-A4DE-37101261E107.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_43.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2430000/405CFECA-F657-DC44-B5EB-BBD4A3A7D6C3.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_40.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2430000/09A27E95-7200-E745-A225-6ED1F5B6FDC2.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_87.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2430000/0998EC43-E61A-634E-9A9F-C0848449E5A5.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_1.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2430000/3D0D6A0D-139E-E446-9958-8E1F51F7FD26.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_5.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2430000/3251F3AA-5298-CE44-8186-6867EF1F8252.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_9.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2430000/FA04145A-C0C9-8447-91B8-9566DB20CC3B.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_77.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2430000/5EDBB21C-6F9E-984A-AB0D-AE422FC67863.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_76.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2430000/634CF420-7EEC-ED44-9C8F-AC5B1BD769E6.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_75.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2430000/CC1982B5-6A10-1649-B754-05917C81C674.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_74.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2430000/0A34E1BA-ACA0-6345-9DA1-2C31B866E68E.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_73.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2430000/669CB7BC-922B-5A4C-BA43-CFF45C918570.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_72.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2430000/9E16937A-7525-9046-8273-C6A86962F7BB.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_71.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2430000/DE20DF94-88E0-BB4E-8FF4-517AE52CBF94.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_70.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2430000/0142AAEE-61FF-B942-B974-C2A3886F39A5.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_79.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2430000/524229D4-FCE9-4A49-847D-746579ECE92C.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_78.root "
queue
        
arguments="-f /store/mc/RunIISummer20UL18MiniAODv2/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8/MINIAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2430000/0CD852B3-57CC-7348-BCDC-C2C9CAEED120.root -a '-o ./ -M HWW -m --year 2018'"
transfer_output_remaps="out_1.root = /ospool/cms-user/yuzhe/NtupleStore/V3/2018/Signal/HZJ_HToWW_M-125_TuneCP5_13TeV-powheg-jhugen727-pythia8_RunIISummer20UL18MiniAODv2-106X_upgrade2018_realistic_v16_L1v1-v2/out_47.root "
queue
        