#include <stdio.h>

int main() {
    int numero;

    // Solicita ao usu�rio que insira um numero qualquer. ( ENTRADA )
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    // Calcula o dobro do n�mero. ( PROCESSAMENTO )
    int dobro = numero * 2;

    // Imprime o numero digitado e o seu dobro. ( SA�DA )
    printf("O numero digitado foi: %d\n", numero);
    printf("O dobro do numero digitado eh: %d\n", dobro);

    return 0;
}
