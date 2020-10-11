/**
*   \file main.c
*   \brief Main source file for Homework 2
*   \author Piergiorgio Arrigoni
*/

#include "project.h"
#include "InterruptRoutine.h"

#define F_CLK_PWM 12000

int config = 1; //system must start at configuration 1

int main(void)
{    
    CyGlobalIntEnable; /* Enable global interrupts. */
    ISR_Button_StartEx(Button_ISR); //enable button ISR (change of configuration)

    for(;;)
    {
        switch(config)
        {
            case(1):
                Red_PWM_WritePeriod(2*F_CLK_PWM);
                Red_PWM_SetCompareMode(1);
                Red_PWM_WriteCompare(2*F_CLK_PWM);
                
                Green_PWM_WritePeriod(2*F_CLK_PWM);
                Green_PWM_SetCompareMode(1);
                Green_PWM_WriteCompare(2*F_CLK_PWM);
                break;
                
            case(2):
                Red_PWM_WritePeriod(2*F_CLK_PWM);
                Red_PWM_SetCompareMode(1);
                Red_PWM_WriteCompare(2*F_CLK_PWM);
                
                Green_PWM_WritePeriod(2*F_CLK_PWM);
                Green_PWM_SetCompareMode(1);
                Green_PWM_WriteCompare(F_CLK_PWM);
                break;
            
            case(3):
                Red_PWM_WritePeriod(2*F_CLK_PWM);
                Red_PWM_SetCompareMode(3);
                Red_PWM_WriteCompare(F_CLK_PWM);
                
                Green_PWM_WritePeriod(2*F_CLK_PWM);
                Green_PWM_SetCompareMode(1);
                Green_PWM_WriteCompare(2*F_CLK_PWM);
                break;
            
            case(4):
                Red_PWM_WritePeriod(F_CLK_PWM);
                Red_PWM_SetCompareMode(1);
                Red_PWM_WriteCompare(0.5*F_CLK_PWM);
                
                Green_PWM_WritePeriod(F_CLK_PWM);
                Green_PWM_SetCompareMode(3);
                Green_PWM_WriteCompare(floor(0.5*F_CLK_PWM));
                break;
            
            case(5):
                Red_PWM_WritePeriod(floor(0.5*F_CLK_PWM));
                Red_PWM_SetCompareMode(3);
                Red_PWM_WriteCompare(floor(0.25*F_CLK_PWM));
                
                Green_PWM_WritePeriod(floor(0.5*F_CLK_PWM));
                Green_PWM_SetCompareMode(1);
                Green_PWM_WriteCompare(floor(0.25*F_CLK_PWM));
                break;
            
            case(6):
                Red_PWM_WritePeriod(2*F_CLK_PWM);
                Red_PWM_SetCompareMode(1);
                Red_PWM_WriteCompare(floor(1.5*F_CLK_PWM));
                
                Green_PWM_WritePeriod(2*F_CLK_PWM);
                Green_PWM_SetCompareMode(1);
                Green_PWM_WriteCompare(F_CLK_PWM);
                break;
            
            case(7):
                Red_PWM_WritePeriod(2*F_CLK_PWM);
                Red_PWM_SetCompareMode(3);
                Red_PWM_WriteCompare(F_CLK_PWM);
                
                Green_PWM_WritePeriod(F_CLK_PWM);
                Green_PWM_SetCompareMode(1);
                Green_PWM_WriteCompare(floor(0.5*F_CLK_PWM));
                break;
        }
    }
}

/* [] END OF FILE */
