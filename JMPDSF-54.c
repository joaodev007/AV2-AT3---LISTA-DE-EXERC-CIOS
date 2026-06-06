#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    printf("\n***************************************************************");
    printf("\n* Aluno: Joao Marcelo Pereira Da Silva Filto - RA 0028512");
    printf("\n* Programa JMPDSF-54 - Validar numero entre 1 e 5");
    printf("\n***************************************************************\n\n");

    int nivel;

    do {
        printf("Digite um nivel entre 1 e 5: ");
        scanf("%d", &nivel);
    } while (nivel < 1 || nivel > 5);

    printf("Nivel aceito: %d\n", nivel);
    return 0;
}