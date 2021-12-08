//
// Created by Vlad on 12.11.2021.
//

#ifndef FLOPPATRON_DEFINES_H
#define FLOPPATRON_DEFINES_H

#define RACK_COUNT 5
#define RACK1
#define RACK2
#define RACK3
#define RACK4
#define RACK5


// "Real" Amount of floppa racks. Each rack - 3 drives (6 pins total)
#define FIRST_EVER_DRIVE_PIN 22 // is DirPin, next is StepPin = 24 for 1.1 (1st rack 1st drives)
#define FIRST_ODD_DRIVE_PIN 23
//1.1 ( s = 24, d = 22)
//then, 1.2 (s=28, d=26)
//1.3 (s=32, d=30)

//2.1 (s = 36, d = 34)
//2.2 (s = 40, d = 38)
//2.3 (s= 44, d = 42)

//3.1 (s = 48, d = 46)
//3.2 (s = 52, d = 50)
//3.3 (s = 25, d = 23)

//4.1 (s = 29 , d = 27)
//4.2 (s = 33, d = 31)
//4.3 (s = 37, d = 35)

//5.1 (s = 41 , d = 39)
//5.2 (s = 45, d = 43)
//5.3 (s = 49, d = 47)

//s d

#define RACK1_m uint8_t rack1[6] = { FIRST_EVER_DRIVE_PIN + (1 * 2), FIRST_EVER_DRIVE_PIN + (0 * 2),  \
                        FIRST_EVER_DRIVE_PIN + (3 * 2), FIRST_EVER_DRIVE_PIN + (2 * 2), \
                        FIRST_EVER_DRIVE_PIN + (5 * 2), FIRST_EVER_DRIVE_PIN + (4 * 2) };

#define RACK2_m uint8_t rack2[6]= {FIRST_EVER_DRIVE_PIN + (1 * 12) + (1 * 2), FIRST_EVER_DRIVE_PIN + (1 * 12) + (0 * 2),  \
                        FIRST_EVER_DRIVE_PIN + (1 * 12) + (3 * 2), FIRST_EVER_DRIVE_PIN + (1 * 12) + (2 * 2), \
                        FIRST_EVER_DRIVE_PIN + (1 * 12) + (5 * 2), FIRST_EVER_DRIVE_PIN + (1 * 12) + (4 * 2) };

#define RACK3_m uint8_t rack3[6] = {  FIRST_EVER_DRIVE_PIN + (2 * 12) + (1 * 2), FIRST_EVER_DRIVE_PIN + (2 * 12) + (0 * 2),  \
                        FIRST_EVER_DRIVE_PIN + (2 * 12) + (3 * 2), FIRST_EVER_DRIVE_PIN + (2 * 12) + (2 * 2), \
                        FIRST_ODD_DRIVE_PIN + (0 * 12) + (1 * 2), FIRST_ODD_DRIVE_PIN + (0 * 12) + (0 * 2) };

#define RACK4_m uint8_t rack4[6] = { FIRST_ODD_DRIVE_PIN + (0 * 12) + (3 * 2), FIRST_ODD_DRIVE_PIN + (0 * 12) + (2 * 2),  \
                        FIRST_ODD_DRIVE_PIN + (0 * 12) + (5 * 2), FIRST_ODD_DRIVE_PIN + (0 * 12) + (4 * 2),  \
                        FIRST_ODD_DRIVE_PIN + (1 * 12) + (1 * 2), FIRST_ODD_DRIVE_PIN + (1 * 12) + (0 * 2) };

#define RACK5_m uint8_t rack5[6] = {  FIRST_ODD_DRIVE_PIN + (1 * 12) + (3 * 2), FIRST_ODD_DRIVE_PIN + (1 * 12) + (2 * 2),  \
                        FIRST_ODD_DRIVE_PIN + (1 * 12) + (5 * 2), FIRST_ODD_DRIVE_PIN + (1 * 12) + (4 * 2),  \
                        FIRST_ODD_DRIVE_PIN + (2 * 12) + (1 * 2), FIRST_ODD_DRIVE_PIN + (2 * 12) + (0 * 2) };













#endif //FLOPPATRON_DEFINES_H
