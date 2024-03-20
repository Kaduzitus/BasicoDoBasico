#include <stdio.h>

int main() {
    int numero, i, soma = 0;

    // Solicita ao usuário que insira um número inteiro positivo
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &numero);

    // Verifica se o número é positivo
    if (numero < 0) {
        printf("O numero digitado nao e positivo.\n");
        return 1;
    }

    // Calcula a soma de todos os números ímpares de 1 até o número digitado
    for (i = 1; i <= numero; i += 2) {
        soma += i;
    }

    // Imprime o número digitado e a soma dos números ímpares
    printf("Numero digitado: %d\n", numero);
    printf("Soma dos numeros impares: %d\n", soma);

    return 0;
}
