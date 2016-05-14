/*
 * Task1.h
 *
 *  Created on: 08/05/2016
 *      Author: Tiago Ukei
 */

#ifndef APPLICATION_INCLUDES_TASK1_H_
#define APPLICATION_INCLUDES_TASK1_H_

#include "FreeRTOS.h"
#include "task.h"

#define TASK1_NAME "Task1"
#define TASK1_STACK_SIZE 256

void Task1_init(void);
void Task1_task(void*);


#endif /* APPLICATION_INCLUDES_TASK1_H_ */
