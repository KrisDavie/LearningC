#include <stdio.h>

/* A program to print a histogram of word lengths */

int main () {
    int lengths[12];
    int c, clen, max;

    max = clen = 0;
    for (int i = 1; i < 12; ++i) {
        lengths[i] = 0;
    }
    while ((c = getchar()) != EOF) {
        if (c == '\n' || c == '\t' || c == ' ') {
            if (clen > 0 && clen <= 10 ) {
                ++lengths[clen];
            } else if (clen >= 10) {
                ++lengths[11];
            }
            clen = 0;
        } else {
            ++clen;
        }
    }

    for (int i = 1; i <= 11; ++i) {
        if (lengths[i] > max) {
            max = lengths[i];
        }
    }

    for (int i = 1; i <= 11; ++i) {
        if (i < 11) {
            printf("%d\t:", i);
        } else if (i == 11) {
            printf("10+\t:");
        }
        for (int l = 1; l <= ((lengths[i]*100)/max); l++) {
            printf("*");
        }
        printf("\n");
    }
}
