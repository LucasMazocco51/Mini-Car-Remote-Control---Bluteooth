/*
 * hwab.c
 *
 *  Created on: Apr 4, 2024
 *      Author: ext_matsmi1
 */
/*==================================================================================================
=                                    INCLUDES                                                      =
==================================================================================================*/
#include "hwab.h"

/*==================================================================================================
=                                 GLOBAL VARIABLES                                                 =
==================================================================================================*/
extern QueueHandle_t receivedValueQueue;
extern ledc_timer_config_t TimerMotorConfig;
extern SemaphoreHandle_t dataReadySemaphoreModelStep;
extern SemaphoreHandle_t dataReadySWC;
/*==================================================================================================
=                                 MODEL/SIMULINK INTERFACES                                        =
==================================================================================================*/

uint16_T *direction_status = &mini_car_ble_U.rx_directionStatus;
uint16_T *set_speed = &mini_car_ble_U.rx_set_speed;

/*==================================================================================================
=                                 CONFIGURATION PWM                                                =
==================================================================================================*/
// Config do timer PWM
ledc_timer_config_t TimerMotorConfig = {
    .speed_mode = LEDC_HIGH_SPEED_MODE,       // Exemplo: LEDC_HIGH_SPEED_MODE ou LEDC_LOW_SPEED_MODE
    .duty_resolution = LEDC_TIMER_10_BIT,     // Resolução do duty, pode ser de 1 a 16 bits
    .timer_num = LEDC_TIMER_0,                // Número do timer
    .freq_hz = 5000,                          // Frequência do PWM
    .clk_cfg = LEDC_AUTO_CLK                  // Configuração do clock, LEDC_AUTO_CLK para automático
};

// Config do channel PIN_RMOTOR para PWM
ledc_channel_config_t ChannelRMotorConfig = {
        .channel    = LEDC_CHANNEL_0,
        .duty       = 0,
        .gpio_num   = PIN_RMOTOR,
        .speed_mode = LEDC_HIGH_SPEED_MODE,
        .hpoint     = 0,
        .timer_sel  = LEDC_TIMER_0
};

// Config do channel PIN_LMOTOR para PWM
ledc_channel_config_t ChannelLMotorConfig = {
        .channel    = LEDC_CHANNEL_1,
        .duty       = 0,
        .gpio_num   = PIN_LMOTOR,
        .speed_mode = LEDC_HIGH_SPEED_MODE,
        .hpoint     = 0,
        .timer_sel  = LEDC_TIMER_0
};

/*==================================================================================================
=                                TASKS DEFINITION                                                  =
==================================================================================================*/

void app_loop(void *pvParameters)
{
	//esp_task_wdt_add(NULL);
	mini_car_ble_initialize();
	while(1){
		if(xSemaphoreTake(dataReadySemaphoreModelStep, portMAX_DELAY)==pdTRUE)
		{
			printf("Estou no model step\n");
		    /* Call a step of the model to process his logic */
			mini_car_ble_step();
			//esp_task_wdt_reset();
		}
	}
}

/*update model input parameters from bluetooth*/
void rx_bluetooth(void *pvParameters)
{
	QueueMessage message;
	while(1)
	{

		if(xQueueReceive(receivedValueQueue, &message, portMAX_DELAY) == pdTRUE)
		{
			switch(message.type)
			{
			case TYPE_A:
				printf("\nRX Direction completo recebido: %d\n",message.directionStatus);
				printf("RX Speed recebido: %d\n",message.speedStatus);
				*direction_status = message.directionStatus;
				*set_speed = message.speedStatus;
				xSemaphoreGive(dataReadySemaphoreModelStep);
				xSemaphoreGive(dataReadySWC);
				break;
			default:
				break;
			}
		}
		else
		{
			/* No action needed */
		}
	}
}


void configSetup(void)
{
	gpio_set_direction(LED_GREEN, GPIO_MODE_OUTPUT);
	gpio_set_direction(IN_1RMotor, GPIO_MODE_OUTPUT);
	gpio_set_direction(IN_2RMotor, GPIO_MODE_OUTPUT);
	gpio_set_direction(IN_3LMotor, GPIO_MODE_OUTPUT);
	gpio_set_direction(IN_4LMotor, GPIO_MODE_OUTPUT);
	//Configure PWM
	ledc_timer_config(&TimerMotorConfig);
	//Configure Channel PWM
	ledc_channel_config(&ChannelRMotorConfig);
	//Configure Channel PWM
    ledc_channel_config(&ChannelLMotorConfig);
}

void detect_desconnection(void *pvParameters)
{
	int disconnect;
	if(xQueueReceive(disconnectHandleQueue, &disconnect, portMAX_DELAY) == pdTRUE)
	{
		/* Turn off all states */
		mini_car_ble_Y.Drive_RMotor = 0;
		mini_car_ble_Y.Drive_LMotor = 0;
		//Configure Channel PWM
		ledc_channel_config(&ChannelRMotorConfig);
		//Configure Channel PWM
	    ledc_channel_config(&ChannelLMotorConfig);
		gpio_set_level(IN_1RMotor, 0);
		gpio_set_level(IN_2RMotor, 0);
		gpio_set_level(IN_3LMotor, 0);
		gpio_set_level(IN_4LMotor, 0);
	}
}

void SWC_Start_Motor(void *pvParameters)
{
	while(1)
	{
		printf("Estou no SWC_Start_Motor");
		ledc_set_duty(LEDC_HIGH_SPEED_MODE, LEDC_CHANNEL_0, mini_car_ble_Y.Drive_RMotor); // Velocidade do motor processado pela aplicacao
		ledc_update_duty(ChannelRMotorConfig.speed_mode, ChannelRMotorConfig.channel); // metodo update para passar a nova config de pwm pro pino rmotor corretamente
		ledc_set_duty(LEDC_HIGH_SPEED_MODE, LEDC_CHANNEL_1, mini_car_ble_Y.Drive_LMotor); // Velocidade do motor processado pela aplicacao
		ledc_update_duty(ChannelLMotorConfig.speed_mode, ChannelLMotorConfig.channel); // metodo update para passar a nova config de pwm pro pino lmotor corretamente
		vTaskDelay(pdMS_TO_TICKS(2));
	}
}
