#include "uart.h"
#include "gpio.h"
#include "ch32v00x.h"

void Delay_ms(uint32_t ms)
{
    for(uint32_t i = 0; i < ms * 2000; i++)
        __asm__("nop");
}

int main(void)
{
    uart_init(115200);

    uart_print("\r\nTask-3 Scriptable LED Controller\r\n");
    uart_print("1=Fast  2=Slow  3=ON  0=OFF\r\n");

    char cmd;

    while(1)
    {
        cmd = uart_read_char();

        if(cmd == '1')
        {
            uart_print("Fast Blink\r\n");
            for(int i=0;i<20;i++)
            {
                led_toggle();
                Delay_ms(100);
            }
        }
        else if(cmd == '2')
        {
            uart_print("Slow Blink\r\n");
            for(int i=0;i<10;i++)
            {
                led_toggle();
                Delay_ms(500);
            }
        }
        else if(cmd == '3')
        {
            uart_print("LED ON\r\n");
            led_on();
        }
        else if(cmd == '0')
        {
            uart_print("LED OFF\r\n");
            led_off();
        }

        uart_init(115200);   // restore UART RX after LED control
    }
}

