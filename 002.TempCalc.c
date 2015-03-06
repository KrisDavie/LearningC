#include <stdio.h>

int main() {
    float cf, fahr, celsius;
    float min, max, step;

    min = -300;
    max = 500;
    step = 20;

    cf = min;
    printf("C/F\t|    Fahrenheit\t|   Celsius\n----------------------------------\n");
    while (cf <= max) {
        celsius = (5.0/9.0) * (cf - 32.0);
        fahr = ((cf * (9.0/5.0)) + 32);
        printf("%4.0f\t|\t%4.1f\t|\t%4.1f\n", cf, fahr, celsius);
        cf = cf + step;

    }

}
