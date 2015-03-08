#include <stdio.h>

/* Basic version of wc */

#define IN  1 /* In a word */
#define OUT  0 /* Out of a word */

int main () {

    int c, nc, nw, nl, state;

    state = OUT;
    nc = nw = nl = 0;

    while ((c = getchar()) != EOF) {
        ++nc;
        if (c == '\n') {
            ++nl;
        }
        if (c == ' ' || c == '\t' || c == '\n') {
            state = OUT;
        } else if (state == OUT) {
            state = IN;
            ++nw;
        }

    }
    printf("%d characters, %d words, %d lines", nc, nw, nl);
}
