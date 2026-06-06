#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    printf("\n***************************************************************");
    printf("\n* Aluno: Joao Marcelo Pereira Da Silva Filto - RA 0028512");
    printf("\n* Programa JMPDSF-34 - Verificar se um numero e primo");
    printf("\n***************************************************************\n\n");

    int n, i, divisores = 0;
    printf("Digite um numero: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        if (n % i == 0) {
            divisores++;
        }
    }

    if (divisores == 2) {
        printf("Numero primo.\n");
    } else {
        printf("Nao e primo.\n");
    }

    return 0;
}