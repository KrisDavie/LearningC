#include <stdio.h>
#define MAXLINE 10000

int getLine(char line[], int maxline);
int arrlen(char line[]);

int main() {
    int i, len;
    char line[MAXLINE];

    while ((len = getLine(line, MAXLINE)) > 0) {
        if (len >= 1) {
            for (i = arrlen(line) - 1; i >= 0; --i) {
                if (line[i] == '\t' || line[i] == ' ') {
                    line[i] = line[i + 1];;
                    line[i + 1] = line[i + 2];
                } else {
                    break;
                }
            }
            if (line[0] != '\n') {
                printf("%s", line);
                continue;
            }
        }
    }
    return 0;
}

int getLine(char s[], int lim) {
    int c, i, l;

    l = 0;
    for (i = 0; (c = getchar()) != EOF && c != '\n' && c!= '\0'; i++) {
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

int arrlen(char line[]) {
    int c, i;

    for (i = 0; (c = line[i]) != '\0'; i++) {}
    return i - 1;
}
