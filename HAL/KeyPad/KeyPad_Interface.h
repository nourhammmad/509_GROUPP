/*
 * KeyPad_Interface.h
 *
 *  Created on: Sep 9, 2022
 *      Author: nourn
 */

#ifndef HAL_KEYPAD_KEYPAD_INTERFACE_H_
#define HAL_KEYPAD_KEYPAD_INTERFACE_H_

#include "KeyPad_Config.h"
#include "DIO_Interface.h"
#include "STD.h"
#include <util/delay.h>

#define KEYPAD_PRESSED              0
#define KEYPAD_RELEASED             1

void H_KeyPad_Void_KeyPadInit(void);
u8   H_KeyPad_U8_KeyPadRead(void);

#endif /* HAL_KEYPAD_KEYPAD_INTERFACE_H_ */
