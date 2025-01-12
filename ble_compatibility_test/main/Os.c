/*
 * Os.c
 *
 *  Created on: 7 de abr. de 2024
 *      Author: lucas
 */

/*==================================================================================================
=                                    INCLUDES                                                      =
==================================================================================================*/
#include "Os.h"

/*==================================================================================================
=                                   GLOBAL VARIABLES                                               =
==================================================================================================*/
QueueHandle_t receivedValueQueue=NULL;
QueueHandle_t disconnectHandleQueue=NULL;
SemaphoreHandle_t dataReadySemaphoreModelStep;
SemaphoreHandle_t dataReadySWC;
/*==================================================================================================
=                                   FUNCTIONS DEFINITION                                           =
==================================================================================================*/
void app_blinkLed(void *pvParameters)
{

	//fica piscando o led e enviando o hello pra dizer que ta vivo
	static int call_initialization=0;

	while(1){
		/* Initialize the model just once */
		if(!call_initialization)
		{
			gpio_set_direction(GPIO_NUM_2,GPIO_MODE_OUTPUT);
			call_initialization=1;
		}
        gpio_set_level(GPIO_NUM_2,1);
        vTaskDelay(pdMS_TO_TICKS(1000)); // Exemplo: 1000 ms de delay
        gpio_set_level(GPIO_NUM_2,0);
        vTaskDelay(pdMS_TO_TICKS(1000)); // Exemplo: 1000 ms de delay
		vTaskDelay(pdMS_TO_TICKS(1000)); // Exemplo: 1000 ms de delay
	}
}

void app_mainExec(void)
{
	dataReadySemaphoreModelStep = xSemaphoreCreateBinary();
	dataReadySWC = xSemaphoreCreateBinary();
	receivedValueQueue = xQueueCreate(10, sizeof(QueueMessage));
	disconnectHandleQueue = xQueueCreate(10, sizeof(int)); /*Cria uma fila de 10 elementos do tipo int*/
	app_BLE();
    configSetup();
	xTaskCreate(app_blinkLed,"BlinkTask", 2048, NULL, 2, NULL);
    xTaskCreate(rx_bluetooth, "rxBluetooth", 2048, NULL, 2, NULL);
    xTaskCreate(app_loop, "AppTask", 2048, NULL, 2, NULL);
    xTaskCreate(SWC_Start_Motor, "Start Motor", 2048, NULL, 2, NULL);
    xTaskCreate(detect_desconnection, "Disconnect EVT", 2048, NULL, 2, NULL);

}

