/*
 * SPDX-FileCopyrightText: 2021 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: Unlicense OR CC0-1.0
 */

// BLE_Driver.h
#ifndef BLE_DRIVER_H  // Se BLE_DRIVER_H não foi definido anteriormente
#define BLE_DRIVER_H  // Define BLE_DRIVER_H para evitar inclusões futuras

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <inttypes.h>
#include "hwab.h"
#include "Os.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "freertos/event_groups.h"
#include "esp_system.h"
#include "esp_log.h"
#include "nvs_flash.h"
#include "esp_bt.h"
#include "esp_gap_ble_api.h"
#include "esp_gatts_api.h"
#include "esp_bt_main.h"
#include "esp_gatt_common_api.h"
#include "freertos/queue.h"

#define MAX_CHARACTERISTICS 20
/* Attributes State Machine */
enum
{
    IDX_SVC,
    IDX_CHAR_A,
    IDX_CHAR_VAL_A,
    IDX_CHAR_CFG_A,

    HRS_IDX_NB,
};

typedef struct {
    uint16_t handle;
    esp_bt_uuid_t uuid;
} handle_uuid_map_t;


esp_bt_uuid_t *get_uuid_from_handle(uint16_t handle);

extern void app_BLE(void);


#endif // BLE_DRIVER_H

