/*
 * hwab.h
 *
 *  Created on: Apr 4, 2024
 *      Author: ext_matsmi1
 */

#ifndef MAIN_HWAB_H_
#define MAIN_HWAB_H_

/*==================================================================================================
=                                    INCLUDES                                                      =
==================================================================================================*/
#include <stdio.h>
#include <stdlib.h>
#include "BLE_Driver.h"
#include "freertos/FreeRTOS.h"
#include "freertos/queue.h"
#include "mini_car_ble.h"
#include "driver/gpio.h"
#include "esp_task_wdt.h"
#include "driver/ledc.h"
#include "freertos/semphr.h"
/*==================================================================================================
=                                PIN CONFIGURATION                                                 =
==================================================================================================*/
#define LED_GREEN     GPIO_NUM_4
#define PIN_RMOTOR    GPIO_NUM_21
#define PIN_LMOTOR    GPIO_NUM_23
#define IN_1RMotor    GPIO_NUM_19
#define IN_2RMotor    GPIO_NUM_22
#define IN_3LMotor    GPIO_NUM_18
#define IN_4LMotor    GPIO_NUM_5

/*==================================================================================================
=                                TASKS DECLARATION                                                  =
==================================================================================================*/
void configSetup(void);
void rx_bluetooth(void *pvParameters);
void app_loop(void *pvParameters);
void SWC_Start_Motor(void *pvParameters);
void detect_desconnection(void *pvParameters);

/*==================================================================================================
=                                TYPES DEFINITION                                                  =
==================================================================================================*/
typedef enum {
	TYPE_A,
	TYPE_B
}MessageType;

typedef struct {
	MessageType type;
	uint8_t directionStatus;
	uint8_t speedStatus;
}QueueMessage;


#endif /* MAIN_HWAB_H_ */
