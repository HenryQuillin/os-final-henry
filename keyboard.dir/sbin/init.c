#include "libc.h"



int streq(const char* a, const char* b) {
    int i = 0;

    while (1) {
        char x = a[i];
        char y = b[i];
        if (x != y) return 0;
        if (x == 0) return 1;
        i++;
    }
}

int strlen(const char* str) {
    int n = 0;
    while (*str++ != 0) n++;
    return n;
}

int main(int argc, char** argv) {
    // check raw file for pass/fail details
    printf("Keyboard Test: Press any key...\n");

    // Assuming 'getch()' is a function that waits for a key press and returns the character
    char c = getch();  

    printf("You pressed: %c\n", c);

    shutdown();
}
