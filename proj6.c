#include <stdio.h>
#include "esp_event.h"
#include "driver/gpio.h"

#define pin15 15

void app_main(void)
{
    gpio_pad_select_gpio(pin15);                    // Defines GPIO functionality for the pin
    gpio_set_direction(pin15, GPIO_MODE_OUTPUT);    // Pin input/output definition

    int level = 0;

    while (true)
    {
        gpio_set_level(pin15, level);               // Define voltage level 0/1
        level = !level;
        vTaskDelay(1000 / portTICK_PERIOD_MS);
    }
}
