#include <stdio.h>

// Fun��o para calcular o dobro de um n�mero inteiro
int dobro(int numero) {
    return 2 * numero;
}

int main() {
    int num, resultado;

    // Solicita ao usu�rio que insira um n�mero inteiro
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    // Calcula o dobro do n�mero usando a fun��o dobro()
    resultado = dobro(num);

    // Imprime o dobro do n�mero
    printf("O dobro de %d eh: %d\n", num, resultado);

    return 0;
}
