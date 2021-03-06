/**
*   \file InterruptRoutine.c
*   \brief Source file for the ISR triggered by the button
*   \author Piergiorgio Arrigoni
*/

#include "InterruptRoutine.h"

#define F_CLK_PWM 12000 //clock frequency of the two PWNs

int config = 1; //variable that stores the current configuration number

CY_ISR(Button_ISR) //ISR triggered by the pressing of the button
{   
    config++;
    if(config == 8) //return to first configuration after configuration 7
        config = 1;
    
    switch(config) //implementation of the configurations
    {
        case(1):
            Red_PWM_WritePeriod(2*F_CLK_PWM);
            Red_PWM_SetCompareMode(4);
            Red_PWM_WriteCompare(2*F_CLK_PWM);
            
            Green_PWM_WritePeriod(2*F_CLK_PWM);
            Green_PWM_SetCompareMode(4);
            Green_PWM_WriteCompare(2*F_CLK_PWM);
            break;
            
        case(2):
            Red_PWM_WritePeriod(2*F_CLK_PWM);
            Red_PWM_SetCompareMode(4);
            Red_PWM_WriteCompare(2*F_CLK_PWM);
            
            Green_PWM_WritePeriod(2*F_CLK_PWM);
            Green_PWM_SetCompareMode(4);
            Green_PWM_WriteCompare(F_CLK_PWM);
            break;
        
        case(3):
            Red_PWM_WritePeriod(2*F_CLK_PWM);
            Red_PWM_SetCompareMode(2);
            Red_PWM_WriteCompare(F_CLK_PWM);
            
            Green_PWM_WritePeriod(2*F_CLK_PWM);
            Green_PWM_SetCompareMode(4);
            Green_PWM_WriteCompare(2*F_CLK_PWM);
            break;
        
        case(4):
            Red_PWM_WritePeriod(F_CLK_PWM);
            Red_PWM_SetCompareMode(4);
            Red_PWM_WriteCompare(0.5*F_CLK_PWM);
            
            Green_PWM_WritePeriod(F_CLK_PWM);
            Green_PWM_SetCompareMode(2);
            Green_PWM_WriteCompare(0.5*F_CLK_PWM);
            break;
        
        case(5):
            Red_PWM_WritePeriod(0.5*F_CLK_PWM);
            Red_PWM_SetCompareMode(2);
            Red_PWM_WriteCompare(0.25*F_CLK_PWM);
            
            Green_PWM_WritePeriod(0.5*F_CLK_PWM);
            Green_PWM_SetCompareMode(4);
            Green_PWM_WriteCompare(0.25*F_CLK_PWM);
            break;
        
        case(6):
            Red_PWM_WritePeriod(2*F_CLK_PWM);
            Red_PWM_SetCompareMode(2);
            Red_PWM_WriteCompare(0.5*F_CLK_PWM);
            
            Green_PWM_WritePeriod(2*F_CLK_PWM);
            Green_PWM_SetCompareMode(2);
            Green_PWM_WriteCompare(F_CLK_PWM);
            break;
        
        case(7):
            Red_PWM_WritePeriod(2*F_CLK_PWM);
            Red_PWM_SetCompareMode(2);
            Red_PWM_WriteCompare(F_CLK_PWM);
            
            Green_PWM_WritePeriod(F_CLK_PWM);
            Green_PWM_SetCompareMode(2);
            Green_PWM_WriteCompare(0.5*F_CLK_PWM);
            break;
    }              
}

/* [] END OF FILE */
