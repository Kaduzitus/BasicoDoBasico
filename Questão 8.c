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

    // Imprime todos os números pares de 0 até o número digitado e calcula a soma
    printf("Numeros pares de 0 ate %d:\n", numero);
    for (i = 0; i <= numero; i += 2) {
        printf("%d ", i);
        soma += i;
    }
    printf("\n");

    // Imprime o número digitado e a soma dos números pares
    printf("Numero digitado: %d\n", numero);
    printf("Soma dos numeros pares: %d\n", soma);

    return 0;
}
