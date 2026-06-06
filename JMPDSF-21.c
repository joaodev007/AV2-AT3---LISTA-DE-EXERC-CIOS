#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    printf("\n***************************************************************");
    printf("\n* Aluno: Joao Marcelo Pereira Da Silva Filto - RA 0028512");
    printf("\n* Programa JMPDSF-21 - Numero positivo ou negativo");
    printf("\n***************************************************************\n\n");

    float numero;
    printf("Digite um numero: ");
    scanf("%f", &numero);

    if (numero > 0) {
        printf("Numero positivo.\n");
    } else if (numero < 0) {
        printf("Numero negativo.\n");
    } else {
        printf("Numero zero.\n");
    }

    return 0;
}