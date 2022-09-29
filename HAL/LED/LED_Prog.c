/*
 * LED_Prog.c
 *
 *  Created on: Aug 27, 2022
 *      Author: nourn
 */
#include"LED_Interface.h"

void H_LED_Void_LedInit(u8 Copy_U8_Led)
{
	switch(Copy_U8_Led)
		{
		case LED0: M_DIO_Void_SetPinDirection(LED0_PIN,HIGH); break;
		case LED1: M_DIO_Void_SetPinDirection(LED1_PIN,HIGH); break;
		case LED2: M_DIO_Void_SetPinDirection(LED2_PIN,HIGH); break;
		default:                                          break;
		}

}
void H_LED_Void_LedSetOn(u8 Copy_U8_Led)
{
	switch(Copy_U8_Led)
		{
		case LED0:M_DIO_Void_SetPinValue(LED0_PIN,HIGH); break;
		case LED1:M_DIO_Void_SetPinValue(LED1_PIN,HIGH); break;
		case LED2:M_DIO_Void_SetPinValue(LED2_PIN,HIGH); break;
		default:                                      break;
		}

}
void H_LED_Void_LedSetOff(u8 Copy_U8_Led)
{
	switch(Copy_U8_Led)
		{
		case LED0:M_DIO_Void_SetPinValue(LED0_PIN,LOW); break;
		case LED1:M_DIO_Void_SetPinValue(LED1_PIN,LOW); break;
		case LED2:M_DIO_Void_SetPinValue(LED2_PIN,LOW); break;
		default:                                     break;
		}
}
void H_LED_Void_LedTog(u8 Copy_U8_Led)
{
	switch(Copy_U8_Led)
		{
		case LED0:M_DIO_Void_TogPin(LED0_PIN); break;
		case LED1:M_DIO_Void_TogPin(LED1_PIN); break;
		case LED2:M_DIO_Void_TogPin(LED2_PIN); break;
		default:                                     break;
		}
}

