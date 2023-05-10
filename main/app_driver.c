#include <sdkconfig.h>
#include <freertos/FreeRTOS.h>
#include <freertos/timers.h>

#include <iot_button.h>
#include <esp_rmaker_core.h>
#include <esp_rmaker_standard_types.h>
#include <esp_rmaker_standard_params.h>

#include <app_reset.h>
//#include <ws2812_led.h>
#include "app_priv.h"

void app_driver_init()
{
    
}

float app_get_current_temperature()
{
    return 25.0;
}