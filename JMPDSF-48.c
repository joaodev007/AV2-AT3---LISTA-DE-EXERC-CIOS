#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    printf("\n***************************************************************");
    printf("\n* Aluno: Joao Marcelo Pereira Da Silva Filto - RA 0028512");
    printf("\n* Programa JMPDSF-48 - Menu com opcao de sair");
    printf("\n***************************************************************\n\n");

    int opcao;

    do {
        printf("\n1 - Mensagem");
        printf("\n2 - Sair");
        printf("\nEscolha uma opcao: ");
        scanf("%d", &opcao);

        if (opcao == 1) {
            printf("Voce escolheu a mensagem!\n");
        } else if (opcao != 2) {
            printf("Opcao invalida.\n");
        }
    } while (opcao != 2);

    printf("Programa encerrado.\n");
    return 0;
}