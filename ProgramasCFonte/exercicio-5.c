// Leia um número real e imprima a quinta parte deste número

#include <stdio.h>

int main() {

    float num_real = 0;

    printf("Digite um numero real abaixo: \n");
    scanf("%f", &num_real);

    float quinta_parte = num_real/5;

    printf("A quinta parte desse numero eh: %.4f", quinta_parte);

    return 0;

}