#include <stdio.h>
#include <stdlib.h>

int main() {
    int num1, num2, num3;

    // Solicita ao usuário que insira três números inteiros
    printf("Digite tres numeros inteiros separados por espacos: ");
    if (scanf("%d %d %d", &num1, &num2, &num3) != 3) {
        printf("Erro: pelo menos um dos valores digitados nao e um numero inteiro.\n");
        return 1; // Retorna 1 para indicar erro
    }

    // Calcula a soma dos três números
    int soma = num1 + num2 + num3;

    // Imprime os três números e a soma deles
    printf("Os numeros digitados foram: %d, %d e %d\n", num1, num2, num3);
    printf("A soma dos numeros eh: %d\n", soma);

    return 0;
}
