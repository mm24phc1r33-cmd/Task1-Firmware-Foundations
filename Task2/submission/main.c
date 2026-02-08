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
        // Check karein ki counter 10 tak pahuncha hai ya nahi
        if (counter <= 10)
        {
            gpio_toggle(); // LED blink hogi

            sprintf(buffer, "Counter = %lu\r\n", counter++);
            uart_print(buffer);

            Delay_ms(500); // 0.5 second ka delay
        }
        else
        {
            // 10 ke baad print ruk jayega, LED toggle band ho jayegi
            // Agar aap chahte hain ki ginti phir se shuru ho, toh yahan counter = 0; likh sakte hain
        }
    }
}

// Software Delay Function
void Delay_ms(uint32_t ms) {
    for (uint32_t i = 0; i < ms * 2000; i++) {
        __asm__("nop");
    }
}

