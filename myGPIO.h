/*
 * myGPIO.h
 *
 *  Created on:
 *      Author:
 *
 */

#ifndef MYGPIO_H_
#define MYGPIO_H_
#define L_B BIT1    // define bits for buttons and LEDs
#define R_B BIT4
#define T_B BIT5
#define B_B BIT1

#define L_L BIT0
#define R_L BIT0
#define G_L BIT1
#define B_L BIT2
#define R_BL BIT6
#define G_BL BIT4
#define B_BL BIT6

// This function initializes the peripherals used in the program.
void initGPIO();
// This function returns the value of Launchpad S1.
bool checkStatus_LaunchpadS1();
// This function returns the value of Launchpad S2.
bool checkStatus_LaunchpadS2();
// This function returns the value of Boosterpack S1.
bool checkStatus_BoosterpackS1();
// This function returns the value of Boosterpack S2.
bool checkStatus_BoosterpackS2();
// This function turns on Launchpad LED1.
void turnOn_LaunchpadLED1();
// This function turns off Launchpad LED1.
void turnOff_LaunchpadLED1();
// This function turns on Launchpad Red LED2.
void turnOn_LaunchpadLED2Red();
// This function turns off Launchpad Red LED2.
void turnOff_LaunchpadLED2Red();
// This function turns on Launchpad Blue LED2.
void turnOn_LaunchpadLED2Blue();
// This function turns off Launchpad Blue LED2.
void turnOff_LaunchpadLED2Blue();
// This function turns on Launchpad Green LED2.
void turnOn_LaunchpadLED2Green();
// This function turns off Launchpad Green LED2.
void turnOff_LaunchpadLED2Green();
// This function turns on Boosterpack Red LED.
void turnOn_BoosterpackLEDRed();
// This function turns off Boosterpack Red LED.
void turnOff_BoosterpackLEDRed();
// This function turns on Boosterpack Green LED.
void turnOn_BoosterpackLEDGreen();
// This function turns off Boosterpack Green LED.
void turnOff_BoosterpackLEDGreen();
// This function turns on Boosterpack Blue LED.
void turnOn_BoosterpackLEDBlue();
// This function turns off Boosterpack Blue LED.
void turnOff_BoosterpackLEDBlue();

// TODO: Define any constants that are local to myGPIO.c using #define


#endif /* MYGPIO_H_ */
