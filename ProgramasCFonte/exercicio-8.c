// Leia uma temperatura em graus Kelvin e apresente-a convertida em graus Celsius.

#include <stdio.h>

int main() {

    float temp_kelvin = 0;

    printf("Digite uma temperatura em Kelvin abaixo: \n");
    scanf("%f", &temp_kelvin);

    float c = 0;
    c = temp_kelvin - 273.15;

    printf("A temperatura em Celsius eh: %.4f\n", c);

    return 0;

}