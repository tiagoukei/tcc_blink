/*
 * util.h
 *
 *  Created on: 08/05/2016
 *      Author: Tiago Ukei
 */

#ifndef APPLICATION_INCLUDES_UTIL_H_
#define APPLICATION_INCLUDES_UTIL_H_

#define MSEC_TO_TICK(msec)  (((uint32_t)(msec)+500uL/(uint32_t)configTICK_RATE_HZ) \
                             *(uint32_t)configTICK_RATE_HZ/1000uL)
#define TICKS_TO_MSEC(tick) ((tick)*1000uL/(uint32_t)configTICK_RATE_HZ)

#endif /* APPLICATION_INCLUDES_UTIL_H_ */
