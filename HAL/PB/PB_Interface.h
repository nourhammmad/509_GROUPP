/*
 * PB_Interface.h
 *
 *  Created on: Aug 27, 2022
 *      Author: nourn
 */
#ifndef HAL_PB_PB_INTERFACE_H_
#define HAL_PB_PB_INTERFACE_H_
/*=============INCLUDES======================*/

#include"DIO_Interface.h"
#include"PB_Config.h"
/*=============MACROS======================*/
#define ACTIVE_HIGH 1
#define ACTIVE_HIGH 2


#if PB_MODE == ACTIVE_HIGH
#define PRESSED 1
#define RELEASED 0
#elif PB_MODE == ACTIVE_LOW
#define PRESSED 0
#define RELEASED 1
#endif
#define PB0 0
#define PB1 1
#define PB2 2

/*=============PROTOTYPES======================*/
void H_PB_Void_PBInit(u8);
u8 H_PB_U8_PBRead(u8);
#endif /* HAL_PB_PB_INTERFACE_H_ */

