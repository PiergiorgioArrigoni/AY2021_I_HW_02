/**
*   \file main.c
*   \brief Main source file for Homework 2
*   \author Piergiorgio Arrigoni
*/

#include "InterruptRoutine.h"

int main(void)
{    
    CyGlobalIntEnable; /* Enable global interrupts. */
    ISR_Button_StartEx(Button_ISR); //enable button ISR (change of configuration)
    
    Red_PWM_Start();
    Red_PWM_WritePeriod(2*F_CLK_PWM);
    Red_PWM_SetCompareMode(4);
    Red_PWM_WriteCompare(2*F_CLK_PWM);
           
    Green_PWM_Start();
    Green_PWM_WritePeriod(2*F_CLK_PWM);
    Green_PWM_SetCompareMode(4);
    Green_PWM_WriteCompare(2*F_CLK_PWM);
    
    for(;;)
    {    
    }
}

/* [] END OF FILE */
