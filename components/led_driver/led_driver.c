#include "driver/gpio.h"

bool pinMode(int pin, int mode)
{
    assert(mode == 0 || mode == 1);

    gpio_config_t io_conf;
    io_conf.intr_type = GPIO_PIN_INTR_DISABLE;
    io_conf.mode = mode == 1 ? GPIO_MODE_INPUT_OUTPUT : GPIO_MODE_INPUT;
    io_conf.pin_bit_mask = 1ULL << pin;
    io_conf.pull_down_en = GPIO_PULLDOWN_DISABLE;
    io_conf.pull_up_en = GPIO_PULLUP_DISABLE;
    esp_err_t ret = gpio_config(&io_conf);

    return ret == ESP_OK;
}
void digitalWrite(int pin, int value)
{
    assert(value == 0 || value == 1);

    gpio_set_level(pin, value);
}

int digitalRead(int pin)
{
    return gpio_get_level(pin);
}