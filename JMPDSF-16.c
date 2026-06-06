#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    printf("\n***************************************************************");
    printf("\n* Aluno: Joao Marcelo Pereira Da Silva Filto - RA 0028512");
    printf("\n* Programa JMPDSF-16 - Multiplo de 3 e/ou 5");
    printf("\n***************************************************************\n\n");

    int pedido;
    printf("Digite o numero do pedido: ");
    scanf("%d", &pedido);

    if (pedido % 3 == 0 && pedido % 5 == 0) {
        printf("Ganhou refrigerante e sobremesa.\n");
    } else if (pedido % 3 == 0) {
        printf("Ganhou refrigerante.\n");
    } else if (pedido % 5 == 0) {
        printf("Ganhou sobremesa.\n");
    } else {
        printf("Nao ganhou brinde.\n");
    }

    return 0;
}