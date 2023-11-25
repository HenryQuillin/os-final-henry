#include "libc.h"




int main(int argc, char** argv) {
    // check raw file for pass/fail details
    printf("Keyboard Test: Press any key...\n");

    // Assuming 'getch()' is a function that waits for a key press and returns the character
    char c = getch();  

    printf("You pressed: %c\n", c);

    shutdown();
}
