#include <stdio.h>

/* making a basic cp, will this work with stdin and stdout?
Version 1 */

int main() {
    int c;

    c = getchar();

    while (c != EOF) {
        putchar(c);
        c = getchar();
    }
}
