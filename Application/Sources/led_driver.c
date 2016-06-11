/*
 * led_driver.c
 *
 * Contains the functions that handle the LED
 *
 *  Created on: 08/05/2016
 *      Author: Tiago Ukei
 */

#include "MKL25Z4.h"
#include "led_driver.h"

void vLedInit(led_t led) {

	SIM_SCGC5 |= SIM_SCGC5_PORTB_MASK;	//enables system clock gating for PORTB

	switch(led) {
	case LEDRGB_RED:
		PORTB_PCR18 = PORT_PCR_MUX(1);		//enables PTB18 as GPIO
		GPIOB_PDDR |= LEDRGB_RED_DIR;		//set output direction
		GPIOB_PSOR |= LEDRGB_RED_SET;		//turn off led
		break;

	case LEDRGB_GREEN:
		PORTB_PCR19 = PORT_PCR_MUX(1);		//enables PTB19 as GPIO
		GPIOB_PDDR |= LEDRGB_GREEN_DIR;		//set output direction
		GPIOB_PSOR |= LEDRGB_GREEN_SET;		//turn off led
		break;

	default:
		break;
	}
}

void vLedToggle(led_t led) {
	switch(led) {
		case LEDRGB_RED:
			GPIOB_PTOR |= LEDRGB_RED_SET;	//toggle red led
			break;
		case LEDRGB_GREEN:
			GPIOB_PTOR |= LEDRGB_GREEN_SET;	//toggle green led
			break;
		default:
			break;
		}
}
