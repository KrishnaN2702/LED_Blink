
// PIC16F877A Configuration Bit Settings

// 'C' source line config statements

// CONFIG
#pragma config FOSC = EXTRC     // Oscillator Selection bits (RC oscillator)
#pragma config WDTE = OFF       // Watchdog Timer Enable bit (WDT disabled)
#pragma config PWRTE = OFF      // Power-up Timer Enable bit (PWRT disabled)
#pragma config BOREN = OFF      // Brown-out Reset Enable bit (BOR disabled)
#pragma config LVP = OFF        // Low-Voltage (Single-Supply) In-Circuit Serial Programming Enable bit (RB3 is digital I/O, HV on MCLR must be used for programming)
#pragma config CPD = OFF        // Data EEPROM Memory Code Protection bit (Data EEPROM code protection off)
#pragma config WRT = OFF        // Flash Program Memory Write Enable bits (Write protection off; all program memory may be written to by EECON control)
#pragma config CP = OFF         // Flash Program Memory Code Protection bit (Code protection off)

// #pragma config statements should precede project file includes.
// Use project enums instead of #define for ON and OFF.

#include <xc.h>
#include <pic16f877a.h>

#define _XTAL_FREQ 6000000
unsigned char val;

void main()
{
    TRISD = 0x7B; //rd2 and rd7 as input or output  0111 1011
       
    while(1)  //loop
    {
        PORTD = 0x80;   //rd7 is high and rd2 is low    1000 0000 
        __delay_ms(3000);  // delay 3sec
        
        PORTD = 0x84;   //rd2 and rd7 are high  //1000 0100
        __delay_ms(3000); // delay 3sec
        
        PORTD= 0x04;     //rd2 is high and rd7 is low   0000 0100
        __delay_ms(3000); // delay 3sec
         
        PORTD=0x00;      //rd2 and rd7 are low    0000 0000
             
        __delay_ms(3000);  // delay 3sec
        
        
    }

 
}