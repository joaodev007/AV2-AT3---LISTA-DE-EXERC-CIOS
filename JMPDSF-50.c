#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    printf("\n***************************************************************");
    printf("\n* Aluno: Joao Marcelo Pereira Da Silva Filto - RA 0028512");
    printf("\n* Programa JMPDSF-50 - Numero positivo obrigatorio");
    printf("\n***************************************************************\n\n");

    float numero;

    do {
        printf("Digite um numero positivo: ");
        scanf("%f", &numero);
    } while (numero <= 0);

    printf("Numero aceito: %.2f\n", numero);
    return 0;
}