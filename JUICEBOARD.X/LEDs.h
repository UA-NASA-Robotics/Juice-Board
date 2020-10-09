/* 
 * File:   LEDs.h
 * Author: Jaret
 *
 * Created on September 4, 2020, 10:17 PM
 */

#ifndef LEDS_H
#define	LEDS_H

#define LED_ZERO LATBbits.LATB1
#define LED_ONE LATBbits.LATB0
#define LED_TWO LATAbits.LATA1
#define LED_THREE LATAbits.LATA0
#define LED_FOUR LATBbits.LATB15
#define LED_FIVE LATBbits.LATB14
#define LED_SIX LATAbits.LATA7
#define LED_SEVEN LATAbits.LATA10

void LEDsAllOn(void);
void LEDsAllOff(void);
void LEDsAllToggle(void);


void initializeLEDs(void);

#ifdef	__cplusplus
extern "C" {
#endif




#ifdef	__cplusplus
}
#endif

#endif	/* LEDS_H */

