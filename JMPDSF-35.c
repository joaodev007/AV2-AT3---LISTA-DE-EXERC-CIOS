#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    printf("\n***************************************************************");
    printf("\n* Aluno: Joao Marcelo Pereira Da Silva Filto - RA 0028512");
    printf("\n* Programa JMPDSF-35 - Numeros de Fibonacci");
    printf("\n***************************************************************\n\n");

    int n, i;
    long long a = 0, b = 1, proximo;

    printf("Digite a quantidade de termos: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("%lld ", a);
        proximo = a + b;
        a = b;
        b = proximo;
    }
    printf("\n");

    return 0;
}