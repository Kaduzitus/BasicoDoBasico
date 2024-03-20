#include <stdio.h>

// Função para calcular o dobro de um número inteiro
int dobro(int numero) {
    return 2 * numero;
}

int main() {
    int num, resultado;

    // Solicita ao usuário que insira um número inteiro
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    // Calcula o dobro do número usando a função dobro()
    resultado = dobro(num);

    // Imprime o dobro do número
    printf("O dobro de %d eh: %d\n", num, resultado);

    return 0;
}
