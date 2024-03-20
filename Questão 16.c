#include <stdio.h>

// Fun��o para verificar se um n�mero inteiro � primo
int ehPrimo(int numero) {
    // Se o n�mero for menor ou igual a 1, n�o � primo
    if (numero <= 1) {
        return 0;
    }

    // Percorre os poss�veis divisores do n�mero at� a sua raiz quadrada
    int i;
    for (i = 2; i * i <= numero; i++) {
        // Se encontrar um divisor, o n�mero n�o � primo
        if (numero % i == 0) {
            return 0;
        }
    }

    // Se n�o encontrou nenhum divisor, o n�mero � primo
    return 1;
}

int main() {
    int numero;

    // Solicita ao usu�rio que insira um n�mero inteiro
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    // Verifica se o n�mero � primo chamando a fun��o ehPrimo()
    if (ehPrimo(numero)) {
        printf("%d eh um numero primo.\n", numero);
    } else {
        printf("%d nao eh um numero primo.\n", numero);
    }

    return 0;
}
