// Leia um número real e imprima o resultado do quadrado desse número

#include <stdio.h>

int main() {

    float numReal = 0;

    printf("Digite um numero real: ");
    scanf("%f", &numReal);

    float quadrado = numReal*numReal;

    printf("O quadrado desse numero eh: %.4f", quadrado);

    return 0;

}