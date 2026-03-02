# Driver API Reference

## GPIO Driver

### void gpio_init(void)
Initializes PD4 as output for LED.

### void led_on(void)
Sets PD4 HIGH.

### void led_off(void)
Sets PD4 LOW.

### void led_toggle(void)
Toggles PD4 state.

---

## UART Driver

### void uart_init(uint32_t baudrate)
Initializes UART with specified baudrate.

Parameters:
- baudrate: Communication speed (115200 used)

### char uart_read_char(void)
Reads one character from UART (blocking).

### void uart_write_char(char c)
Sends one character via UART.

### void uart_print(char *str)
Sends string over UART.
