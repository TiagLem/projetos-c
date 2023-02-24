// Faça um programa que leia um número real e o imprima.

#include <stdio.h>

int main() {

    float numReal = 0;

    printf("Digite um numero real: ");
    scanf("%f", &numReal);

    printf("O numero real digitado eh: %.4f", numReal);

    return 0;

}