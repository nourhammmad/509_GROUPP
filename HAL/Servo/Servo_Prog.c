/*
 * Servo_Prog.c
 *
 *  Created on: Sep 22, 2022
 *      Author: nourn
 */
#include "Servo_Interface.h"
/*Servo motor does not rotate freely and continuously like DC motor. Its rotation is limited to 180⁰ whereas
  the DC motor rotates continuously.*/

void H_Servo_Void_ServoInit(void)
{
	M_Timer_Void_PWMInit(TIMER1_CHANNEL);
	M_Timer_Void_PWMSetFreaquancy(50);
}
void H_Servo_Void_ServoSetAngel(u8 Copy_U8_Angel)
{
	f32 Local_F32_Value = ((Copy_U8_Angel * 5.0 ) / 180.0) + 5.0;
	M_Timer_Void_PWMSetDutyCycle(TIMER1_CHANNEL,Local_F32_Value);
}
void H_Servo_Void_ServoSetStart(void)
{
	M_Timer_Void_PWMStart(TIMER1_CHANNEL);
}
void H_Servo_Void_ServoSetStop(void)
{
M_Timer_Void_PWMStart(TIMER1_CHANNEL);
}


