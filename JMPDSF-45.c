#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    printf("\n***************************************************************");
    printf("\n* Aluno: Joao Marcelo Pereira Da Silva Filto - RA 0028512");
    printf("\n* Programa JMPDSF-45 - Menu ate escolher sair");
    printf("\n***************************************************************\n\n");

    int opcao = 0;

    while (opcao != 3) {
        printf("\n1 - Consultar saldo");
        printf("\n2 - Fazer deposito");
        printf("\n3 - Sair");
        printf("\nEscolha uma opcao: ");
        scanf("%d", &opcao);

        if (opcao == 1) {
            printf("Saldo consultado.\n");
        } else if (opcao == 2) {
            printf("Deposito realizado.\n");
        } else if (opcao == 3) {
            printf("Saindo...\n");
        } else {
            printf("Opcao invalida.\n");
        }
    }

    return 0;
}