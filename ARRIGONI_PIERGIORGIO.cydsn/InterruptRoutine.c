/**
*   \file InterruptRoutine.h
*   \brief Source file for the ISR triggered by the button
*   \author Piergiorgio Arrigoni
*/

#include "InterruptRoutine.h"

CY_ISR(Button_ISR)
{
    extern uint8 config;
    
    config++;
    if(config == 8) //return to first configuration
    {
        config = 1;
    }
}

/* [] END OF FILE */
