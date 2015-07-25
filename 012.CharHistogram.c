#include <stdio.h>

/* A program to print a histogram of character occurances */

int main () {
    int lengths[128];
    int c, clen, max;

    max = clen = 0;
    for (int i = 1; i <= 127; ++i) {
        lengths[i] = 0;
    }
    while ((c = getchar()) != EOF) {
        ++lengths[c];
    }

    for (int i = 1; i <= 127; ++i) {
        if (lengths[i] > max) {
            max = lengths[i];
        }
    }

    for (int i = 1; i <= 32; ++i) {
        printf("%d\t:", i);
        for (int l = 1; l <= ((lengths[i]*100)/max); l++) {
            printf("*");
        }
        printf("\n");
    }

    for (int i = 33; i <= 127; ++i) {
        printf("%c\t:", i);
        for (int l = 1; l <= ((lengths[i]*100)/max); l++) {
            printf("*");
        }
        printf("\n");
    }
}
