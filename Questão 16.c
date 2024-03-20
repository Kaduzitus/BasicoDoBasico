#include <stdio.h>

// Função para verificar se um número inteiro é primo
int ehPrimo(int numero) {
    // Se o número for menor ou igual a 1, não é primo
    if (numero <= 1) {
        return 0;
    }

    // Percorre os possíveis divisores do número até a sua raiz quadrada
    int i;
    for (i = 2; i * i <= numero; i++) {
        // Se encontrar um divisor, o número não é primo
        if (numero % i == 0) {
            return 0;
        }
    }

    // Se não encontrou nenhum divisor, o número é primo
    return 1;
}

int main() {
    int numero;

    // Solicita ao usuário que insira um número inteiro
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    // Verifica se o número é primo chamando a função ehPrimo()
    if (ehPrimo(numero)) {
        printf("%d eh um numero primo.\n", numero);
    } else {
        printf("%d nao eh um numero primo.\n", numero);
    }

    return 0;
}
