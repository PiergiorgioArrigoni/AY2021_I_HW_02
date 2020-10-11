/**
*   \file InterruptRoutine.h
*   \brief Header file for the ISR triggered by the button
*   \author Piergiorgio Arrigoni
*/

#ifndef _INTERRUPT_ROUTINE_H_
    #define _INTERRUPT_ROUTINE_H_
    #define F_CLK_PWM 12000
    
    #include "project.h"
    
    extern int config;
    
    CY_ISR_PROTO(Button_ISR); 
#endif

/* [] END OF FILE */
