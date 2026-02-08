# Task 2 – Evidence

## 1. UART Evidence

The following screenshot shows UART output from the VSD Squadron Mini board.
A startup message is printed followed by a continuously increasing counter.

**Observed UART Output:**
- Counter prints from 0 to 10
- Output is continuous and readable
- UART baud rate: 115200

**Proof:**
- Screenshot of PlatformIO Serial Monitor showing 10+ consecutive lines
<img width="1754" height="1020" alt="Screenshot 2026-02-08 153259" src="https://github.com/user-attachments/assets/2cabeade-f28e-4daa-a0c5-d1ad2ca96521" />

## 2. GPIO Evidence

The onboard user LED is toggled using GPIO output configuration.

**GPIO Details:**
- Board: VSD Squadron Mini
- GPIO Pin: PD6 (Onboard User LED)
- Configuration: Output mode

**Proof:**
- Photo showing the physical board
- LED state visibly changing (ON / OFF)
![WhatsApp Image 2026-02-08 at 12 18 21 PM](https://github.com/user-attachments/assets/30ac6b8b-2043-4e61-bd2c-b346bfc56d3d)
<img width="1920" height="986" alt="Screenshot 2026-02-08 121222" src="https://github.com/user-attachments/assets/c6c7f10e-efd0-4a41-bd37-18455b6e2778" />

## 3. Verification Explanation

UART functionality was verified using the PlatformIO Serial Monitor by observing
continuous counter output. GPIO functionality was verified by visually confirming
the toggling of the onboard LED on the VSD Squadron Mini board.




