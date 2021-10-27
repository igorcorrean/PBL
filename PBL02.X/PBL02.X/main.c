/**
  Generated main.c file from MPLAB Code Configurator

  @Company
    Microchip Technology Inc.

  @File Name
    main.c

  @Summary
    This is the generated main.c using PIC24 / dsPIC33 / PIC32MM MCUs.

  @Description
    This source file provides main entry point for system initialization and application code development.
    Generation Information :
        Product Revision  :  PIC24 / dsPIC33 / PIC32MM MCUs - 1.170.0
        Device            :  PIC32MM0064GPM048
    The generated drivers are tested against the following:
        Compiler          :  XC16 v1.61
        MPLAB 	          :  MPLAB X v5.45
*/


/**
  Section: Included Files
*/
#include "mcc_generated_files/system.h"
#include "mcc_generated_files/pin_manager.h"
/*
                         Main application
 */


int main(void)
{
    // initialize the device
    SYSTEM_Initialize();
    int cont =0b0000;
    while (1)
    {   int i,j;
        
        IO_RC4_SetValue(cont & 0b1000);
        IO_RC3_SetValue(cont & 0b0100);
        IO_RD0_SetValue(cont & 0b0010);
        IO_RA9_SetValue(cont & 0b0001);
        
        for(i=0;i<1000;i++){
            for(j=0;j<1000;j++){
                
            }
        }
        if(cont == 15){
           cont=0;
        }else{
           cont +=0b0001; 
        }
        
        
        
    
    }
    return 1; 
}
/**
 End of File
*/

