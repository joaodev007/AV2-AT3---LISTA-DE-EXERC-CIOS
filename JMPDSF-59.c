#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    printf("\n***************************************************************");
    printf("\n* Aluno: Joao Marcelo Pereira Da Silva Filto - RA 0028512");
    printf("\n* Programa JMPDSF-59 - O Assistente de Direcao");
    printf("\n***************************************************************\n\n");

    char letra;

    printf("Digite a letra de direcao: ");
    scanf(" %c", &letra);

    switch (letra) {
        case 'N':
            printf("Seguir para o Norte.\n");
            break;
        case 'S':
            printf("Seguir para o Sul.\n");
            break;
        case 'L':
            printf("Virar a Leste (Direita).\n");
            break;
        case 'O':
            printf("Virar a Oeste (Esquerda).\n");
            break;
        default:
            printf("Comando invalido! Pare o robo.\n");
    }

    return 0;
}