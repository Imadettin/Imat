/*
 * File:   ikinciproje.c
 * Author: imat
 *
 * Created on 22 Haziran 2019 Cumartesi, 21:20
 */
//#define FCY 4000000UL
 //#include <libpic30.h>
#define _XTAL_FREQ 4000000

#pragma config FOSC = INTOSCIO  // Oscillator Selection bits (INTOSC oscillator: I/O function on RA6/OSC2/CLKOUT pin, I/O function on RA7/OSC1/CLKIN)
#pragma config WDTE = OFF  // Watchdog Timer Enable bit (WDT disabled)
#pragma config LVP = OFF        // Low-Voltage Programming Enable bit (RB4/PGM pin has digital I/O function, HV on MCLR must be used for programming)

// CONFIG
/*#pragma config FOSC = INTOSCIO  // Oscillator Selection bits (INTOSC oscillator: I/O function on RA6/OSC2/CLKOUT pin, I/O function on RA7/OSC1/CLKIN)
#pragma config WDTE = OFF       // Watchdog Timer Enable bit (WDT disabled)
#pragma config PWRTE = ON       // Power-up Timer Enable bit (PWRT enabled)
#pragma config MCLRE = ON       // RA5/MCLR/VPP Pin Function Select bit (RA5/MCLR/VPP pin function is MCLR)
#pragma config BOREN = ON       // Brown-out Detect Enable bit (BOD enabled)
#pragma config LVP = OFF        // Low-Voltage Programming Enable bit (RB4/PGM pin has digital I/O function, HV on MCLR must be used for programming)
#pragma config CPD = OFF        // Data EE Memory Code Protection bit (Data memory code protection off)
#pragma config CP = OFF         // Flash Program Memory Code Protection bit (Code protection off)

 * */
#include <xc.h>

void main(void) {
    TRISB = 0;
    while(1)
    {
    
        RB0 = 1;
        __delay_ms(200);
        
        RB0 = 0;
        RB1 = 1;
        __delay_ms(200);
        
        RB1 = 0;
        RB2 = 1;
        __delay_ms(200);
        
        RB2 = 0;
        RB3 = 1;
        __delay_ms(200);
        
        RB3 = 0;
        RB4 = 1;
        __delay_ms(200);
        
        RB4 = 0;
        RB5 = 1;
        __delay_ms(200);
        
        RB5 = 0;
  
        
        
    }
}
for()


