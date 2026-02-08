#include "uart.h"
#include "ch32v00x.h"

void uart_init(void)
{
    GPIO_InitTypeDef gpio;
    USART_InitTypeDef uart;

    // PD5 aur USART1 clock enable 
    RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOD | RCC_APB2Periph_USART1, ENABLE);

   // TX pin setup: PD5 is used for the VSD Squadron Mini

    gpio.GPIO_Pin = GPIO_Pin_5;
    gpio.GPIO_Mode = GPIO_Mode_AF_PP;
    gpio.GPIO_Speed = GPIO_Speed_50MHz;
    GPIO_Init(GPIOD, &gpio);

    // UART Configuration
    uart.USART_BaudRate = 115200;
    uart.USART_WordLength = USART_WordLength_8b;
    uart.USART_StopBits = USART_StopBits_1;
    uart.USART_Parity = USART_Parity_No;
    uart.USART_Mode = USART_Mode_Tx;
    uart.USART_HardwareFlowControl = USART_HardwareFlowControl_None;

    USART_Init(USART1, &uart);
    USART_Cmd(USART1, ENABLE);
}

void uart_print(const char *str)
{
    while (*str)
    {
        while (USART_GetFlagStatus(USART1, USART_FLAG_TXE) == RESET);
        USART_SendData(USART1, *str++);
    }
}

