#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    printf("\n***************************************************************");
    printf("\n* Aluno: Joao Marcelo Pereira Da Silva Filto - RA 0028512");
    printf("\n* Programa JMPDSF-41 - Numero primo com while");
    printf("\n***************************************************************\n\n");

    int n, i = 1, divisores = 0;

    printf("Digite um numero: ");
    scanf("%d", &n);

    while (i <= n) {
        if (n % i == 0) {
            divisores++;
        }
        i++;
    }

    if (divisores == 2) {
        printf("Numero primo.\n");
    } else {
        printf("Nao e primo.\n");
    }

    return 0;
}