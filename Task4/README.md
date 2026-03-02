# Task 4 – UART Controlled LED (CH32V003)

## 📌 Project Description

This project implements a UART-based LED control system using the CH32V003 microcontroller (VSD Squadron Mini).

An external LED connected to PD4 is controlled via serial commands sent from a PC terminal.

---

## 🎯 Objective

- Control LED using UART commands
- Implement ON, OFF, FAST BLINK and SLOW BLINK modes
- Use modular driver-based architecture
- Follow required folder structure

---

## 🛠 Hardware Used

- VSD Squadron Mini (CH32V003)
- External LED
- 220Ω resistor
- USB-to-TTL converter

---

## 🔌 Pin Configuration

### LED Connection
- LED connected to **PD4**
- PD4 → 220Ω resistor → LED (Anode)
- LED Cathode → GND

### UART Connection

| USB-TTL | CH32V003 |
|----------|----------|
| TX       | PA10     |
| RX       | PA9      |
| GND      | GND      |

Baudrate: **115200**

---

## 💻 Software Architecture

```
task4/
 └── submission/
     ├── lib/
     │   ├── gpio.c / gpio.h
     │   ├── uart.c / uart.h
     └── app/
         ├── main.c
         ├── README.md
         ├── evidence.md
```

### Modules Description

- gpio.c → LED control functions (on, off, toggle)
- uart.c → UART initialization and data handling
- main.c → Command parsing and LED mode state machine

---

## ⌨ UART Commands

Type commands in Serial Monitor and press Enter:

| Command | Action |
|----------|--------|
| on       | LED ON |
| off      | LED OFF |
| fast     | Fast Blink (300ms delay) |
| slow     | Slow Blink (900ms delay) |

If invalid command is entered → "Invalid Command" message is shown.

---

## ⚙ Implementation Details

- System clock: 48MHz
- Delay implemented using software loop
- String comparison using `strcmp()`
- LED modes controlled using enum state machine
- Direct register programming (no HAL library)

---

## 🔄 Working Logic

1. UART receives characters.
2. Characters stored in buffer.
3. On Enter (CR/LF), string is compared.
4. Mode is updated.
5. LED behaviour changes accordingly.

---

## 🚀 How to Run

1. Connect hardware properly.
2. Flash firmware.
3. Open Serial Monitor (115200 baud).
4. Type:
   - on
   - off
   - fast
   - slow

---

## 📷 Evidence

Execution screenshots are provided in `evidence.md`.

---

## 👩‍💻 Author

Monika  
VSD Squadron Internship
