#include <stdio.h>

// Função para verificar se um caractere é uma vogal
int ehVogal(char caractere) {
    // Converte o caractere para minúsculo para facilitar a comparação
    caractere = tolower(caractere);

    // Verifica se o caractere é uma vogal ('a', 'e', 'i', 'o', 'u')
    if (caractere == 'a' || caractere == 'e' || caractere == 'i' || caractere == 'o' || caractere == 'u') {
        return 1; // É uma vogal
    } else {
        return 0; // Não é uma vogal
    }
}

int main() {
    char caracter;

    // Solicita ao usuário que insira um caractere
    printf("Digite um caractere: ");
    scanf(" %c", &caracter);

    // Verifica se o caractere é uma vogal chamando a função ehVogal()
    if (ehVogal(caracter)) {
        printf("O caractere '%c' eh uma vogal.\n", caracter);
    } else {
        printf("O caractere '%c' nao eh uma vogal.\n", caracter);
    }

    return 0;
}
