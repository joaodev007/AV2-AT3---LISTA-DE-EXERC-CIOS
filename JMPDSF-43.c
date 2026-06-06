#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    printf("\n***************************************************************");
    printf("\n* Aluno: Joao Marcelo Pereira Da Silva Filto - RA 0028512");
    printf("\n* Programa JMPDSF-43 - Soma dos pares entre 1 e 100");
    printf("\n***************************************************************\n\n");

    int i = 1, soma = 0;

    while (i <= 100) {
        if (i % 2 == 0) {
            soma += i;
        }
        i++;
    }

    printf("Soma dos pares: %d\n", soma);
    return 0;
}