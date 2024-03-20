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

    // Calcula a soma de todos os n�meros �mpares de 1 at� o n�mero digitado
    for (i = 1; i <= numero; i += 2) {
        soma += i;
    }

    // Imprime o n�mero digitado e a soma dos n�meros �mpares
    printf("Numero digitado: %d\n", numero);
    printf("Soma dos numeros impares: %d\n", soma);

    return 0;
}
