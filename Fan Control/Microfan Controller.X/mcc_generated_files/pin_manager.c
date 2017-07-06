#include <xc.h>
#include "pin_manager.h"
#include "stdbool.h"



void PIN_MANAGER_Initialize(void)
{

    LATA = 0x00;    
    LATC = 0x00;    
  
    TRISA = 0x20;
    TRISC = 0x37;
  
    ANSELC = 0x00;
    ANSELA = 0x10;

    WPUA = 0x38;
    OPTION_REGbits.nWPUEN = 0;

    APFCON = 0x00;


   
    
}       

void PIN_MANAGER_IOC(void)
{   

}