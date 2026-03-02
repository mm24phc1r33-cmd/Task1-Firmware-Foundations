#ifndef GPIO_H
#define GPIO_H

#include "ch32v00x.h"

void gpio_init(void);
void led_on(void);
void led_off(void);
void led_toggle(void);

#endif

