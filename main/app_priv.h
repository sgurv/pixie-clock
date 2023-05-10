
#pragma once
#include <stdint.h>
#include <stdbool.h>

extern esp_rmaker_device_t *clock_device;
extern esp_rmaker_device_t *temp_sensor_device;

void app_driver_init(void);
float app_get_current_temperature();
