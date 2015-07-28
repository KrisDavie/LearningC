#import <stdio.h>
#define MAXLENGTH 10000

int arrlen(char line[]);
void reverse(char s[], char new[], int l);
int getLine(char s[], int lim);


int main() {
    char line[MAXLENGTH];
    int i, l, len;

    for (i = 0; (len = getLine(line, MAXLENGTH)) > 0; i++) {
        l = arrlen(line);
        char new[arrlen(line)];
        // printf("%s", line);
        reverse(line, new, l - 1);
        printf("%s", new);
    }

    return 0;
}

int arrlen(char line[]) {
    int c, i;

    for (i = 0; (c = line[i]) != '\0'; i++) {}
    return i - 1;
}

void reverse(char s[], char new[], int l) {
    int c, i;
    for (i = 0; (c = s[i]) != '\n'; i++, l--) {
        new[i] = s[l];
    }
    new[i] = '\n';
    new[i + 1] = '\0';

}

int getLine(char s[], int lim) {
    int c, i;

    for (i = 0; (c = getchar()) != EOF && c != '\n'; i++) {
        if (i < lim ) {
            s[i] = c;
        }
    }
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}
