/* 
 * File:   app.h
 * Author: Jaret
 *
 * Created on October 8, 2020, 6:01 PM
 */

#ifndef APP_H
#define	APP_H


typedef enum
{
    STATE_INIT = 0,
            //STATE_READING,
            //STATE_READING_CAN,
            //STATE_WRITING_CAN,
            //STATE_WARNING,
            //STATE_ERROR,
            STATE_IDLE
    
} STATES;

typedef struct
{
    STATES state;
} STATE;

void app_initialize(void);
void app_task(STATE*);


#ifdef	__cplusplus
extern "C" {
#endif


#ifdef	__cplusplus
}
#endif

#endif	/* APP_H */

