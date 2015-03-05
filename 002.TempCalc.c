#include <stdio.h>

int main() {
    int fahr, celsius;
    int min, max, step;

    min = -300;
    max = 500;
    step = 20;

    fahr = min;
    printf("Fahrenheit\tCelsius\n");
    while (fahr <= max) {
        celsius = (5 * (fahr -32)) / 9;
        printf("%d\t|\t%d\n", fahr, celsius);
        fahr = fahr + step;
    }

}
