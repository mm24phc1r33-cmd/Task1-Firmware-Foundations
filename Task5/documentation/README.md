# UART Mode Machine – LED Control System

## Project Overview

This project implements a UART-controlled LED mode machine on the VSD Squadron Mini (CH32V003).

The system receives commands over UART and changes the LED behavior accordingly.

Supported modes:
- OFF
- ON
- FAST Blink
- SLOW Blink

---

## Target Hardware
- Board: VSD Squadron Mini
- MCU: CH32V003F4P6
- LED connected to PD4
- UART: PD5 (TX), PD6 (RX)
- Baudrate: 115200

---

## Supported Drivers
- GPIO Driver
- UART Driver
- Software Delay (Timing Control)

---

## Quick Start

1. Connect external LED to PD4 with 220Ω resistor
2. Connect USB-TTL to:
   - TX → PD6
   - RX → PD5
   - GND → GND
3. Flash firmware
4. Open Serial Monitor at 115200 baud
5. Type: `on`, `off`, `fast`, `slow`
