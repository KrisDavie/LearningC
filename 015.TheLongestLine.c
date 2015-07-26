#include <stdio.h>
#define MAXLINE 1000

int getLine(char line[], int maxline);
void copy(char to[], char from[]);

int main() {
    int len;
    int max;
    char line[MAXLINE];
    char longest[MAXLINE];

    max = 0;
    while ((len = getLine(line, MAXLINE)) > 0) {
        if (len >= 1000) {
            printf("Line length (%d) is longer than max (%d): %s\n", len, MAXLINE, line);
            continue;
        }
        if (len > max) {
            max = len;
            copy(longest, line);
        }
    }
    if (max > 0) {
        printf("Longest line (%d) is: \n%s\n", max, longest);
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

void copy(char to[], char from[]) {
    int i;

    i = 0;
    while ((to [i] = from [i]) != '\0') {
        ++i;
    }
}
