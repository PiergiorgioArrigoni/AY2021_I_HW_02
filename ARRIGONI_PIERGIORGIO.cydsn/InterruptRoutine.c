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

#include "InterruptRoutine.h"

extern int config;

CY_ISR(Button_ISR)
{
    config++;
    if(config == 8)
    {
        config = 1;
    }
}

/* [] END OF FILE */
