#include <stdio.h>

int main() {
    int numero, i, eh_primo = 1;

    // Solicita ao usuário que insira um número inteiro
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    // Verifica se o número é primo
    if (numero <= 1) {
        eh_primo = 0; // Números menores ou iguais a 1 não são primos
    } else {
        for (i = 2; i <= numero / 2; i++) {
            if (numero % i == 0) {
                eh_primo = 0; // Se for divisível por algum número, não é primo
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
