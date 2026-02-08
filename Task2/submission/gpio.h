#ifndef GPIO_H
#define GPIO_H

#include "ch32v00x.h"

/* CHANGE THIS AS PER DATASHEET */
#define LED_GPIO_PORT GPIOD
#define LED_GPIO_PIN  GPIO_Pin_6

void gpio_init(void);
void gpio_set(void);
void gpio_clear(void);
void gpio_toggle(void);

#endif

