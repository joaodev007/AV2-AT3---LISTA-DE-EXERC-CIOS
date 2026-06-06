#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    printf("\n***************************************************************");
    printf("\n* Aluno: Joao Marcelo Pereira Da Silva Filto - RA 0028512");
    printf("\n* Programa JMPDSF-30 - Fatorial de um numero");
    printf("\n***************************************************************\n\n");

    int n, i;
    long long fatorial = 1;

    printf("Digite um numero: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Nao existe fatorial de numero negativo.\n");
    } else {
        for (i = 1; i <= n; i++) {
            fatorial *= i;
        }
        printf("Fatorial: %lld\n", fatorial);
    }
    return 0;
}