#ifndef UART_H
#define UART_H

#include <stdint.h>

void uart_init(uint32_t baud);
void uart_print(const char *str);
char uart_read_char(void);

#endif

