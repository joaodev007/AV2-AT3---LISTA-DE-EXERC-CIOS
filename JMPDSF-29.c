#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    printf("\n***************************************************************");
    printf("\n* Aluno: Joao Marcelo Pereira Da Silva Filto - RA 0028512");
    printf("\n* Programa JMPDSF-29 - Numeros pares de 0 a 50");
    printf("\n***************************************************************\n\n");

    int i;
    for (i = 0; i <= 50; i += 2) {
        printf("%d\n", i);
    }
    return 0;
}