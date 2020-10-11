/**
*   \file InterruptRoutine.c
*   \brief Source file for the ISR triggered by the button
*   \author Piergiorgio Arrigoni
*/

#include "InterruptRoutine.h"

CY_ISR(Button_ISR)
{   
    Pin_1_Write(!Pin_1_Read());
    CyDelay(1000);
    config++;
    if(config == 8) //return to first configuration
    {
        config = 1;
    }
}

/* [] END OF FILE */
