#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    printf("\n***************************************************************");
    printf("\n* Aluno: Joao Marcelo Pereira Da Silva Filto - RA 0028512");
    printf("\n* Programa JMPDSF-52 - Soma ate o numero ser multiplo de 10");
    printf("\n***************************************************************\n\n");

    int numero, soma = 0;

    do {
        printf("Digite um numero: ");
        scanf("%d", &numero);
        soma += numero;
    } while (numero % 10 != 0);

    printf("Soma total: %d\n", soma);
    return 0;
}