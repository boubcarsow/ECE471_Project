/*
 * File:   project_main.c
 * Author: bsow
 *
 * Created on March 21, 2019, 2:30 PM
 */


//#include <xc.h>
//#include <pic18f452.h>

#include <stdio.h>
#include "project.h"
#include "LCD_Module.h"
#include "SCI_Module.h"
#include "ADC_Temp_Module.h"

int main(void) 
{   
    unsigned int a;
    TRISD = 0x00;
    Lcd_Init();
    Lcd_Clear();
    setting_registers();
    while(1)
    {
        
        Lcd_Set_Cursor(1,1);
        Lcd_Write_String("Current Temperature");
        transmit_character('H');
        Lcd_Set_Cursor(2,1);
        Lcd_Write_String("world");
        __delay_ms(2000);
        
        
    }
    
    return 0;
}

void LED_Demo()
{
    TRISAbits.TRISA0 = 0;
    
    PORTAbits.RA0 = 1;
    int i = 50000;
    while(i--);
    PORTAbits.RA0 = 0;
    i = 50000;
    while(i--);
}
