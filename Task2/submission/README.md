
**# Task 2 – GPIO & UART Implementation  
**Board:** VSD Squadron Mini (CH32V003 – RISC-V)

---

## Objective
The objective of Task-2 is to implement **GPIO and UART drivers** in a modular way using C language and verify UART communication on the **VSD Squadron Mini** RISC-V development board.

This task focuses on:
- Understanding board datasheet
- Separating hardware-specific code into driver files
- Verifying UART output using Serial Monitor

---

## Hardware Used
- **Board:** VSD Squadron Mini  
- **Microcontroller:** CH32V003 (32-bit RISC-V)  
- **Clock Frequency:** 24 MHz  
- **UART Interface:** PD6 (RX), PD5 (TX)  
- **I/O Voltage:** 3.3V  

---

## Software & Tools
- **IDE:** Visual Studio Code  
- **Build System:** PlatformIO  
- **Framework:** noneos-sdk  
- **Platform:** ch32v  
- **Baud Rate:** 115200  **

---

## Project Structure
Output Verification

After successful build and upload, the following output is observed on the Serial Monitor:

 Counter 0 to 10 Started
* Counter = 0
* Counter = 1
* Counter = 2
* Counter = 3
* Counter = 4
* Counter = 5
* Counter = 6
* Counter = 7
* Counter = 8
* Counter = 9
* Counter = 10


This confirms:

* UART initialization is correct

* Code execution is successful

* Task-2 objectives are achieved

Conclusion

Task-2 is successfully completed by implementing modular GPIO and UART drivers based on the VSD Squadron Mini datasheet.
The UART output verification confirms correct functionality of the implemented drivers.
