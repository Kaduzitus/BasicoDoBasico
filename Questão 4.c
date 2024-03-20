#include <stdio.h>

int main() {
    char caractere;

    // Solicita ao usuário que insira um caractere
    printf("Digite um caractere: ");
    scanf(" %c", &caractere);

    // Verifica se o caractere é uma vogal
    if (caractere == 'a' || caractere == 'e' || caractere == 'i' || caractere == 'o' || caractere == 'u' ||
        caractere == 'A' || caractere == 'E' || caractere == 'I' || caractere == 'O' || caractere == 'U') {
        printf("O caractere '%c' eh uma vogal.\n", caractere);
    } else {
        printf("O caractere '%c' nao eh uma vogal.\n", caractere);
    }

    return 0;
}
