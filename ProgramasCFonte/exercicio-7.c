// Leia uma temperatura em graus Fahrenheit e apresente-a convertida em graus Celsius.

#include <stdio.h>

int main() {

    float temp_fahrenheit = 0;

    printf("Digite uma temperatura em Fahrenheit abaixo: \n");
    scanf("%f", &temp_fahrenheit);

    float c = 0;
    c = 5.0 * (temp_fahrenheit - 32.0)/9.0;

    printf("A temperatura em Celsius eh: %.4f\n", c);

    return 0;

}