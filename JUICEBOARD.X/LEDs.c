

#include "mcc_generated_files/system.h"
#include "LEDs.h"



void LEDsAllOn(void)
{
    LED_ZERO = 1;
    LED_ONE = 1;
    LED_TWO = 1;
    LED_THREE = 1;
    LED_FOUR = 1;
    LED_FIVE = 1;
    LED_SIX = 1;
    LED_SEVEN = 1;
}

void LEDsAllOff(void)
{
    LED_ZERO = 0;
    LED_ONE = 0;
    LED_TWO = 0;
    LED_THREE = 0;
    LED_FOUR = 0;
    LED_FIVE = 0;
    LED_SIX = 0;
    LED_SEVEN = 0;
}

void LEDsAllToggle(void)
{
    LED_ZERO ^= 1;
    LED_ONE ^= 1;
    LED_TWO ^= 1;
    LED_THREE ^= 1;
    LED_FOUR ^= 1;
    LED_FIVE ^= 1;
    LED_SIX ^= 1;
    LED_SEVEN ^= 1;
}


void initializeLEDs(void)
{
    // Set TRIS bits for LED pins to set them to output
    TRISAbits.TRISA0 = 0;
    TRISAbits.TRISA1 = 0;
    TRISAbits.TRISA7 = 0;
    TRISAbits.TRISA10 = 0;
    
    TRISBbits.TRISB0 = 0;
    TRISBbits.TRISB1 = 0;
    TRISBbits.TRISB14 = 0;
    TRISBbits.TRISB15 = 0;
    
    // Set pins that can be digital/analog to digital
    ANSELAbits.ANSA0 = 0;
    ANSELAbits.ANSA1 = 0;
    
    ANSELBbits.ANSB0 = 0;
    ANSELBbits.ANSB1 = 0;
    

}
