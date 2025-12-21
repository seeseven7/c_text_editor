#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <termios.h>
#include <unistd.h>

// original terminal attributes
struct termios orig_termios; 

// set terminal attrbutes back to original
void diasableRawMode() {
    tcsetattr(STDIN_FILENO, TCSAFLUSH, &orig_termios);
}

void enableRawMode() {
    tcgetattr(STDIN_FILENO, &orig_termios);
    atexit(diasableRawMode); // call disableRawMode auto when exiting

    struct termios raw = orig_termios; // make a copy
    raw.c_lflag &= ~(ECHO | ICANON); // ICANON -> flag, now read byte by byte

    tcsetattr(STDIN_FILENO, TCSAFLUSH, &raw); // set attr, 
    // TSCAFLUSH: waits for all pending output to be written
}

int main() {
    enableRawMode();

    char c;
    // print each characters ascii val as well as the char it represents
    while (read(STDIN_FILENO, &c, 1) == 1 && c != 'q') {
        if (iscntrl(c)) {
            printf("%d\n", c);
        } else {
            printf("%d ('%c')\n", c, c);
        }
    } 
    
    return 0;
}
