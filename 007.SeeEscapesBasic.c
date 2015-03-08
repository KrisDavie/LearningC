#include <stdio.h>

/* A program to replace backslashes, backspaces and tabs with their
respective escape characters */

int main () {

    int c;

    while ((c = getchar()) != EOF) {
        if (c == '\b') {
            putchar('\\');
            putchar('b');
        } else if (c == '\\') {
            putchar('\\');
            putchar('\\');
        } else if (c == '\t') {
            putchar('\\');
            putchar('t');
        } else {
            putchar(c);
        }
    }

}
