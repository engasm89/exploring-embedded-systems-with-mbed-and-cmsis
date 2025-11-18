# Exploring Embedded Systems With Mbed And Cmsis

## Course Snapshot

| Field | Details |
| --- | --- |
| Instructor | Ashraf S A AlMadhoun |
| Hardware Focus | Embedded Systems |
| Course Link | https://www.udemy.com |
| Repository Updated | 2025-11-18 |

## Overview

Exploring Embedded Systems With Mbed And Cmsis is a hands-on course focused on practical
Embedded Systems development. This repository contains curated starter code, wiring notes,
and a repeatable workflow that mirrors the lessons from the video curriculum.

## Learning Objectives

- Understand the core goals of the **Exploring Embedded Systems With Mbed And Cmsis** lessons.
- Map the theoretical material onto executable firmware samples.
- Practice reviewing telemetry / console logs with the provided samples.
- Customize the code to match your target hardware setup.

## Hardware & Components

Consult `CIRCUIT.md` for wiring notes. Typical builds require a development board,
sensors/actuators described in the Exploring Embedded Systems With Mbed And Cmsis videos,
jumper wires, and a USB cable for programming plus logging.

## Setup Instructions

1. Install the latest Arduino IDE or your preferred toolchain.
2. Clone this repository or download it as a ZIP.
3. Review the `README.md`, `CIRCUIT.md`, and `data/` samples.
4. Upload the code to your dev board and monitor the serial console.

## Code Walkthrough

The `*.c` files are intentionally lightweight so you can focus on the core concept taught
in the course. Each file now includes metadata comments that summarize intent, I/O
expectations, and how telemetry maps to the lesson.

## Usage

```bash
# Build and inspect the sample on a desktop toolchain
gcc -Wall -Wextra -std=c11 *.c -o demo && ./demo

# Or upload via Arduino IDE to replicate the Exploring Embedded Systems With Mbed And Cmsis lab
```

## Sample Data

Open `data/sample-telemetry.jsonl` to inspect representative console output. This is
useful when validating your hardware wiring or cloud logging pipeline.

## Additional Notes (Legacy Content)

# Exploring Embedded Systems with MBED and CMSIS

- Course: Exploring Embedded Systems with MBED and CMSIS
- Author: Ashraf S A AlMadhoun
- Link: https://www.udemy.com/course/mbed-and-cmsis/?couponCode=JULYMAXDICOUNT

## Overview

Initialize SysTick and enable NVIC interrupts in a CMSIS-style flow. This introduces hardware abstraction layers used by MBED/CMSIS.

## Code Explained

- Configures SysTick registers and enables interrupt flags.
- Demonstrates enabling an IRQ via NVIC.
- Prints simulated tick and CSR states.

## Purchase With Discount

Enroll using the link above to get a discounted price and master MBED/CMSIS foundations.
