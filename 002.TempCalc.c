#include <stdio.h>

int main() {
    float fahr, celsius;
    float min, max, step;

    min = -300;
    max = 500;
    step = 20;

    fahr = min;
    printf("Fahrenheit\tCelsius\n");
    while (fahr <= max) {
        celsius = (5.0/9.0) * (fahr -   32.0);
        printf("%4.0f\t|\t%6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }

}
