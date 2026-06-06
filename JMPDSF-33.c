#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    printf("\n***************************************************************");
    printf("\n* Aluno: Joao Marcelo Pereira Da Silva Filto - RA 0028512");
    printf("\n* Programa JMPDSF-33 - Multiplos de 3 entre 1 e 30");
    printf("\n***************************************************************\n\n");

    int i;
    for (i = 1; i <= 30; i++) {
        if (i % 3 == 0) {
            printf("%d\n", i);
        }
    }
    return 0;
}