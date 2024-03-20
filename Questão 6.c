#include <stdio.h>

int main() {
    int numeros[5];
    int i;
    int maior, segundo_maior;

    // Solicita ao usuário que insira cinco números inteiros
    printf("Digite cinco numeros inteiros separados por espacos: ");
    for (i = 0; i < 5; i++) {
        scanf("%d", &numeros[i]);
    }

    // Inicializa as variáveis maior e segundo_maior com os dois primeiros números
    if (numeros[0] > numeros[1]) {
        maior = numeros[0];
        segundo_maior = numeros[1];
    } else {
        maior = numeros[1];
        segundo_maior = numeros[0];
    }

    // Encontra o segundo maior valor
    for (i = 2; i < 5; i++) {
        if (numeros[i] > maior) {
            segundo_maior = maior;
            maior = numeros[i];
        } else if (numeros[i] > segundo_maior && numeros[i] != maior) {
            segundo_maior = numeros[i];
        }
    }

    // Imprime o segundo maior valor
    printf("O segundo maior valor digitado eh: %d\n", segundo_maior);

    return 0;
}
