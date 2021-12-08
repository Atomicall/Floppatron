# DipTrace Auto-Generated DO File
bestsave off
grid via 0.0039
grid wire 0.0039
define (class Dip_Net_Class_0)
circuit class Dip_Net_Class_0 (use_via DipViaStyle_0)
rule class Dip_Net_Class_0 (width 12.9921)
rule class Dip_Net_Class_0 (clearance 11.811)
define (class Dip_Net_Class_1 /+5v /adc0 /adc1 /adc2 /adc3 /adc4 /adc5 /adc6 /adc7 /adc8 /adc9 /adc10 /adc11 /adc12 /adc13 /adc14 /adc15 /d+ /d- /dir1 /dir2 /dir3 /dir4 /dir5 /dir6 /dir7 /dir8 /dir9 /dir10 /dir11 /dir12 /dir13 /dir14 /dir15 /dir16 /dir17 /dir18 /dir19 /dir20 /dir21 /dir22 /p24 /p25 /p28 /p29 /p32 /p33 /p36 /p37 /p40 /p41 /p44 /p45 /p48 /p49 /p52 /p53 /pb5 /pb7 /pe0 /pe1 /pe3 /pe5 /ph4 /ph6 /rxd2 /rxd3 /txd2 /txd3 /u_vcc /vin gnd net-#c1-pad2$ net-#c2-pad2$ net-#j6-pad2$ net-#j6-pad3$)
circuit class Dip_Net_Class_1 (use_via DipViaStyle_0)
rule class Dip_Net_Class_1 (width 9.8425)
rule class Dip_Net_Class_1 (clearance 7)
rule pcb (pin_width_taper down)
direction Top horizontal
direction Bottom vertical
cost via forbidden
bus diagonal
route 24
clean 2
route 30 16
clean 2
filter 8
recorner diagonal
