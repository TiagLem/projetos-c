// Leia uma temperatura em graus Celsius e apresente-a convertida em graus Fahrenheit.

#include <stdio.h>

int main() {

    float temp_celcius = 0;

    printf("Digite uma temperatura em Celsius abaixo: \n");
    scanf("%f", &temp_celcius);

    float f = 0;
    f = temp_celcius * (9.0/5.0) + 32.0;

    printf("A temperatura em Fahrenheit eh: %.4f\n", f);

    return 0;

}