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







