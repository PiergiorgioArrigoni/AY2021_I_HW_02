/**
*   \file main.c
*   \brief Main source file for Homework 2
*   \author Piergiorgio Arrigoni
*/

#include "InterruptRoutine.h"

int main(void)
{    
    //system must start at configuration 1 (PWN not needed in this case)
    Red_LED_Write(1);
    Green_LED_Write(1);
    
    //initialize PWNs
    Red_PWM_Start(); 
    Green_PWM_Start();
    
    CyGlobalIntEnable; /* Enable global interrupts. */
    ISR_Button_StartEx(Button_ISR); //enable button ISR
    
    for(;;); //most of the code is in interrupt.c
}

/* [] END OF FILE */
