#include <stdio.h>
#include <>
int main() {
    float nota1, nota2, nota3, media;

    // Solicita ao usu�rio que insira as tr�s notas
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    // Calcula a m�dia das tr�s notas
    media = (nota1 + nota2 + nota3) / 3.0;

    // Verifica se o aluno foi aprovado, reprovado ou ficou em recupera��o
    if (media >= 7.0) {
        printf("O aluno foi aprovado com media %.2f.\n", media);
    } else if (media >= 5.0 && media < 7.0) {
        printf("O aluno ficou em recuperacao com media %.2f.\n", media);
    } else {
        printf("O aluno foi reprovado com media %.2f.\n", media);
    }

    return 0;
}
