/*
 * led_driver.h
 *
 * Header file for led.c
 *
 *  Created on: 08/05/2016
 *      Author: Tiago Ukei
 */

#ifndef APPLICATION_INCLUDES_LED_DRIVER_H_
#define APPLICATION_INCLUDES_LED_DRIVER_H_

#define INPUT				0
#define OUTPUT				1

#define LEDRGB_RED_DIR		(OUTPUT << 18)
#define LEDRGB_RED_SET		(1 << 18)

#define LEDRGB_GREEN_DIR	(OUTPUT << 19)
#define LEDRGB_GREEN_SET	(1 << 19)

typedef enum led_type{LEDRGB_RED, LEDRGB_GREEN} led_t;

void vLedInit(led_t);

void vLedToggle(led_t);

#endif /* APPLICATION_INCLUDES_LED_DRIVER_H_ */
