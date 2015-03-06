#include <stdio.h>
#define MAX 500
#define MIN -300
#define STEP 20

int main() {
    float cf, fahr, celsius;

    cf = MIN;
    printf("C/F\t|    Fahrenheit\t|   Celsius\n----------------------------------\n");
    while (cf <= MAX) {
        celsius = (5.0/9.0) * (cf - 32.0);
        fahr = ((cf * (9.0/5.0)) + 32);
        printf("%4.0f\t|\t%4.1f\t|\t%4.1f\n", cf, fahr, celsius);
        cf = cf + STEP;

    }

}
