#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    printf("\n***************************************************************");
    printf("\n* Aluno: Joao Marcelo Pereira Da Silva Filto - RA 0028512");
    printf("\n* Programa JMPDSF-23 - Maior de dois numeros");
    printf("\n***************************************************************\n\n");

    float n1, n2;
    printf("Digite o primeiro numero: ");
    scanf("%f", &n1);
    printf("Digite o segundo numero: ");
    scanf("%f", &n2);

    if (n1 > n2) {
        printf("Maior numero: %.2f\n", n1);
    } else if (n2 > n1) {
        printf("Maior numero: %.2f\n", n2);
    } else {
        printf("Os numeros sao iguais.\n");
    }

    return 0;
}