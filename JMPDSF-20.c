#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    printf("\n***************************************************************");
    printf("\n* Aluno: Joao Marcelo Pereira Da Silva Filto - RA 0028512");
    printf("\n* Programa JMPDSF-20 - Ano bissexto");
    printf("\n***************************************************************\n\n");

    int ano;
    printf("Digite o ano: ");
    scanf("%d", &ano);

    if ((ano % 400 == 0) || (ano % 4 == 0 && ano % 100 != 0)) {
        printf("Ano bissexto.\n");
    } else {
        printf("Nao e ano bissexto.\n");
    }

    return 0;
}