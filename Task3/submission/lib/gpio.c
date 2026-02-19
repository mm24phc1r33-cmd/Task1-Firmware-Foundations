#include "gpio.h"
#include "ch32v00x.h"

void led_init_gpio(void)
{
    RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOD, ENABLE);

    GPIO_InitTypeDef gpio;
    gpio.GPIO_Pin = GPIO_Pin_6;
    gpio.GPIO_Mode = GPIO_Mode_Out_PP;
    gpio.GPIO_Speed = GPIO_Speed_50MHz;
    GPIO_Init(GPIOD, &gpio);
}

void led_on(void)
{
    led_init_gpio();
    GPIO_ResetBits(GPIOD, GPIO_Pin_6);   // Active LOW
}

void led_off(void)
{
    led_init_gpio();
    GPIO_SetBits(GPIOD, GPIO_Pin_6);
}

void led_toggle(void)
{
    led_init_gpio();
    GPIOD->OUTDR ^= GPIO_Pin_6;
}

