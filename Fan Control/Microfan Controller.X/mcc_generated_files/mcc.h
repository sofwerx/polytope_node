#ifndef MCC_H
#define	MCC_H
#include <xc.h>
#include "pin_manager.h"
#include <stdint.h>
#include <stdbool.h>

#define _XTAL_FREQ  16000000
void SYSTEM_Initialize(void);
void OSCILLATOR_Initialize(void);
void WDT_Initialize(void);


#endif
