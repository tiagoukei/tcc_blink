/*
 * Task2.h
 *
 *  Created on: 08/05/2016
 *      Author: Tiago Ukei
 */

#ifndef APPLICATION_INCLUDES_TASK2_H_
#define APPLICATION_INCLUDES_TASK2_H_

#include "FreeRTOS.h"
#include "task.h"

#define TASK2_NAME "Task2"
#define TASK2_STACK_SIZE 256

void Task2_init(void);
void Task2_task(void*);


#endif /* APPLICATION_INCLUDES_TASK2_H_ */
