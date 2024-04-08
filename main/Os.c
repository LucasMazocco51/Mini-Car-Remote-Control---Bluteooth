/*
 * Os.c
 *
 *  Created on: 7 de abr. de 2024
 *      Author: lucas
 */

#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>
#include <inttypes.h>
#include "sdkconfig.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "driver/gpio.h"
#include "esp_task_wdt.h"
#include "BLE_Driver.h"

void app_blinkLed(void *pvParameters)
{
	esp_task_wdt_add(NULL);

	//fica piscando o led e enviando o hello pra dizer que ta vivo
	static int call_initialization=0;

	while(1){
		/* Initialize the model just once */
		if(!call_initialization)
		{
			gpio_set_direction(GPIO_NUM_2,GPIO_MODE_OUTPUT);
			call_initialization=1;
		}
        printf("Set LED\n");
        gpio_set_level(GPIO_NUM_2,1);
        usleep(1000000);
        printf("Reset LED\n");
        gpio_set_level(GPIO_NUM_2,0);
        usleep(1000000);
		/* Call a step of the model to process his logic */
		esp_task_wdt_reset();
		vTaskDelay(pdMS_TO_TICKS(1000)); // Exemplo: 1000 ms de delay
	}
}

void app_mainExec(void)
{
	app_BLE();



	xTaskCreate(app_blinkLed,"BlinkTask", 2048, NULL, 2, NULL);
//	xTaskCreate(app_BLE,"BLETask", 2048, NULL, 2, NULL);

}

