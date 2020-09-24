#include "mcc_generated_files/system.h"
#include "buzzer.h"
#include "mcc_generated_files/delay.h"
#include "mcc_generated_files/tmr2.h"

#define buzzer LATBbits.LATB9

void initializeBuzzer(void)
{
    TRISBbits.TRISB9 = 0; // Set pin RB9 to output
    ANSELBbits.ANSB9 = 0; // Set pin RB9 to digital
}


void buzzerOff(void)
{
    buzzer = 0;
}


void buzzerOnDuration(unsigned long duration, double frequency)
{
    timer_t buzzerTimer;
    setTimerInterval(&buzzerTimer, duration);
    double period = 1 / (frequency);
    period = period * 1000; //convert to ms
    
    timer_t periodTimer;
    setTimerInterval(&periodTimer, period);
    while (!timerDone(&buzzerTimer))
    {
        if (timerDone(&periodTimer))
        {
            //setTimerInterval(&periodTimer, period);
            buzzer ^= 1;
        }
    }
}
