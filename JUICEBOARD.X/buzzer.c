#include "mcc_generated_files/system.h"
#include "buzzer.h"
#include "mcc_generated_files/delay.h"

#define buzzer LATBbits.LATB9

void initializeBuzzer(void)
{
    TRISBbits.TRISB9 = 0; // Set pin RB9 to output
    ANSELBbits.ANSB9 = 0; // Set pin RB9 to digital
}

void buzzerToggle(void)
{
    if (buzzer == 1)
    {
        buzzer = 0;
    }
    else
    {
        buzzer = 1;
    }
}

void buzzerOff(void)
{
    buzzer = 0;
}

void buzzerOn(void)
{
    buzzer = 1;
}

void buzzerOnDuration(int msDuration)
{
    buzzer = 1;
    DELAY_milliseconds(msDuration);
    buzzer = 0;
}
