# Task-3: Scriptable LED Control using UART  
VSDSquadron Mini – CH32V00x

## 📌 Project Description
This project demonstrates UART-based LED control on the VSDSquadron Mini development board.  
The onboard LED is controlled using serial commands sent via UART.

The system receives user input from a serial monitor and performs different LED operations accordingly.

---

## 🛠 Hardware Used
- VSDSquadron Mini (CH32V00x MCU)
- Onboard LED (PD6)
- USB-to-Serial Interface

---

## 🔌 Pin Configuration

| Function | Pin |
|----------|------|
| LED      | PD6 |
| UART TX  | PD5 |
| UART RX  | PD6 |

Note: PD6 is shared between LED and UART RX.  
The code temporarily switches pin modes to allow both functionalities.

---

## ⚙️ UART Configuration
- Baud Rate: 115200
- Data Bits: 8
- Stop Bits: 1
- Parity: None

---

## 🎮 Serial Commands

| Command | Action |
|---------|--------|
| 1       | Fast Blink |
| 2       | Slow Blink |
| 3       | LED ON |
| 0       | LED OFF |

---

## 🧠 Working Principle
1. UART initializes at 115200 baud rate.
2. The system waits for user input from serial monitor.
3. Based on received command:
   - LED blinks fast
   - LED blinks slow
   - LED turns ON
   - LED turns OFF
4. After LED operation, UART mode is restored.

---

## 📂 Project Structure


