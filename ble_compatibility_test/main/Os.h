/*
 * OS.h
 *
 *  Created on: 7 de abr. de 2024
 *      Author: lucas
 */

#ifndef MAIN_OS_H_
#define MAIN_OS_H_
/*==================================================================================================
=                                    INCLUDES                                                      =
==================================================================================================*/
#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>
#include <inttypes.h>
#include "hwab.h"
#include "sdkconfig.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "freertos/queue.h"
#include "driver/gpio.h"
#include "esp_task_wdt.h"
#include "BLE_Driver.h"
#include "freertos/semphr.h"

/*==================================================================================================
=                                    GLOBAL VARIABLES                                              =
==================================================================================================*/
extern QueueHandle_t receivedValueQueue;
extern QueueHandle_t disconnectHandleQueue;

/*==================================================================================================
=                                    FUNCTIONS DECLARATION                                         =
==================================================================================================*/
extern void app_mainExec(void);
void app_blinkLed(void *pvParameters);

#endif /* MAIN_OS_H_ */
