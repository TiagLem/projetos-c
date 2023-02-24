// Peça ao usuário para digitar três valores inteiros e imprima a soma deles

#include <stdio.h>

int main() {

    int valor1 = 0;
    int valor2 = 0;
    int valor3 = 0;
    int soma = 0;

    printf("Por favor, digite 3 numeros inteiros separados por espaco.\n");
    scanf("%d %d %d", &valor1, &valor2, &valor3);

    soma = valor1 + valor2 + valor3;

    printf("A soma dos 3 valores eh: %d", soma);

    return 0;

}