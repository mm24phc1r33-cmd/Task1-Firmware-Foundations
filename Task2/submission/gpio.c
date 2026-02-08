#include "gpio.h"

void gpio_init(void)
{
    GPIO_InitTypeDef gpio;

    RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOD, ENABLE);

    gpio.GPIO_Pin = LED_GPIO_PIN;
    gpio.GPIO_Mode = GPIO_Mode_Out_PP;
    gpio.GPIO_Speed = GPIO_Speed_2MHz;

    GPIO_Init(LED_GPIO_PORT, &gpio);
}

void gpio_set(void)
{
    GPIO_SetBits(LED_GPIO_PORT, LED_GPIO_PIN);
}

void gpio_clear(void)
{
    GPIO_ResetBits(LED_GPIO_PORT, LED_GPIO_PIN);
}

void gpio_toggle(void)
{
    LED_GPIO_PORT->OUTDR ^= LED_GPIO_PIN;
}
