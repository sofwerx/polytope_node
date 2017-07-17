#include "mcc_generated_files/mcc.h"
#include <xc.h>
#include <stdio.h>


void ADCInit()
{  
    ADCON2 = 0b10001010;
}
unsigned int ADCRead(void)
{
   ADCON0=0x00;

   ADCON0=(4<<2); 

   ADON=1;
   
   GO_nDONE=1;

   while(GO_nDONE);

   ADON=0; 

   return ADRES;
}
 
void main(void)
{
    SYSTEM_Initialize();

    while (1)
    {
        unsigned int therm;

        therm = ADCRead();
        if ( therm > 266 ) 
        {
            PORTCbits.RC1 = 0b00010000;
        }
        else if ( 0 < therm <= 266 )
        {
            PORTCbits.RC1 = 0b00000000;   
        }
            }
}
