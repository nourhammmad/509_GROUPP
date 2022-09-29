/*
 * DCMotor_Interface.h
 *
 *  Created on: Sep 22, 2022
 *      Author: nourn
 */

#ifndef HAL_DCMOTOR_DCMOTOR_INTERFACE_H_
#define HAL_DCMOTOR_DCMOTOR_INTERFACE_H_

#include "DCMotor_Config.h"
#include "DIO_Interface.h"
#include "Timer_Interface.h"

#define ACW          0
#define CW           1

void H_DCMotor_Void_DCMotorInit(void);
void H_DCMotor_Void_DCMotorSetSpeed(u32);
void H_DCMotor_Void_DCMotorSetDirection(u8);
void H_DCMotor_Void_DCMotorStart(void);
void H_DCMotor_Void_DCMotorStop(void);

#endif /* HAL_DCMOTOR_DCMOTOR_INTERFACE_H_ */
