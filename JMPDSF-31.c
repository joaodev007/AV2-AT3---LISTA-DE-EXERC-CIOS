#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    printf("\n***************************************************************");
    printf("\n* Aluno: Joao Marcelo Pereira Da Silva Filto - RA 0028512");
    printf("\n* Programa JMPDSF-31 - Contagem regressiva");
    printf("\n***************************************************************\n\n");

    int i;
    for (i = 10; i >= 1; i--) {
        printf("%d\n", i);
    }
    return 0;
}