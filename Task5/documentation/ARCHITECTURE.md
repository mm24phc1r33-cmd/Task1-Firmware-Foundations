# System Architecture

## High Level Design

+-------------------+
|   UART Interface  |
+-------------------+
          |
          v
+-------------------+
|  Command Parser   |
+-------------------+
          |
          v
+-------------------+
|  Mode Controller  |
+-------------------+
          |
          v
+-------------------+
|   GPIO Driver     |
+-------------------+
          |
          v
       External LED

---

## Design Separation

Application Layer:
- Command parsing
- Mode state machine

Driver Layer:
- GPIO driver
- UART driver

---

## Data Flow

UART Command → Parser → Mode Variable Update → LED Control
