EESchema Schematic File Version 4
EELAYER 30 0
EELAYER END
$Descr A4 11693 8268
encoding utf-8
Sheet 1 1
Title ""
Date ""
Rev ""
Comp ""
Comment1 ""
Comment2 ""
Comment3 ""
Comment4 ""
$EndDescr
$Comp
L Connector:Conn_01x04_Male J5
U 1 1 61AF3AB3
P 3150 1350
F 0 "J5" V 2950 1500 50  0000 C CNN
F 1 "Conn_01x04_Male" V 2850 1500 50  0000 C CNN
F 2 "Connector_PinHeader_2.54mm:PinHeader_1x04_P2.54mm_Horizontal" H 3150 1350 50  0001 C CNN
F 3 "~" H 3150 1350 50  0001 C CNN
	1    3150 1350
	0    1    1    0   
$EndComp
$Comp
L Connector:Conn_01x02_Male J1
U 1 1 61AF4AD0
P 1950 2050
F 0 "J1" H 2050 2350 50  0000 C CNN
F 1 "Conn_01x02_Male" H 2050 2200 50  0000 C CNN
F 2 "Connector_PinHeader_2.54mm:PinHeader_1x02_P2.54mm_Horizontal" H 1950 2050 50  0001 C CNN
F 3 "~" H 1950 2050 50  0001 C CNN
	1    1950 2050
	1    0    0    -1  
$EndComp
$Comp
L Connector:Conn_01x02_Male J3
U 1 1 61AF5712
P 1950 3250
F 0 "J3" H 2058 3431 50  0000 C CNN
F 1 "Conn_01x02_Male" H 2058 3340 50  0000 C CNN
F 2 "Connector_PinHeader_2.54mm:PinHeader_1x02_P2.54mm_Horizontal" H 1950 3250 50  0001 C CNN
F 3 "~" H 1950 3250 50  0001 C CNN
	1    1950 3250
	1    0    0    -1  
$EndComp
$Comp
L Connector:Conn_01x03_Male J2
U 1 1 61AF59F4
P 1950 2650
F 0 "J2" H 2050 2950 50  0000 C CNN
F 1 "Conn_01x03_Male" H 2050 2850 50  0000 C CNN
F 2 "Connector_PinHeader_2.54mm:PinHeader_1x03_P2.54mm_Horizontal" H 1950 2650 50  0001 C CNN
F 3 "~" H 1950 2650 50  0001 C CNN
	1    1950 2650
	1    0    0    -1  
$EndComp
$Comp
L Connector:Conn_01x02_Male J4
U 1 1 61AF7AAF
P 2900 3500
F 0 "J4" V 2700 3500 50  0000 C CNN
F 1 "Conn_01x02_Male" V 2800 3550 50  0000 C CNN
F 2 "Connector_PinHeader_2.54mm:PinHeader_1x02_P2.54mm_Horizontal" H 2900 3500 50  0001 C CNN
F 3 "~" H 2900 3500 50  0001 C CNN
	1    2900 3500
	0    -1   -1   0   
$EndComp
$Comp
L Connector:Conn_01x04_Male J6
U 1 1 61AF852B
P 3500 3450
F 0 "J6" V 3250 3400 50  0000 C CNN
F 1 "Conn_01x04_Male" V 3350 3400 50  0000 C CNN
F 2 "Connector_PinHeader_2.54mm:PinHeader_1x04_P2.54mm_Horizontal" H 3500 3450 50  0001 C CNN
F 3 "~" H 3500 3450 50  0001 C CNN
	1    3500 3450
	0    -1   -1   0   
$EndComp
$Comp
L Connector:Conn_01x04_Male J8
U 1 1 61AF8A3F
P 4200 3450
F 0 "J8" V 4000 3400 50  0000 C CNN
F 1 "Conn_01x04_Male" V 4100 3400 50  0000 C CNN
F 2 "Connector_PinHeader_2.54mm:PinHeader_1x04_P2.54mm_Horizontal" H 4200 3450 50  0001 C CNN
F 3 "~" H 4200 3450 50  0001 C CNN
	1    4200 3450
	0    -1   -1   0   
$EndComp
$Comp
L Connector:Conn_01x02_Male J7
U 1 1 61AF937D
P 3850 1350
F 0 "J7" V 3850 1550 50  0000 C CNN
F 1 "Conn_01x02_Male" V 3750 1500 50  0000 C CNN
F 2 "Connector_PinHeader_2.54mm:PinHeader_1x02_P2.54mm_Horizontal" H 3850 1350 50  0001 C CNN
F 3 "~" H 3850 1350 50  0001 C CNN
	1    3850 1350
	0    1    1    0   
$EndComp
$Comp
L Switch:SW_Push SW1
U 1 1 61AF9B9F
P 4450 1800
F 0 "SW1" H 4450 2085 50  0000 C CNN
F 1 "SW_Push" H 4450 1994 50  0000 C CNN
F 2 "Button_Switch_THT:SW_NKK_GW12LJP" H 4450 2000 50  0001 C CNN
F 3 "~" H 4450 2000 50  0001 C CNN
	1    4450 1800
	1    0    0    -1  
$EndComp
Text GLabel 2500 1600 0    50   Input ~ 0
5V
$Comp
L power:GND #PWR01
U 1 1 61AFAE6A
P 2300 2150
F 0 "#PWR01" H 2300 1900 50  0001 C CNN
F 1 "GND" H 2305 1977 50  0000 C CNN
F 2 "" H 2300 2150 50  0001 C CNN
F 3 "" H 2300 2150 50  0001 C CNN
	1    2300 2150
	1    0    0    -1  
