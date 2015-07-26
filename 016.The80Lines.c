#include <stdio.h>
#define MAXLINE 1000

int getLine(char line[], int maxline);

int main() {
    int len;
    char line[MAXLINE];

    while ((len = getLine(line, MAXLINE)) > 0) {
        if (len >= 80) {
            printf("%s\n", line);
            continue;
        }
    }
    return 0;
}

int getLine(char s[], int lim) {
    int c, i, l;

    l = 0;
    for (i = 0; (c = getchar()) != EOF && c != '\n'; i++) {
        if (i < lim -1) {
            s[i] = c;
            ++l;
        }
    }
    if (c == '\n') {
        s[l] = c;
        ++l;
        ++i;
    }
    s[l] = '\0';
    return i;
}
