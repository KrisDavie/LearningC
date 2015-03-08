#include <stdio.h>

/* Counts spaces, tabs and newlines*/

int main () {
    int c, b, t, nl;

    b = 0;
    t = 0;
    nl = 0;

    while ((c = getchar()) != EOF) {
        if ( c == '\n') {
            ++nl;
        } else if ( c == ' ') {
            ++b;
        } else if ( c == '\t') {
            ++t;
        }
    }
    printf("There are %d spaces, %d tabs and %d newlines.\n", b, t, nl);
}
