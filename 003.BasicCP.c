#include <stdio.h>

/* making a basic cp, will this work with stdin and stdout?
Version 2 */

int main() {
    int c;

    while ((c = getchar())) {
        printf("EOF Statement:- %d\n", (c != EOF));
        putchar(c);
        if (c == EOF){
            printf(" <- This is EOF\n");
            break;
        }
        printf("\n");
    }
}
