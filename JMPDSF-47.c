#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    printf("\n***************************************************************");
    printf("\n* Aluno: Joao Marcelo Pereira Da Silva Filto - RA 0028512");
    printf("\n* Programa JMPDSF-47 - Tabuada de um numero com do while");
    printf("\n***************************************************************\n\n");

    int n, i = 1;
    printf("Digite um numero: ");
    scanf("%d", &n);

    do {
        printf("%d x %d = %d\n", n, i, n * i);
        i++;
    } while (i <= 10);

    return 0;
}