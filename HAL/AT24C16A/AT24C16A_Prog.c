/*
 * AT24C16A_Prog.c
 *
 *  Created on: Sep 27, 2022
 *      Author: nourn
 */


#include "LED_Interface.h"

#include "AT24C16A_Interface.h"
/*ehna kona bn3ml delays a5er fns el eeprom 3ashan to give time to process 3ashan hya bati2a belnesbla
 * lel microcontroller 3ashan el eeprom da slave w el power bywsal el mcu w el eeprom at the same time
 so slave should be delayed f lama a3ml init lel eeprom ba3atal el system 3ashan el master mayebda2sh yb3t abl
 ma yeb2a gahez*/
/*don't forget to stop condition in both writing and reading*/
void H_AT24C16A_Void_EEPROMInit(void)
{
	M_I2C_Void_I2CInit();
	_delay_ms(1000);
}
void H_AT24C16A_Void_EEPROMWrite(u8 Copy_U8_Page,u8 Copy_U8_Byte,u8 Copy_U8_Data)
{
	M_I2C_Void_I2CStartCondition();
	M_I2C_Void_I2CSendSlaveAddressWrite(0x50 | Copy_U8_Page);
	/*i2c we send byte (location address then data to be written)*/
	M_I2C_Void_I2CSendByte(Copy_U8_Byte);
	M_I2C_Void_I2CSendByte(Copy_U8_Data);
	M_I2C_Void_I2CStopCondition();
	_delay_ms(500);
}
u8   H_AT24C16A_Void_EEPROMRead(u8 Copy_U8_Page,u8 Copy_U8_Byte)
{
	/*we should first write the location we want to read from then read from it*/
	u8 Local_U8_Reading = 0;
	M_I2C_Void_I2CStartCondition();
	M_I2C_Void_I2CSendSlaveAddressWrite(0x50 | Copy_U8_Page);
	M_I2C_Void_I2CSendByte(Copy_U8_Byte);
	M_I2C_Void_I2CRepeatedStart();
	M_I2C_Void_I2CSendSlaveAddressRead(0x50 | Copy_U8_Page);
	Local_U8_Reading = M_I2C_Void_I2CReadByte();/*we read whatever in the TWDR (data register) rn*/
	M_I2C_Void_I2CStopCondition();
	_delay_ms(500);
	return Local_U8_Reading;
}

















