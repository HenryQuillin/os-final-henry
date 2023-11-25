#include "debug.h"
#include "idt.h"
#include "smp.h"
#include "sys.h"
#include "u8250.h"

volatile bool keyPressed = false;

void keyboard_interrupt_handler()
{
    // char keyPressed = 0x60;
    Debug::printf("Keyboard interrupt handler activated.");
    keyPressed = true;
    SMP::eoi_reg.set(0);
    outb(0x20, 0x20);
}

void keyboard_init()
{
    Debug::printf("PS/2 Keyboard init sequence activated.\n");
    Debug::printf("Keyboard interrupt handler address: 0x%x\n", (uint32_t)keyboard_interrupt_handler);
    IDT::interrupt(33, (uint32_t)keyboard_interrupt_handler);
}

char getChar()
{
    Debug::printf("getch called\n");
    // U8250 *uart = new U8250(); 
    // return uart->get(); 
    

    while (!keyPressed)
    {
        // Debug::printf("waiting for key press\n");
        // Wait for the keyboard interrupt to set keyPressed to true
        // Optionally, use a more efficient waiting mechanism like sleep or yield
    }
    // After the loop, you can return the key value (for now, just return a placeholder)
    return 'a';
}
