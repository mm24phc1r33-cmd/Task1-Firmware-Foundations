#include "ch32v00x.h"
#include "gpio.h"
#include "uart.h"
#include <string.h>

typedef enum {
    MODE_OFF,
    MODE_ON,
    MODE_FAST,
    MODE_SLOW
} led_mode_t;

led_mode_t current_mode = MODE_OFF;


/* ===== CORRECTED DELAY FOR 48MHz ===== */
void delay_ms(uint32_t ms)
{
    while(ms--)
    {
        for(uint32_t i = 0; i < 8000; i++);
    }
}


int main(void)
{
    SystemInit();
    SystemCoreClockUpdate();

    gpio_init();
    uart_init(115200);

    uart_print("\r\nUART LED Controller Ready\r\n");
    uart_print("Commands: on | off | fast | slow\r\n");

    char cmd[20];
    uint8_t idx = 0;

    while(1)
    {
        /* -------- UART RECEIVE -------- */
        if(USART_GetFlagStatus(USART1, USART_FLAG_RXNE) != RESET)
        {
            char c = uart_read_char();

            if(c == '\r' || c == '\n')
            {
                cmd[idx] = '\0';

                /* Remove extra CR/LF if present */
                while(idx > 0 &&
                     (cmd[idx-1] == '\r' || cmd[idx-1] == '\n'))
                {
                    cmd[--idx] = '\0';
                }

                idx = 0;

                if(strcmp(cmd,"on") == 0)
                {
                    current_mode = MODE_ON;
                    uart_print("\r\nON\r\n");
                }
                else if(strcmp(cmd,"off") == 0)
                {
                    current_mode = MODE_OFF;
                    uart_print("\r\nOFF\r\n");
                }
                else if(strcmp(cmd,"fast") == 0)
                {
                    current_mode = MODE_FAST;
                    uart_print("\r\nFAST\r\n");
                }
                else if(strcmp(cmd,"slow") == 0)
                {
                    current_mode = MODE_SLOW;
                    uart_print("\r\nSLOW\r\n");
                }
                else if(strlen(cmd) > 0)
                {
                    uart_print("\r\nInvalid Command\r\n");
                }
            }
            else
            {
                if(idx < sizeof(cmd) - 1)
                {
                    cmd[idx++] = c;
                }
            }
        }

        /* -------- LED CONTROL -------- */
        switch(current_mode)
        {
            case MODE_OFF:
                led_off();
                break;

            case MODE_ON:
                led_on();
                break;

            case MODE_FAST:
                led_toggle();
                delay_ms(300);     // Visible fast blink
                break;

            case MODE_SLOW:
                led_toggle();
                delay_ms(900);     // Visible slow blink
                break;
        }
    }
}

