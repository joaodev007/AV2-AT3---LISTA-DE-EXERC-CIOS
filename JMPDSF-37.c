#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    printf("\n***************************************************************");
    printf("\n* Aluno: Joao Marcelo Pereira Da Silva Filto - RA 0028512");
    printf("\n* Programa JMPDSF-37 - Soma de numeros ate digitar zero");
    printf("\n***************************************************************\n\n");

    float numero, soma = 0;
    printf("Digite um numero (0 para parar): ");
    scanf("%f", &numero);

    while (numero != 0) {
        soma += numero;
        printf("Digite um numero (0 para parar): ");
        scanf("%f", &numero);
    }

    printf("Soma total: %.2f\n", soma);
    return 0;
}