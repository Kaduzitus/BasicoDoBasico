#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Função para contar a quantidade de vogais em uma string
int contarVogais(const char *str) {
    int vogais = 0;
    // Percorre cada caractere da string
    int i;
    for (i = 0; str[i] != '\0'; i++) {
        // Converte o caractere para minúsculo antes de verificar se é uma vogal
        char ch = tolower(str[i]);
        // Verifica se o caractere é uma vogal
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            vogais++;
        }
    }
    return vogais;
}

int main() {
    char string[100];

    // Solicita ao usuário que insira uma string
    printf("Digite uma string: ");
    fgets(string, sizeof(string), stdin);

    // Remove o caractere de nova linha do final da string (se houver)
    if (string[strlen(string) - 1] == '\n') {
        string[strlen(string) - 1] = '\0';
    }

    // Chama a função contarVogais() para contar a quantidade de vogais na string
    int quantidadeVogais = contarVogais(string);

    // Imprime a quantidade de vogais na string
    printf("A quantidade de vogais na string eh: %d\n", quantidadeVogais);

    return 0;
}
