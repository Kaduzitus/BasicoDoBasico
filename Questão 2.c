#include <stdio.h>

int main() {
    int numero;

    // Solicita ao usuário que insira um numero qualquer. ( ENTRADA )
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    // Calcula o dobro do número. ( PROCESSAMENTO )
    int dobro = numero * 2;

    // Imprime o numero digitado e o seu dobro. ( SAÍDA )
    printf("O numero digitado foi: %d\n", numero);
    printf("O dobro do numero digitado eh: %d\n", dobro);

    return 0;
}
