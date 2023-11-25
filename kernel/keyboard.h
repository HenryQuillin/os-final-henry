#ifndef KEYBOARD_H
#define KEYBOARD_H
// Function declaations
void keyboard_interrupt_handler();
void keyboard_init();
char getChar();
extern volatile bool keyPressed;
#endif // KEYBOARD_H
