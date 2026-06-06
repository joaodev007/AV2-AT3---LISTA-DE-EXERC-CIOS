#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    printf("\n***************************************************************");
    printf("\n* Aluno: Joao Marcelo Pereira Da Silva Filto - RA 0028512");
    printf("\n* Programa JMPDSF-38 - Senha correta");
    printf("\n***************************************************************\n\n");

    int senha;
    printf("Digite a senha: ");
    scanf("%d", &senha);

    while (senha != 1234) {
        printf("Senha incorreta. Digite novamente: ");
        scanf("%d", &senha);
    }

    printf("Acesso liberado.\n");
    return 0;
}