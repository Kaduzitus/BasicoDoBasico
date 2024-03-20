#include <stdio.h>

// Fun��o para verificar se um caractere � uma vogal
int ehVogal(char caractere) {
    // Converte o caractere para min�sculo para facilitar a compara��o
    caractere = tolower(caractere);

    // Verifica se o caractere � uma vogal ('a', 'e', 'i', 'o', 'u')
    if (caractere == 'a' || caractere == 'e' || caractere == 'i' || caractere == 'o' || caractere == 'u') {
        return 1; // � uma vogal
    } else {
        return 0; // N�o � uma vogal
    }
}

int main() {
    char caracter;

    // Solicita ao usu�rio que insira um caractere
    printf("Digite um caractere: ");
    scanf(" %c", &caracter);

    // Verifica se o caractere � uma vogal chamando a fun��o ehVogal()
    if (ehVogal(caracter)) {
        printf("O caractere '%c' eh uma vogal.\n", caracter);
    } else {
        printf("O caractere '%c' nao eh uma vogal.\n", caracter);
    }

    return 0;
}
