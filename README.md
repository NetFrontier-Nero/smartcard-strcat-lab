# smartcard-strcat-lab

This repository demonstrates a common **C programming vulnerability** found in
smart‑card–enabled PC software: **unsafe use of `strcat()` when building APDU buffers**.

The project compares:
1. an unsafe implementation using `strcat`
2.  a safe implementation using proper bounds checking

No real smart card hardware or PC/SC APIs are used.
All smart‑card behavior is simulated for safety.

---

## Why This Matters

Smart‑card middleware, authentication agents, and PKCS#11 providers often process
untrusted input (card data, certificates, APDU responses).

If unsafe string functions like `strcat()` are used, this can lead to:
- Buffer overflows
- Application crashes
- Security vulnerabilities (CVEs)

---

## Project Structure

src/
main.c               Entry point
apdu_vulnerable.c    Unsafe strcat example
apdu_safe.c          Safe implementation
apdu.h               Shared definitions
mock_card.c          Simulated smart card data

---

## How This Project Is Tested

- Input is provided manually (stdin)
- No drivers, no hardware, no system APIs
- Behavior is verified by program output

---

## Disclaimer

This project is for **educational purposes only**.
It does not interact with real smart cards or authentication systems.
