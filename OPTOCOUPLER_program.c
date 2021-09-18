/*
File Name:OPTOCOUPLER_program
Author:DohaOsama
Date:18/9/2021
Description:OPTOCOUPLER Driver
version 1.0
*/

#include "../../LIB/BIT_MATH.h"

#include "../../LIB/STD_TYPES.h"

#include "../../MCAL/DIO/DIO_interface.h"

#include "OPTOCOUPLER_interface.h"

#include "OPTOCOUPLER_private.h"

#include "OPTOCOUPLER_config.h"

#include <util/delay.h>

void OPTOCOUPLER_voidInit(void)//intiation function
{
	 DIO_voidSetPinDirection(OPTOCOUPLER_PORT,OPTOCOUPLER_PIN,OUTPUT);
	 DIO_voidSetPinValue(OPTOCOUPLER_PORT,OPTOCOUPLER_PIN,LOW);
}
void OPTOCOUPLER_voidOn(void)
{
	 DIO_voidSetPinValue(OPTOCOUPLER_PORT,OPTOCOUPLER_PIN,HIGH);
}
void OPTOCOUPLER_voidOff(void)
{
	 DIO_voidSetPinValue(OPTOCOUPLER_PORT,OPTOCOUPLER_PIN,LOW);
}