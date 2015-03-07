#include <stdio.h>

/* Basic character counting wc -c like application
Version 2
*/

int main() {

    double nc;

    /* For loop is empty, but a ; is used on a line to show it is empty */
    for (nc = 0; getchar() != EOF; ++nc)
        ;
    printf ("Number of characters:- %.0f\n", nc);
}
