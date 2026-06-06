#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    printf("\n***************************************************************");
    printf("\n* Aluno: Joao Marcelo Pereira Da Silva Filto - RA 0028512");
    printf("\n* Programa JMPDSF-26 - Contar de 1 a 10");
    printf("\n***************************************************************\n\n");

    int i;
    for (i = 1; i <= 10; i++) {
        printf("%d\n", i);
    }
    return 0;
}