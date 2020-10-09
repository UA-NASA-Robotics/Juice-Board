#include "mcc_generated_files/system.h"
#include "buzzer.h"
#include "app.h"
#include "LEDs.h"
#include "mcc_generated_files/delay.h"
#include "mcc_generated_files/tmr2.h"
 
timer_t statusLED, testTimer;

void app_initialize()
{
    SYSTEM_Initialize();
    
    setTimerInterval(&statusLED, 1000);
    setTimerInterval(&testTimer, 500);
    
    initializeLEDs();
    int i = 0;
    for (i; i < 5; i++)
    {
        LEDsAllToggle();
        DELAY_milliseconds(100);
    }
    LEDsAllOff();
    
    initializeBuzzer();
    i = 0;
    for (i; i < 3; i++)
    {
        buzzerOnDuration(200);
    }
    
}

void app_task(STATE* currentState)
{
    while (1)
    {
        switch (currentState->state)
        {
            case STATE_INIT:
            {
                app_initialize();
                currentState->state = STATE_IDLE;
                break;
            }
            case STATE_IDLE:
            {
                if (timerDone(&statusLED))
                {
                    LED_ONE ^= 1;
                    LEDsAllToggle();
                }
                if (timerDone(&testTimer))
                {
                    LED_TWO ^= 1;
                }
                break;
            }
        }
    }
}