$EndComp
Wire Wire Line
	2300 2150 2150 2150
Text GLabel 2350 2050 2    50   Input ~ 0
5V
Wire Wire Line
	2350 2050 2150 2050
Text GLabel 3050 1650 3    50   Input ~ 0
5V
Wire Wire Line
	3050 1550 3050 1600
Wire Wire Line
	3150 1550 3150 1600
Wire Wire Line
	3150 1600 3050 1600
Connection ~ 3050 1600
Wire Wire Line
	3050 1600 3050 1650
$Comp
L power:GND #PWR04
U 1 1 61AFC140
P 2950 1850
F 0 "#PWR04" H 2950 1600 50  0001 C CNN
F 1 "GND" H 2955 1677 50  0000 C CNN
F 2 "" H 2950 1850 50  0001 C CNN
F 3 "" H 2950 1850 50  0001 C CNN
	1    2950 1850
	1    0    0    -1  
$EndComp
Wire Wire Line
	2950 1850 2950 1800
Wire Wire Line
	2950 1800 3250 1800
Wire Wire Line
	3250 1800 3250 1550
Connection ~ 2950 1800
Wire Wire Line
	2950 1800 2950 1550
Text Label 3750 1700 0    50   ~ 0
B1
Text Label 3850 1700 0    50   ~ 0
B2
Wire Wire Line
	3750 1550 3750 1700
Wire Wire Line
	3850 1700 3850 1550
Text Label 4400 2100 0    50   ~ 0
B1
Text Label 4500 2100 0    50   ~ 0
B2
Wire Wire Line
	4400 1950 4400 2100
Wire Wire Line
	4500 2100 4500 1950
Wire Wire Line
	4400 1950 4250 1950
Wire Wire Line
	4250 1950 4250 1800
Wire Wire Line
	4500 1950 4650 1950
Wire Wire Line
	4650 1950 4650 1800
Text Label 2900 3150 0    50   ~ 0
-
Text Label 3000 3150 0    50   ~ 0
+
Text Label 3400 3150 0    50   ~ 0
-
Text Label 3500 3150 0    50   ~ 0
+
Text Label 3600 3150 0    50   ~ 0
-
Text Label 3700 3150 0    50   ~ 0
+
Text Label 4100 3150 0    50   ~ 0
-
Text Label 4200 3150 0    50   ~ 0
+
Text Label 4300 3150 0    50   ~ 0
-
Text Label 4400 3150 0    50   ~ 0
+
Wire Wire Line
	4400 3150 4400 3250
Wire Wire Line
	4300 3150 4300 3250
Wire Wire Line
	4200 3150 4200 3250
Wire Wire Line
	4100 3150 4100 3250
Wire Wire Line
	3700 3150 3700 3250
Wire Wire Line
	3600 3150 3600 3250
Wire Wire Line
	3500 3150 3500 3250
Wire Wire Line
	3400 3150 3400 3250
Wire Wire Line
	3000 3150 3000 3300
Wire Wire Line
	2900 3150 2900 3300
Text Label 2600 1800 0    50   ~ 0
-
Text Label 2600 1600 0    50   ~ 0
+
Wire Wire Line
	2500 1600 2600 1600
$Comp
L power:GND #PWR03
U 1 1 61B031AD
P 2750 1800
F 0 "#PWR03" H 2750 1550 50  0001 C CNN
F 1 "GND" H 2755 1627 50  0000 C CNN
F 2 "" H 2750 1800 50  0001 C CNN
F 3 "" H 2750 1800 50  0001 C CNN
	1    2750 1800
	1    0    0    -1  
$EndComp
Wire Wire Line
	2750 1800 2600 1800
Text GLabel 2300 2550 2    50   Input ~ 0
5V
Wire Wire Line
	2300 2550 2150 2550
$Comp
L power:GND #PWR02
U 1 1 61B0482C
P 2450 2650
F 0 "#PWR02" H 2450 2400 50  0001 C CNN
F 1 "GND" H 2455 2477 50  0000 C CNN
F 2 "" H 2450 2650 50  0001 C CNN
F 3 "" H 2450 2650 50  0001 C CNN
	1    2450 2650
	1    0    0    -1  
$EndComp
Wire Wire Line
	2450 2650 2300 2650
Wire Wire Line
	2150 2750 2250 2750
Wire Wire Line
	2250 2750 2250 3250
Wire Wire Line
	2250 3250 2150 3250
Wire Wire Line
	2300 2650 2300 3350
Wire Wire Line
	2300 3350 2150 3350
Connection ~ 2300 2650
Wire Wire Line
	2300 2650 2150 2650
Text Notes 3200 3000 0    50   ~ 0
?????? ?????????????? ?????????? ?? ??????????????????
Text Notes 2150 3450 0    50   ~ 0
<-Midi
Text Notes 1950 2900 0    50   ~ 0
->Midi
Text Notes 2350 2200 0    50   ~ 0
?????????????? ?????????? ???????????????????? ??????????????????
Text Notes 4000 1450 0    50   ~ 0
???????????????????? ???????????? ??????????????
Text Notes 2800 1300 0    50   ~ 0
?????????????? ????????????, 5??
Text Notes 2550 2650 0    50   ~ 0
?????????????????????? ?????????? ?????????? ????????????????????????
Text Notes 1550 3600 0    50   ~ 0
?????????????????????? ?? ??????????\n???????????????????? ??????????????????
$EndSCHEMATC
