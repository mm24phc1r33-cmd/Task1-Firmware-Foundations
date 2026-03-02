# Application Logic Guide

## State Machine

The system operates in four states:

1. MODE_OFF
2. MODE_ON
3. MODE_FAST
4. MODE_SLOW

---

## Mode Behavior

MODE_OFF:
LED is turned OFF continuously.

MODE_ON:
LED remains ON continuously.

MODE_FAST:
LED toggles with ~300ms delay.

MODE_SLOW:
LED toggles with ~900ms delay.

---

## Error Handling

If invalid command is entered:
System prints "Invalid Command" over UART.
