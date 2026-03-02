#include "gpio.h"

void gpio_init(void)
{
    RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOD, ENABLE);

    GPIO_InitTypeDef gpio;
    gpio.GPIO_Pin = GPIO_Pin_4;        // PD4
    gpio.GPIO_Mode = GPIO_Mode_Out_PP; // Push-Pull
    gpio.GPIO_Speed = GPIO_Speed_50MHz;

    GPIO_Init(GPIOD, &gpio);

    GPIO_ResetBits(GPIOD, GPIO_Pin_4); // Start OFF
}

void led_on(void)
{
    GPIO_SetBits(GPIOD, GPIO_Pin_4);
}

void led_off(void)
{
    GPIO_ResetBits(GPIOD, GPIO_Pin_4);
}

void led_toggle(void)
{
    if(GPIO_ReadOutputDataBit(GPIOD, GPIO_Pin_4))
        GPIO_ResetBits(GPIOD, GPIO_Pin_4);
    else
        GPIO_SetBits(GPIOD, GPIO_Pin_4);
}

