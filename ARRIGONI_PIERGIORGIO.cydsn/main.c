/**
*   \file main.c
*   \brief Main source file for Homework 2
*   \author Piergiorgio Arrigoni
*/

#include "project.h"
#include "InterruptRoutine.h"

int main(void)
{    
    //initialize PWNs
    Red_PWM_Start(); 
    Green_PWM_Start();
    
    //System is on configuration 1 (both LEDs active) when switched on
    
    CyGlobalIntEnable;
    ISR_Button_StartEx(Button_ISR); //enable button ISR
    
    for(;;); //most of the code is in InterruptRoutine.c
}

/* [] END OF FILE */
