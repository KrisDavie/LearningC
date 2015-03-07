#include <stdio.h>

/* Small wc -l like application */

int main () {
    int c, nl;

    nl = 0;

    while ((c = getchar()) != EOF) {
        if ( c == '\n') {
            ++nl;
        }
    }
    printf("There are %d lines.\n", nl);
}
