#include "mcc_generated_files/system.h"
#include "buzzer.h"
#include "mcc_generated_files/delay.h"

#define buzzer LATBbits.LATB9

void initializeBuzzer(void)
{
    TRISBbits.TRISB9 = 0; // Set pin RB9 to output
    ANSELBbits.ANSB9 = 0; // Set pin RB9 to digital
}


void buzzerOnDuration(unsigned long duration)
{
    int i;
    for (i = 0; i < duration * 2; i = i + 1)
    {
        DELAY_microseconds(500);
        buzzer ^= 1;
    }
    buzzer = 0;
}
