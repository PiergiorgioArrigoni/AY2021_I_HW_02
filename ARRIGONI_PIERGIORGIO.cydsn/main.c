/* ========================================
 *
 * Copyright YOUR COMPANY, THE YEAR
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF your company.
 *
 * ========================================
*/

/**
*   \file main.c
*   \brief Main source file for Homework 2
*   \author Piergiorgio Arrigoni
*/

#include "InterruptRoutine.h"
#include "project.h"

int main(void)
{
    CyGlobalIntEnable; /* Enable global interrupts. */
    ISR_Button_StartEx(Button_ISR);
    
    int config = 1;

    for(;;)
    {
        switch(config)
        {
            case(1):
                break;
            case(2):
                break;
            case(3):
                break;
            case(4):
                break;
            case(5):
                break;
            case(6):
                break;
            case(7):
                break;
        }
    }
}

/* [] END OF FILE */
