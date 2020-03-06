/*
 * GPIO.c
 *
 *  Created on:
 *      Author:
 */

// For the code you place here, you may use your code that uses register references.
// However, I encourage you to start using the Driver Library as soon as possible.

#include <ti/devices/msp432p4xx/driverlib/driverlib.h>
#include "myGPIO.h"

// TODO: Create a function to initialize the GPIO.
// Even though this assignment does not use all of the pushbuttons, you should write one function that does a complete GPIO init.
void initGPIO()
{
    P1DIR &= ~L_B;  // set 0 to buttons
    P1DIR &= ~R_B;
    P5DIR &= ~T_B;
    P3DIR &= ~B_B;

    P1DIR |= L_L;  // set output to LEDs
    P2DIR |= R_L;
    P2DIR |= G_L;
    P2DIR |= B_L;
    P2DIR |= R_BL;
    P2DIR |= G_BL;
    P5DIR |= B_BL;

    P1REN |= L_B;   // set 1 to P1REN
    P1REN |= R_B;
    P5REN |= T_B;
    P3REN |= B_B;

    P1OUT |= L_B;  // select pull-up
    P1OUT |= R_B;
    P5OUT |= T_B;
    P3OUT |= B_B;

    // Launchpad S1

    // Launchpad S2

    // Boosterpack S1

    // Boosterpack S2

    // Launchpad LED1

    // Launchpad LED2 Red

    // Launchpad LED2 Green

    // Launchpad LED2 Blue

    // Boosterpack LED Red

    // Boosterpack LED Green

    // Boosterpack LED Blue


    // Turn off all LEDs at the start.
}

// TODO: Create a function to return the status of Launchpad Pushbutton S1
bool checkStatus_LaunchpadS1()
{
    return ((P1IN & L_B)==0);
}

// TODO: Create a function to return the status of Launchpad Pushbutton S2
bool checkStatus_LaunchpadS2()
{
    return ((P1IN & R_B)==0);
}

// TODO: Create a function to return the status of Boosterpack Pushbutton S1
bool checkStatus_BoosterpackS1()
{
    return ((P5IN & B_B)==0);
}

// TODO: Create a function to return the status of Boosterpack Pushbutton S2
bool checkStatus_BoosterpackS2()
{
    return ((P3IN & T_B)==0);
}

// TODO: Create a function to turn on Launchpad LED1.
void turnOn_LaunchpadLED1()
{
    P1OUT = P1OUT |  L_L;
}

// TODO: Create a function to turn off Launchpad LED1.
void turnOff_LaunchpadLED1()
{
    P1OUT = P1OUT & ~L_L;
}

// TODO: Create a function to turn on the Red Launchpad LED2.
void turnOn_LaunchpadLED2Red()
{
    P2OUT = P2OUT |  R_L;
}

// TODO: Create a function to turn off the Red Launchpad LED2.
void turnOff_LaunchpadLED2Red()
{
    P2OUT = P2OUT & ~R_L;
}

// TODO: Create a function to turn on the Green Launchpad LED2.
void turnOn_LaunchpadLED2Green()
{
    P2OUT = P2OUT | G_L;
}

// TODO: Create a function to turn off the Green Launchpad LED2.
void turnOff_LaunchpadLED2Green()
{
    P2OUT = P2OUT & ~G_L;
}

// TODO: Create a function to turn on the Blue Launchpad LED2.
void turnOn_LaunchpadLED2Blue()
{
    P2OUT = P2OUT |  B_L;
}

// TODO: Create a function to turn off the Blue Launchpad LED2.
void turnOff_LaunchpadLED2Blue()
{
    P2OUT = P2OUT & ~B_L;
}

// TODO: Create a function to turn on the Red Boosterpack LED2.
void turnOn_BoosterpackLEDRed()
{
    P2OUT = P2OUT |  R_BL;
}

// TODO: Create a function to turn off the Red Boosterpack LED2.
void turnOff_BoosterpackLEDRed()
{
    P2OUT = P2OUT & ~R_BL;
}

// TODO: Create a function to turn on the Green Boosterpack LED2.
void turnOn_BoosterpackLEDGreen()
{
    P2OUT = P2OUT |  G_BL;
}

// TODO: Create a function to turn off the Green Boosterpack LED2.
void turnOff_BoosterpackLEDGreen()
{
    P2OUT = P2OUT & ~G_BL;
}

// TODO: Create a function to turn on the Blue Boosterpack LED2.
void turnOn_BoosterpackLEDBlue()
{
    P5OUT = P5OUT |  B_BL;
}

// TODO: Create a function to turn off the Green Boosterpack LED2.
void turnOff_BoosterpackLEDBlue()
{
    P5OUT = P5OUT & ~B_BL;
}
