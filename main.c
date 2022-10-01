/*
 * main.c
 *
 *  Created on: Jul 22, 2022
 *      Author: ENG.AbdelrhmanEslam
 */

#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "DIO_Int.h"
#include <util/delay.h>

void main(){
	MDIO_voidSetPinDirection(PORTA, PIN0, OUTPUT);

	while(1){
	MDIO_voidSetPinValue(PORTA, PIN0, HIGH);
	_delay_ms(1000);
	MDIO_voidSetPinValue(PORTA, PIN0, LOW);
	_delay_ms(1000);
	}


}
