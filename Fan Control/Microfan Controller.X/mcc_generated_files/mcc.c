// CONFIG1
#pragma config FOSC = INTOSC    // Oscillator Selection Bits->INTOSC oscillator: I/O function on CLKIN pin
#pragma config WDTE = OFF    // Watchdog Timer Enable->WDT disabled
#pragma config PWRTE = OFF    // Power-up Timer Enable->PWRT disabled
#pragma config MCLRE = ON    // MCLR Pin Function Select->MCLR/VPP pin function is MCLR
#pragma config CP = OFF    // Flash Program Memory Code Protection->Program memory code protection is disabled
#pragma config BOREN = ON    // Brown-out Reset Enable->Brown-out Reset enabled
#pragma config CLKOUTEN = OFF    // Clock Out Enable->CLKOUT function is disabled. I/O or oscillator function on the CLKOUT pin
#pragma config IESO = ON    // Internal/External Switchover Mode->Internal/External Switchover Mode is enabled
#pragma config FCMEN = ON    // Fail-Safe Clock Monitor Enable->Fail-Safe Clock Monitor is enabled

// CONFIG2
#pragma config WRT = OFF    // Flash Memory Self-Write Protection->Write protection off
#pragma config CPUDIV = NOCLKDIV    // CPU System Clock Selection Bit->NO CPU system divide
#pragma config USBLSCLK = 48MHz    // USB Low SPeed Clock Selection bit->System clock expects 48 MHz, FS/LS USB CLKENs divide-by is set to 8.
#pragma config PLLMULT = 4x    // PLL Multipler Selection Bit->4x Output Frequency Selected
#pragma config PLLEN = ENABLED    // PLL Enable Bit->3x or 4x PLL Enabled
#pragma config STVREN = ON    // Stack Overflow/Underflow Reset Enable->Stack Overflow or Underflow will cause a Reset
#pragma config BORV = LO    // Brown-out Reset Voltage Selection->Brown-out Reset Voltage (Vbor), low trip point selected.
#pragma config LPBOR = OFF    // Low-Power Brown Out Reset->Low-Power BOR is disabled
#pragma config LVP = ON    // Low-Voltage Programming Enable->Low-voltage programming enabled

#include "mcc.h"

void SYSTEM_Initialize(void)
{

    PIN_MANAGER_Initialize();
    OSCILLATOR_Initialize();
    WDT_Initialize();
}

void OSCILLATOR_Initialize(void)
{
    OSCCON = 0x3E;
    OSCTUNE = 0x00;
    ACTCON = 0x00;
}

void WDT_Initialize(void)
{
    WDTCON = 0x16;
}