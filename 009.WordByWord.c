#include <stdio.h>

/* Program to print one word per line */

#define IN 1
#define OUT 0

int main () {

    int c, state;

    state = OUT;
    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\t' || c == '\n') {
            if (!state == OUT) {
                state = OUT;
                putchar('\n');
            }
        } else {
            state = IN;
            putchar(c);
        }
    }
}
