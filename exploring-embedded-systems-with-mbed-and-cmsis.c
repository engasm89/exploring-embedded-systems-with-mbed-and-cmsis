/*
 * Course: Exploring Embedded Systems With Mbed And Cmsis
 * Platform: Embedded Systems
 * Author: Ashraf S A AlMadhoun
 * Purpose: Auto-generated metadata block to document the learning goals.
 * Notes: Auto-generated metadata block (2025-11-18)
 */

#include <stdio.h> // Include I/O for status prints
#include <stdint.h> // Include fixed-width integer types

// Simulated CMSIS SysTick registers
volatile uint32_t SYST_CSR = 0; // SysTick Control and Status Register (simulated)
volatile uint32_t SYST_RVR = 0; // SysTick Reload Value Register (simulated)
volatile uint32_t SYST_CVR = 0; // SysTick Current Value Register (simulated)

// Simulated NVIC enable for an interrupt
volatile uint32_t NVIC_ISER0 = 0; // Interrupt Set-Enable Register 0 (simulated)

// Bit masks (as per CMSIS style) — simulated values
#define SYST_CSR_ENABLE (1u << 0) // Enable SysTick
#define SYST_CSR_TICKINT (1u << 1) // Enable SysTick interrupt
#define SYST_CSR_CLKSOURCE (1u << 2) // Select processor clock

// Initialize SysTick to generate periodic ticks
void systick_init(uint32_t reload) { // Initialize SysTick with reload value
  SYST_RVR = reload; // Set reload register
  SYST_CVR = 0; // Reset current value
  SYST_CSR = SYST_CSR_ENABLE | SYST_CSR_TICKINT | SYST_CSR_CLKSOURCE; // Enable SysTick with interrupt
  printf("SysTick init: reload=%u\n", reload); // Print configuration
} // End function

// Enable a simulated IRQ number via NVIC
void nvic_enable_irq(uint8_t irq_num) { // Enable IRQ using NVIC
  NVIC_ISER0 |= (1u << irq_num); // Set bit for the IRQ number
  printf("NVIC enable IRQ %u\n", (unsigned)irq_num); // Print enabled IRQ
} // End function

// Main demonstrating MBED/CMSIS style initialization
// Main routine: orchestrates the exploring embedded systems with mbed and cmsis scenario
int main(void) { // Entry point
  printf("Exploring Embedded Systems with MBED and CMSIS\n"); // Title output
  systick_init(1000u); // Configure SysTick for 1000 ticks
  nvic_enable_irq(15u); // Enable simulated IRQ 15
  for (int i = 0; i < 5; ++i) { // Loop to simulate ticks
    SYST_CVR++; // Increment current tick
    printf("Tick=%u CSR=0x%08X\n", SYST_CVR, SYST_CSR); // Print tick and control state
  } // End loop
  return 0; // Exit success
} // End main

