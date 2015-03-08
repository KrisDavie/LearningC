#include <stdio.h>

/* Program to exmove extra spaces */

int main () {

    int c, s;

    while ((c = getchar()) != EOF) {
        if (!(c == ' ')) {
            putchar(c);
            s = 0;
        } else if (s != 1) {
            s = 1;
            putchar(c);
        }
    }
}
