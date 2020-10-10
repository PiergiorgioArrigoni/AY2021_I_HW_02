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
*   \file InterruptRoutine.h
*   \brief Source file for the ISR triggered by the button
*   \author Piergiorgio Arrigoni
*/

#include "InterruptRoutine.h"

CY_ISR(Button_ISR)
{
    extern int config;
    
    config++;
    if(config == 8) //return to first configuration
    {
        config = 1;
    }
}

/* [] END OF FILE */
