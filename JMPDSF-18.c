#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    printf("\n***************************************************************");
    printf("\n* Aluno: Joao Marcelo Pereira Da Silva Filto - RA 0028512");
    printf("\n* Programa JMPDSF-18 - Login simples");
    printf("\n***************************************************************\n\n");

    char usuario[30], senha[30];

    printf("Usuario: ");
    scanf("%29s", usuario);
    printf("Senha: ");
    scanf("%29s", senha);

    if (strcmp(usuario, "aluno") == 0 && strcmp(senha, "1234") == 0) {
        printf("Acesso permitido.\n");
    } else {
        printf("Acesso negado.\n");
    }

    return 0;
}