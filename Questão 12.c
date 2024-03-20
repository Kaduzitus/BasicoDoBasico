#include <stdio.h>

// Função para calcular a soma de três números inteiros
int soma(int num1, int num2, int num3) {
    return num1 + num2 + num3;
}

int main() {
    int numero1, numero2, numero3, resultado;

    // Solicita ao usuário que insira três números inteiros
    printf("Digite tres numeros inteiros separados por espacos: ");
    scanf("%d %d %d", &numero1, &numero2, &numero3);

    // Calcula a soma dos três números chamando a função soma()
    resultado = soma(numero1, numero2, numero3);

    // Imprime a soma dos três números fora da função
    printf("A soma dos numeros eh: %d\n", resultado);

    return 0;
}
