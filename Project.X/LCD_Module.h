#ifndef LCD_MODULE_H
#define LCD_MODULE_H

#include "project.h"

#define RS PORTDbits.RD2
#define EN PORTDbits.RD3
#define D4 PORTDbits.RD4
#define D5 PORTDbits.RD5
#define D6 PORTDbits.RD6
#define D7 PORTDbits.RD7

#include "project.h"

void Lcd_Port(char a);
void Lcd_Cmd(char a);

void Lcd_Clear();

void Lcd_Set_Cursor(char a, char b);

void Lcd_Init();

void Lcd_Write_Char(char a);

void Lcd_Write_String(char *a);

void Lcd_Shift_Right();

void Lcd_Shift_Left();



#endif