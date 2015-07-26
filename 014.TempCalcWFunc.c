#include <stdio.h>
#define MAX 500
#define MIN -300
#define STEP 20

int convertCF(int c);
int convertFC(int f);

int main() {
    for(int i = MIN; i <= MAX; i = i + STEP) {
        printf("%dF is %d C; %dC is %dF.\n", i, convertFC(i), i, convertCF(i));
    }
    return 0;
}

int convertCF(int c) {
    int f;
    f = ((c * (9.0/5.0)) + 32);
    return f;
}

int convertFC(int f) {
    int c;
    c = (5.0/9.0) * (f - 32.0);
    return c;
}
