/*
 * File:   SCI_Module.c
 * Author: bsow
 *
 * Created on March 21, 2019, 11:30 PM
 */


#include "SCI_Module.h"


void setting_registers()
{
     TRISCbits.RC6    = 0;       //direction of Tx and Rx pins
     TRISCbits.RC7    = 1;
   
     SPBRG = 31;      /* set the baud rate 9600 for 20 mhz clock */
     SYNC = 0;        /* asynchronous */
     SPEN = 1;        /* enable serial port pins */
     CREN = 1;        /* enable reception */
     TXIE = 0;        /* disable tx interrupts */
     RCIE = 0;        /* disable rx interrupts */
     TX9  = 0;        /* 8- or 9-bit transmission */
     RX9  = 0;        /* 8- or 9-bit reception */
     TXEN = 1;        /* enable the transmitter */ 
}


void transmit_character(char out)
{ 
    while(TXIF==0); /*wait for transmit interrupt flag*/
    TXREG = out; /*wait for transmit interrupt flag to set which indicates TXREG is ready
               for another transmission*/ 
}

