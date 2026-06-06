#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    printf("\n***************************************************************");
    printf("\n* Aluno: Joao Marcelo Pereira Da Silva Filto - RA 0028512");
    printf("\n* Programa JMPDSF-49 - Pedir senha ate acertar");
    printf("\n***************************************************************\n\n");

    int senha;

    do {
        printf("Digite a senha: ");
        scanf("%d", &senha);

        if (senha != 1111) {
            printf("Senha incorreta.\n");
        }
    } while (senha != 1111);

    printf("Acesso liberado!\n");
    return 0;
}