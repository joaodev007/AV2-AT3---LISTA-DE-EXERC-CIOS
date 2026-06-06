#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    printf("\n***************************************************************");
    printf("\n* Aluno: Joao Marcelo Pereira Da Silva Filto - RA 0028512");
    printf("\n* Programa JMPDSF-28 - Soma dos 100 primeiros numeros naturais");
    printf("\n***************************************************************\n\n");

    int i, soma = 0;
    for (i = 1; i <= 100; i++) {
        soma += i;
    }
    printf("Soma: %d\n", soma);
    return 0;
}