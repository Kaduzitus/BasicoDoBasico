#include <stdio.h>

int main() {
    int numero, i, eh_primo = 1;

    // Solicita ao usu�rio que insira um n�mero inteiro
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    // Verifica se o n�mero � primo
    if (numero <= 1) {
        eh_primo = 0; // N�meros menores ou iguais a 1 n�o s�o primos
    } else {
        for (i = 2; i <= numero / 2; i++) {
            if (numero % i == 0) {
                eh_primo = 0; // Se for divis�vel por algum n�mero, n�o � primo
                break;
            }
        }
    }

    // Imprime o resultado
    if (eh_primo == 1) {
        printf("%d eh primo.\n", numero);
    } else {
        printf("%d nao eh primo.\n", numero);
    }

    return 0;
}
