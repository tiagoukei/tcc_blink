/*
 * Task1.c
 *
 *  Created on: 08/05/2016
 *      Author: Tiago Ukei
 */

#include "util.h"
#include "Task1.h"
#include "task.h"
#include "led.h"
#include "stddef.h"
#include "semphr.h"

extern xSemaphoreHandle ledSemaphore;

void Task1_init(void) {
	xTaskCreate(Task1_task,
				TASK1_NAME,
				TASK1_STACK_SIZE,
				NULL,
				1,
				NULL);
}

void Task1_task(void *pvParameters) {
	int i;
	while(1) {

		xSemaphoreTake(ledSemaphore,portMAX_DELAY);

		for(i=0;i<12;i++) {
			vLedToggle(LEDRGB_GREEN);
			vTaskDelay(MSEC_TO_TICK(100));
		}

		xSemaphoreGive(ledSemaphore);
		vTaskDelay(MSEC_TO_TICK(10));

	}
	vTaskDelete(NULL);
}
