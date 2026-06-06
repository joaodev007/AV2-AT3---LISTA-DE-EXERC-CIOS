#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    printf("\n***************************************************************");
    printf("\n* Aluno: Joao Marcelo Pereira Da Silva Filto - RA 0028512");
    printf("\n* Programa JMPDSF-57 - A Central do Brinquedo Eletronico");
    printf("\n***************************************************************\n\n");

    char cor[30];

    printf("Digite a cor: ");
    scanf("%29s", cor);

    if (strcmp(cor, "Verde") == 0 || strcmp(cor, "verde") == 0) {
        printf("O urso diz: Vamos brincar la fora!\n");
    } else if (strcmp(cor, "Amarelo") == 0 || strcmp(cor, "amarelo") == 0) {
        printf("O urso diz: Estou ficando com soninho...\n");
    } else if (strcmp(cor, "Vermelho") == 0 || strcmp(cor, "vermelho") == 0) {
        printf("O urso diz: Estou com fome, hora do lanche!\n");
    } else {
        printf("Cor desconhecida.\n");
    }

    return 0;
}