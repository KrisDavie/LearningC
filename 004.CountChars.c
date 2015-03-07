#include <stdio.h>

/* Basic character counting wc -c like application */

int main() {
    long nc;

    nc = 0;

    while (getchar() != EOF) {
        ++nc;
    }
    printf ("Number of characters:- %ld\n", nc);
}
