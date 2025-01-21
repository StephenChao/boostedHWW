combineCards.py SR1pass2016=SR1pass2016.txt SR1fail2016=SR1fail2016.txt  TopCRpass2016=TopCRpass2016.txt TopCRfail2016=TopCRfail2016.txt SR1pass2017=SR1pass2017.txt SR1fail2017=SR1fail2017.txt TopCRpass2017=TopCRpass2017.txt TopCRfail2017=TopCRfail2017.txt SR1pass2018=SR1pass2018.txt SR1fail2018=SR1fail2018.txt  TopCRpass2018=TopCRpass2018.txt TopCRfail2018=TopCRfail2018.txt SR1pass2016APV=SR1pass2016APV.txt SR1fail2016APV=SR1fail2016APV.txt TopCRpass2016APV=TopCRpass2016APV.txt TopCRfail2016APV=TopCRfail2016APV.txt > model_combined.txt

text2workspace.py model_combined.txt -o workspace.root

