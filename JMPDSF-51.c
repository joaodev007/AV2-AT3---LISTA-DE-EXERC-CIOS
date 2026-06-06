#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    printf("\n***************************************************************");
    printf("\n* Aluno: Joao Marcelo Pereira Da Silva Filto - RA 0028512");
    printf("\n* Programa JMPDSF-51 - Contagem regressiva de 10 ate 1");
    printf("\n***************************************************************\n\n");

    int i = 10;
    do {
        printf("%d\n", i);
        i--;
    } while (i >= 1);
    return 0;
}