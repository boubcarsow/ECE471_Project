///*
// * File:   LCD_Screen.c
// * Author: bsow
// *
// * Created on March 21, 2019, 6:27 PM
// */
//
//
//#include "LCD_Module.h"
////#include <xlcd.h>
////#include <plib.h>
//
//// setting macros for the LCD connections
//
////
//// LCD Initialization
////
//void init_XLCD(void)
//{
//    // configure LCD in 4-bit data mode
//    OpenXLCD(FOUR_BIT & LINES_5X7); 
//    //check if lcd is not busy
//    while(BusyXLCD()); 
//    // move cursor right, without shifting display
//    WriteCmdXLCD(0x06);
//    // turn display ON without cursor
//    WriteCmdXLCD(0x0C);    
//}
//
///**
// * 18 cycles Delay function 
// */
//void DelayFor18TCY(void)
//{
//    Nop(); Nop(); Nop(); Nop();
//    Nop(); Nop();
//    Nop(); Nop();
//    Nop(); Nop();
//    Nop(); Nop();
//    Nop(); Nop();
//    return;
//}
//
///**
// * 15 milli seconds Delay function 
// */
//void DelayPORXLCD(void)
//{
//    Delay1KTCYx(30);
//}
//
///**
// * 5 milli seconds Delay function 
// */
//void DelayXLCD(void)
//{
//    Delay1KTCYx(10);
//}
////
//// LCD Initialization
////
///*void LCD_Init(void)
//{
//    LCD_RS_DDR = 0;
//    //LCD_EN_DDR = ;
//    LCD_RW_DDR = 0;
//    //LCD_Data_Port_DDR = 0x0;
//    
//    // set a 5x7 matrix for each character
//    LCD_Command(0x38);
//    LCD_Delay(20);
//    // clear the lcd screen
//    LCD_Command(0x01);
//    LCD_Delay(20);
//    // send cursor to the beginning of a line
//    LCD_Command(0x06);
//    LCD_Delay(20);
//    // blinking cursor
//    LCD_Command(0x0c);
//    LCD_Delay(20);
//    // increment the cursor
//    //LCD_Command(0x04);
//    // clear the lcd screen
//    //LCD_Command(0x01);
//    
//}
//
////
//// LCD Command
////
//void LCD_Command(unsigned char cmd)
//{
//    // display the character to the lcd
//    LCD_Data_Port = cmd;
//    // disable the register select
//    LCD_RS = 0;
//    // set R/W bit
//    LCD_RW = 0;
//    // enable the signal bit
//    LCD_EN = 1;
//       
//    // delay for 5 milli seconds
//    LCD_Delay(5);
//    
//    // disable the signal bit
//    LCD_EN = 0;
//}
//
//void LCD_Display(unsigned int msg)
//{
//    // display the character to the lcd
//    LCD_Data_Port = msg;
//    // set register select 
//    LCD_RS = 1;
//    // set R/W bit
//    LCD_RW = 0;
//    // enable the signal bit
//    LCD_EN = 1;
//        
//    // delay for 20 milli seconds
//    LCD_Delay(5);
//    
//    // disable the signal bit
//    LCD_EN = 0;
//}
//
//void LCD_Delay(int delay)
//{
//    while(delay--);
//}*/