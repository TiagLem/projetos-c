// Leia uma temperatura em graus Celsius e apresente-a convertida em graus Kelvin.

#include <stdio.h>

int main() {

    float temp_celsius = 0;

    printf("Digite uma temperatura em Celsius abaixo: \n");
    scanf("%f", &temp_celsius);

    float k = 0;
    k = temp_celsius + 273.15;

    printf("A temperatura em Kelvin eh: %.4f\n", k);

    return 0;

}