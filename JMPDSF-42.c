#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    printf("\n***************************************************************");
    printf("\n* Aluno: Joao Marcelo Pereira Da Silva Filto - RA 0028512");
    printf("\n* Programa JMPDSF-42 - Quantidade de numeros impares digitados");
    printf("\n***************************************************************\n\n");

    int i = 1, numero, impares = 0;

    while (i <= 10) {
        printf("Digite o %d numero: ", i);
        scanf("%d", &numero);

        if (numero % 2 != 0) {
            impares++;
        }
        i++;
    }

    printf("Quantidade de impares: %d\n", impares);
    return 0;
}