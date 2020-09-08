/* 
 * File:   buzzer.h
 * Author: Jaret
 *
 * Created on September 8, 2020, 6:00 PM
 */

#ifndef BUZZER_H
#define	BUZZER_H


void initializeBuzzer(void);
void buzzerToggle(void);
void buzzerOff(void);
void buzzerOn(void);
void buzzerOnDuration(int);

#ifdef	__cplusplus
extern "C" {
#endif



#ifdef	__cplusplus
}
#endif

#endif	/* BUZZER_H */

