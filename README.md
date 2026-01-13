1. What is Embedded Firmware?

Embedded firmware is a low-level software written to directly control hardware components of an embedded system such as GPIO, timers, UART, SPI, etc. It runs on microcontrollers or SoCs and is responsible for initializing hardware, handling inputs/outputs, and executing real-time tasks.

Difference between Application Code and Firmware:

Application code runs on PCs or mobile devices and interacts with users.

Firmware runs inside embedded hardware and directly interacts with registers and peripherals.

Role of Firmware:
Firmware acts as a bridge between hardware and higher-level logic, ensuring reliable and efficient hardware operation.

2. What is a Firmware Library / API?

A firmware library is a collection of reusable functions (APIs) that simplify hardware access.

Examples of APIs:

digitalWrite()
delay()
Serial.write()


Why APIs are used:

Hide register-level complexity

Improve code readability

Enable code reuse

Reduce development time

Industry-standard approach

3. What is Bare-Metal Firmware?

Bare-metal firmware runs directly on hardware without any OS or RTOS.

Characteristics:

No scheduler or OS services

Developer manages timing and interrupts

Direct hardware control

High efficiency and low latency

Why RTOS is not used here:
This internship focuses on understanding fundamentals of firmware and hardware interaction before introducing RTOS concepts.

PART-B: DEVELOPMENT ENVIRONMENT (SCREENSHOTS REQUIRED)

Step-1: Git Installation

git --version


<img width="745" height="442" alt="Screenshot 2026-01-12 105944" src="https://github.com/user-attachments/assets/70c87a81-03e8-4e6f-9ee4-6543ed14ba3c" />


Step-2: GCC Installation

gcc --version

<img width="749" height="442" alt="Screenshot 2026-01-12 112326" src="https://github.com/user-attachments/assets/61baa1d0-f7af-4ebb-9929-9602c703cfa0" />

Step-3: Code Editor

vs code 

<img width="1920" height="1080" alt="Screenshot 2026-01-12 113337" src="https://github.com/user-attachments/assets/133597da-d0e2-4ed4-95c1-c924fccec7bd" />


Step-4: Clone Repository

git clone https://github.com/vsdip/vsdsquadron-mini-core

cd vsdsquadron-mini-core

<img width="743" height="444" alt="Screenshot 2026-01-12 144942" src="https://github.com/user-attachments/assets/b25f3697-c3a2-4b4a-a66a-52a54d5f3106" />

<img width="752" height="451" alt="Screenshot 2026-01-12 151657" src="https://github.com/user-attachments/assets/a407d049-3997-463f-aeb4-73908edbe6a3" />


## Part C: Firmware Library Usage & Explanation

This section explains how the firmware-style library is structured and how it is used in the application code.

---

## 1. Project Structure

The project is divided into separate source and header files to follow a firmware library style.

```bash
task1/

│── main.c

│── gpio.c

│── gpio.h

│── README.md
```

<img width="1920" height="1015" alt="Screenshot 2026-01-13 115257" src="https://github.com/user-attachments/assets/f0703993-98b7-4c91-ba6b-189c2d7e0699" />
<img width="1920" height="1007" alt="Screenshot 2026-01-13 121721" src="https://github.com/user-attachments/assets/3c59969f-7417-4886-a757-af63d6619b78" />


##-gpio.c

Implements the functions declared in gpio.h

Contains the actual logic of GPIO operations

Represents a firmware-style driver layer
```bash
#include <stdio.h>
#include "gpio.h"

/*
 * This file simulates a GPIO firmware library.
 * In real hardware, these functions would access registers.
 */

void gpio_init(int pin, int direction)
{
    if (direction == GPIO_OUTPUT) {
        printf("GPIO %d initialized as OUTPUT\n", pin);
    } else {
        printf("GPIO %d initialized as INPUT\n", pin);
    }
}

void gpio_write(int pin, int value)
{
    printf("GPIO %d write value: %d\n", pin, value);
}

int gpio_read(int pin)
{
    printf("GPIO %d read value\n", pin);
    return 1; // simulated value
}
```

-gpio.h
```bash
#ifndef GPIO_H
#define GPIO_H

/* Simple GPIO library (simulation) */

/* GPIO direction definitions */
#define GPIO_OUTPUT 1
#define GPIO_INPUT  0

/* API functions */
void gpio_init(int pin, int direction);
void gpio_write(int pin, int value);
int  gpio_read(int pin);

#endif
```

-main.c
```bash
#include <stdio.h>
#include "gpio.h"

#define LED_PIN 5
#define BTN_PIN 3

int main(void)
{
    printf("Starting firmware application\n");

    gpio_init(LED_PIN, GPIO_OUTPUT);
    gpio_init(BTN_PIN, GPIO_INPUT);

    gpio_write(LED_PIN, 1);

    int button_state = gpio_read(BTN_PIN);
    printf("Button state: %d\n", button_state);

    gpio_write(LED_PIN, 0);

    printf("Firmware application finished\n");

    return 0;
}
```
-README.md
```bash
# Task 1: Firmware Library Fundamentals

## Deadline
4 days from the task announcement date.

---

## Objective

The goal of Task 1 is to:

- Understand how firmware libraries are structured  
- Understand how application code uses APIs  
- Set up a basic development environment  
- Build and study a simple firmware-style library  

This task does **not** require the VSDSquadron Mini board.

---


## What to Do

### Step 1: Read the Code

- Open `gpio.h` and understand the exposed API  
- Open `gpio.c` and see how the API is implemented  
- Open `main.c` and observe how the API is used by the application  

---

### Step 2: Build the Code

From inside the `task1` directory, run:

```bash
gcc main.c gpio.c -o task1_demo
````

---

### Step 3: Run the Program

```bash
./task1_demo
```

---

## Expected Output

Console messages simulating GPIO behavior.

---

## What to Submit

1. A short explanation (Markdown or PDF) covering:

   * What is a firmware library?
   * Why are APIs important?
   * What you understood from this task

2. Screenshots of:

   * Successful compilation
   * Program output

3. GitHub repository link (forked or personal)

---

## Important

This task sets the foundation for all upcoming hardware and firmware work.
Incomplete understanding here **will cause difficulties in later tasks**.

3. Application Code (main.c)

main.c includes gpio.h

It does NOT directly access hardware logic

Uses GPIO functions through APIs

Example flow:

Initialize GPIO

Set a GPIO pin

Reset a GPIO pin

This shows proper abstraction between application and driver layers.

4. Why This Structure Is Used in Firmware

Improves code readability

Makes code reusable

Separates hardware logic from application logic

Follows real embedded firmware development practices

This structure is similar to how drivers and HAL libraries are used in microcontroller-based systems.

5. Conclusion

This task demonstrates:

How firmware libraries are structured

How APIs are used in application code

Basic understanding of driver and application separation

The project successfully simulates a firmware-style library without requiring actual hardware.















