#include <stdio.h>

// Fun��o para encontrar o maior e o menor valor em uma sequ�ncia de 5 n�meros inteiros
void encontrarMaiorMenor(int numeros[], int *maior, int *menor) {
    // Inicializa o maior e o menor valor com o primeiro elemento do array
    *maior = *menor = numeros[0];

    // Percorre os elementos do array para encontrar o maior e o menor valor
    int i;
    for (i = 1; i < 5; i++) {
        if (numeros[i] > *maior) {
            *maior = numeros[i];
        }
        if (numeros[i] < *menor) {
            *menor = numeros[i];
        }
    }
}

int main() {
    int numeros[5];
    int maior, menor;

    // Solicita ao usu�rio que insira os 5 n�meros inteiros
    printf("Digite 5 numeros inteiros separados por espacos: ");
    int i;
    for (i = 0; i < 5; i++) {
        scanf("%d", &numeros[i]);
    }

    // Chama a fun��o encontrarMaiorMenor() para encontrar o maior e o menor valor
    encontrarMaiorMenor(numeros, &maior, &menor);

    // Imprime o maior e o menor valor
    printf("O maior valor eh: %d\n", maior);
    printf("O menor valor eh: %d\n", menor);

    return 0;
}
