///*
// * File:   ADC_Temp_Module.c
// * Author: bsow
// *
// * Created on April 3, 2019, 8:20 PM
// */
//
//#include <pic18f4331.h>
#include "ADC_Temp_Module.h"


//void ADC_Init()
//{    
//    TRISAbits.TRISA0 = 0xff;       /*set as input port*/
//    ADCON1 = 0x00;      /*ref vtg is VDD and Configure pin as analog pin*/    
//    ADCON2 = 0x92;      /*Right Justified, 4Tad and Fosc/32. */
//    ADRESH=0;           /*Flush ADC output Register*/
//    ADRESL=0;   
//}
//
//int ADC_Read(int channel)
//{
//    int digital;
//    ADCON0 =(ADCON0 & 0b11000011)|((channel<<2) & 0b00111100);      /*channel is selected i.e (CHS3:CHS0) 
//                                                                      and ADC is disabled i.e ADON=0*/
//    ADCON0 |= ((1<<ADON)|(1<<GO));                   /*Enable ADC and start conversion*/
//    while(ADCON0bits.GO_nDONE==1);                  /*wait for End of conversion i.e. Go/done'=0 conversion completed*/        
//    digital = (ADRESH*256) | (ADRESL);              /*Combine 8-bit LSB and 2-bit MSB*/
//    return(digital);
//}

void init_DHT11()
{
    Data_Dir = 0;  /* set as output port */
    Data_Out = 0;  /* send low pulse of min. 18 ms width */
    __delay_ms(18);
    Data_Out = 1;  /* pull data bus high */
    __delay_us(20);
    Data_Dir = 1;  /* set as input port */  
}

void DHT11_CheckResponse()
{
    while(Data_In & 1);  /* wait till bus is High */     
    while(!(Data_In & 1));  /* wait till bus is Low */
    while(Data_In & 1);  /* wait till bus is High */
}

char DHT11_ReadData()
{
    char i,data = 0;  
    for(i=0;i<8;i++)
    {
        while(!(Data_In & 1));  /* wait till 0 pulse, this is start of data pulse */
        __delay_us(30);         
        if(Data_In & 1)  /* check whether data is 1 or 0 */    
            data = ((data<<1) | 1); 
        else
            data = (data<<1);  
        while(Data_In & 1);
    }
    return data;
}
