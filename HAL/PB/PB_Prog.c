/*
 * PB_Prog.c
 *
 *  Created on: Aug 27, 2022
 *      Author: nourn
 */
#include"PB_Interface.h"
#include<util/delay.h>

void H_PB_Void_PBInit(u8 Copy_U8_PushButton)
{
	switch(Copy_U8_PushButton){
	case PB0:M_DIO_Void_SetPinDirection(PUSH_BUTTON0_PIN,INPUT);break;
	case PB1:M_DIO_Void_SetPinDirection(PUSH_BUTTON1_PIN,INPUT);break;
	case PB2:M_DIO_Void_SetPinDirection(PUSH_BUTTON2_PIN,INPUT);break;
	default: ;break;
	}
}
u8 H_PB_U8_PBRead(u8 Copy_U8_PushButton)
{
	u8 Local_U8_Reading=RELEASED;
	switch(Copy_U8_PushButton){
	case PB0:
		if(M_DIO_U8_GetPinValue(PUSH_BUTTON0_PIN) ==PRESSED)
		{
			_delay_ms(DEBOUNCINGTIME);
				if(M_DIO_U8_GetPinValue(PUSH_BUTTON0_PIN) ==PRESSED)
				{
					while(M_DIO_U8_GetPinValue(PUSH_BUTTON0_PIN) ==PRESSED);
				Local_U8_Reading=PRESSED;
			    }

		}break;
	case PB1:	if(M_DIO_U8_GetPinValue(PUSH_BUTTON1_PIN) ==PRESSED)
	{
		_delay_ms(DEBOUNCINGTIME);

			if(M_DIO_U8_GetPinValue(PUSH_BUTTON1_PIN) ==PRESSED)
			{
				while(M_DIO_U8_GetPinValue(PUSH_BUTTON1_PIN) ==PRESSED);
			Local_U8_Reading=PRESSED;
		}

	}break;
	case PB2:	if(M_DIO_U8_GetPinValue(PUSH_BUTTON2_PIN) ==PRESSED)

		_delay_ms(DEBOUNCINGTIME);
		{
			if(M_DIO_U8_GetPinValue(PUSH_BUTTON2_PIN) ==PRESSED)
				{while(M_DIO_U8_GetPinValue(PUSH_BUTTON2_PIN) ==PRESSED);
			Local_U8_Reading=PRESSED;
		}

	}break;
	default:break;
	}

	return Local_U8_Reading;
}
