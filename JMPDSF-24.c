#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    printf("\n***************************************************************");
    printf("\n* Aluno: Joao Marcelo Pereira Da Silva Filto - RA 0028512");
    printf("\n* Programa JMPDSF-24 - Pode votar");
    printf("\n***************************************************************\n\n");

    int idade;
    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if (idade >= 16) {
        printf("Pode votar.\n");
    } else {
        printf("Nao pode votar.\n");
    }

    return 0;
}