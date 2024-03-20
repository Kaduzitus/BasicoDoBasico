#include <stdio.h>

int main() {
    int numero, i, soma = 0;

    // Solicita ao usu�rio que insira um n�mero inteiro positivo
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &numero);

    // Verifica se o n�mero � positivo
    if (numero < 0) {
        printf("O numero digitado nao e positivo.\n");
        return 1;
    }

    // Imprime todos os n�meros pares de 0 at� o n�mero digitado e calcula a soma
    printf("Numeros pares de 0 ate %d:\n", numero);
    for (i = 0; i <= numero; i += 2) {
        printf("%d ", i);
        soma += i;
    }
    printf("\n");

    // Imprime o n�mero digitado e a soma dos n�meros pares
    printf("Numero digitado: %d\n", numero);
    printf("Soma dos numeros pares: %d\n", soma);

    return 0;
}
