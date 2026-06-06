#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    printf("\n***************************************************************");
    printf("\n* Aluno: Joao Marcelo Pereira Da Silva Filto - RA 0028512");
    printf("\n* Programa JMPDSF-53 - Confirmar saida com s");
    printf("\n***************************************************************\n\n");

    char sair;

    do {
        printf("\nMenu de cadastro");
        printf("\n1 - Cadastrar");
        printf("\n2 - Consultar");
        printf("\nDeseja sair? Digite s para sair ou outra letra para continuar: ");
        scanf(" %c", &sair);
    } while (sair != 's' && sair != 'S');

    printf("Programa encerrado.\n");
    return 0;
}