#include <stdio.h>

// Fun��o para calcular a soma de tr�s n�meros inteiros
int soma(int num1, int num2, int num3) {
    return num1 + num2 + num3;
}

int main() {
    int numero1, numero2, numero3, resultado;

    // Solicita ao usu�rio que insira tr�s n�meros inteiros
    printf("Digite tres numeros inteiros separados por espacos: ");
    scanf("%d %d %d", &numero1, &numero2, &numero3);

    // Calcula a soma dos tr�s n�meros chamando a fun��o soma()
    resultado = soma(numero1, numero2, numero3);

    // Imprime a soma dos tr�s n�meros fora da fun��o
    printf("A soma dos numeros eh: %d\n", resultado);

    return 0;
}
