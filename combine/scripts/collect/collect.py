import os
import re

years = ["2016APV", "2016", "2017", "2018","Full-Run2"]

# directories
directories = [f"../../cards/{year}/nTFa_3_nTFb_6/outs" for year in years]

# match the texts
asm_pattern = re.compile(r"Expected 50.0%: r < ([\d.]+)")
sig_pattern = re.compile(r"Significance: ([\d.]+)")
p_pattern   = re.compile(r"p-value = ([\d.]+)")

# loop through dirs
with open('results.txt', 'w') as output_file:
    for dir in directories:
        for subdir, dirs, files in os.walk(dir):
            for file in files:
                if file == "AsymptoticLimits.txt":
                    # open AsymptoticLimits files
                    with open(os.path.join(subdir, file), 'r') as f:
                        content = f.read()
                        asm_match = asm_pattern.search(content)
                        if asm_match:
                            output_line = f"Found in {os.path.join(subdir, file)}: r < {asm_match.group(1)}\n"
                            print(output_line, end='')
                            output_file.write(output_line)
                            
                elif file == "Significance.txt":
                    # open Significance files
                    with open(os.path.join(subdir, file), 'r') as f:
                        content = f.read()
                        sig_match = sig_pattern.search(content)
                        if sig_match:
                            output_line = f"Found in {os.path.join(subdir, file)}: Significance: {sig_match.group(1)}\n"
                            print(output_line, end='')
                            output_file.write(output_line)
                        p_match = p_pattern.search(content)
                        if p_match:
                            output_line = f"Found in {os.path.join(subdir, file)}: p value: {p_match.group(1)}\n"
                            print(output_line, end='')
                            output_file.write(output_line)
