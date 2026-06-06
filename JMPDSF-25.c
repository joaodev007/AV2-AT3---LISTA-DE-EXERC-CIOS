#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    printf("\n***************************************************************");
    printf("\n* Aluno: Joao Marcelo Pereira Da Silva Filto - RA 0028512");
    printf("\n* Programa JMPDSF-25 - Notas e aprovacao");
    printf("\n***************************************************************\n\n");

    float media;
    printf("Digite a media final: ");
    scanf("%f", &media);

    if (media >= 7) {
        printf("Aprovado.\n");
    } else if (media >= 5) {
        printf("Recuperacao.\n");
    } else {
        printf("Reprovado.\n");
    }

    return 0;
}