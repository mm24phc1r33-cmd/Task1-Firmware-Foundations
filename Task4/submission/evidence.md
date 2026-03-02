# Task 4 – Evidence of Execution

## 📌 Project Title
UART Mode Machine – LED Control using CH32V003 (VSD Squadron Mini)

---

## 🧩 Objective

To control an external LED connected to PD4 using UART commands:
- on
- off
- fast
- slow

---

## 🛠 Hardware Setup

- VSD Squadron Mini (CH32V003F4P6)
- External LED
- USB-to-TTL converter
- Jumper wires

---

## 🔌 Hardware Connections

### LED Connection
PD4 → 220Ω resistor → LED (Anode)  
LED (Cathode) → GND  

### UART Connection
USB-TTL TX → PD6  
USB-TTL RX → PD5  
USB-TTL GND → GND  

Baudrate: 115200

---

## 💻 Serial Monitor Output

### 1️⃣ System Start

After flashing firmware and opening serial monitor:

Screenshot: 
<img width="1920" height="1028" alt="Screenshot 2026-03-02 140641" src="https://github.com/user-attachments/assets/7c07a477-097c-4c87-8869-bab76372470f" />


Expected Output:
UART Mode Machine Ready

---

### 2️⃣ LED ON Command

Command Entered:
on

Result:
- LED turns ON continuously
- Serial monitor displays: ON

Screenshot: 
![WhatsApp Image 2026-03-02 at 2 20 12 PM](https://github.com/user-attachments/assets/fed31f49-3faf-4954-86c1-4ca5381faaaa)
<img width="1914" height="1026" alt="image" src="https://github.com/user-attachments/assets/d3f95393-559f-4725-9b83-c8e02d7870a7" />



---

### 3️⃣ LED OFF Command

Command Entered:
off

Result:
- LED turns OFF
- Serial monitor displays: OFF

Screenshot: 
<img width="1906" height="1015" alt="image" src="https://github.com/user-attachments/assets/7dc13239-3467-4c95-b4cd-41b2d503dbb7" />
![WhatsApp Image 2026-03-02 at 2 30 06 PM](https://github.com/user-attachments/assets/e64fa85c-f43e-41e1-ad53-f2c44ea988c8)



---

### 4️⃣ FAST Blink Mode

Command Entered:
fast

Result:
- LED blinks fast (~200–300ms delay)

Screenshot: 
<img width="1911" height="1021" alt="image" src="https://github.com/user-attachments/assets/2086bf61-8348-4ca8-bfb6-09db6768d97e" />


---

### 5️⃣ SLOW Blink Mode

Command Entered:
slow

Result:
- LED blinks slow (~800–900ms delay)

Screenshot: 
<img width="1915" height="1027" alt="image" src="https://github.com/user-attachments/assets/82a306c9-cb3b-45e5-b24a-5981c922b0ad" />


---

## ⚙ Implementation Verification

- UART communication verified at 115200 baud
- Commands successfully parsed using string comparison
- LED control verified on PD4
- All four modes functioning correctly

---

## ✅ Conclusion

The UART Mode Machine was successfully implemented.

The external LED responds correctly to UART commands and switches between OFF, ON, FAST BLINK, and SLOW BLINK modes as expected.

---

## 👩‍💻 Submitted By

Monika  
VSD Squadron Internship
