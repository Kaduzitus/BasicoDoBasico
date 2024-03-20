#include <stdio.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL, "Portuguese");
    int numeros[5];
    int i;
    int maior, menor;

    // Solicita ao usuário que insira cinco números inteiros
    printf("Digite cinco numeros inteiros separados por espacos: ");
    for (i = 0; i < 5; i++) {
        scanf("%d", &numeros[i]);
    }

    // Inicializa as variáveis maior e menor com o primeiro número
    maior = menor = numeros[0];

    // Encontra o maior e o menor valor
    for (i = 1; i < 5; i++) {
        if (numeros[i] > maior) {
            maior = numeros[i];
        }
        if (numeros[i] < menor) {
            menor = numeros[i];
        }
    }

    // Imprime o maior e o menor valor
    printf("O maior valor digitado é: %d\n", maior);
    printf("O menor valor digitado é: %d\n", menor);

    return 0;
}
