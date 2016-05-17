/*
 * Task2.c
 *
 *  Created on: 08/05/2016
 *      Author: Tiago Ukei
 */

#include "util.h"
#include "Task2.h"
#include "task.h"
#include "led_driver.h"
#include "stddef.h"
#include "semphr.h"

extern xSemaphoreHandle ledSemaphore;

void Task2_init(void) {
	xTaskCreate(Task2_task,
				TASK2_NAME,
				TASK2_STACK_SIZE,
				NULL,
				1,
				NULL);
}

void Task2_task(void *pvParameters) {
	int i;
	while(1) {

		xSemaphoreTake(ledSemaphore,portMAX_DELAY);

		for(i=0;i<6;i++) {
			vLedToggle(LEDRGB_RED);
			vTaskDelay(MSEC_TO_TICK(1000));
		}

		xSemaphoreGive(ledSemaphore);
		vTaskDelay(MSEC_TO_TICK(10));

	}
	vTaskDelete(NULL);
}
