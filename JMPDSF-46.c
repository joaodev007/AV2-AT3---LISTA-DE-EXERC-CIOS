#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    printf("\n***************************************************************");
    printf("\n* Aluno: Joao Marcelo Pereira Da Silva Filto - RA 0028512");
    printf("\n* Programa JMPDSF-46 - Contar de 1 a 10 com do while");
    printf("\n***************************************************************\n\n");

    int i = 1;
    do {
        printf("%d\n", i);
        i++;
    } while (i <= 10);
    return 0;
}