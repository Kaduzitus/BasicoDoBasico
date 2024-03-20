#include <stdio.h>

// Fun��o para calcular o fatorial de um n�mero
int calcularFatorial(int num) {
    // Caso base: fatorial de 0 � 1
    if (num == 0) {
        return 1;
    }
    
    // Caso recursivo: num * fatorial(num - 1)
    return num * calcularFatorial(num - 1);
}

int main() {
    int numero;

    // Solicita ao usu�rio que insira um n�mero inteiro
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    // Verifica se o n�mero � negativo
    if (numero < 0) {
        printf("O fatorial nao pode ser calculado para numeros negativos.\n");
        return 1;
    }

    // Calcula o fatorial do n�mero chamando a fun��o calcularFatorial()
    int resultado = calcularFatorial(numero);

    // Imprime o resultado
    printf("O fatorial de %d eh: %2d\n", numero, resultado);

    return 0;
}
