#include "gpio.h"
#include "uart.h"
#include <stdio.h>
#include "ch32v00x.h"

// Function declaration
void Delay_ms(uint32_t ms);

int main(void)
{
    uint32_t counter = 0;
    char buffer[64];

    uart_init();
    gpio_init();

    uart_print("\r\n=====================\r\n");
    uart_print("Counter 0 to 10 Started\r\n");
    uart_print("=====================\r\n");

    while (1)
    {
        // Check whether the counter has reached 10 or not
        if (counter <= 10)
        {
            gpio_toggle(); // LED blink h

            sprintf(buffer, "Counter = %lu\r\n", counter++);
            uart_print(buffer);

            Delay_ms(500); // 0.5 second ka delay
        }
        else
        {
            // After reaching 10, the printing will stop and the LED toggling will stop.
           // If you want the counter to start again, you can set counter = 0 here.


        }
    }
}

// Software Delay Function
void Delay_ms(uint32_t ms) {
    for (uint32_t i = 0; i < ms * 2000; i++) {
        __asm__("nop");
    }
}

