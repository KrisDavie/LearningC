#include <stdio.h>

/* Starting with arrays, counting occurances of all digits, differen whitespaces
and all other characters */

int main () {
    int c, i, nwhite, nother;
    int ndigit[10];

    nwhite = nother = 0;

    /* Initialise all values in the array */
    for (i = 0; i < 10; i++) {
        ndigit[i] = 0;
    }

    while ((c = getchar()) != EOF) {
        if ( c >= '0' && c <= '9') {
            ++ndigit[c-'0'];
        } else if (c == ' ' || c == '\t' || c == '\n') {
            ++nwhite;
        } else {
            ++nother;
        }
    }

    for (i = 0; i < 10; i++) {
        printf("%d ", ndigit[i]);
    }
    printf(", white space = %d, other = %d\n", nwhite, nother);
}
