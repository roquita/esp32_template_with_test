
#include <stdio.h>
#include "sdkconfig.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_system.h"
#include "esp_spi_flash.h"

#include "led_driver.h"

void app_main(void)
{
    printf("led driver testing\n");
    pinMode(2, OUTPUT);

    while (1)
    {
        digitalWrite(2, HIGH);
        vTaskDelay(1000 / portTICK_PERIOD_MS);
        digitalWrite(2, LOW);
        vTaskDelay(1000 / portTICK_PERIOD_MS);
    }
}
