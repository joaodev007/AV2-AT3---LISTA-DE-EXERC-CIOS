#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    printf("\n***************************************************************");
    printf("\n* Aluno: Joao Marcelo Pereira Da Silva Filto - RA 0028512");
    printf("\n* Programa JMPDSF-55 - Ler numeros e mostrar o maior");
    printf("\n***************************************************************\n\n");

    float numero, maior = 0;
    int primeiro = 1;

    do {
        printf("Digite um numero positivo (negativo para parar): ");
        scanf("%f", &numero);

        if (numero >= 0) {
            if (primeiro == 1 || numero > maior) {
                maior = numero;
                primeiro = 0;
            }
        }
    } while (numero >= 0);

    if (primeiro == 1) {
        printf("Nenhum numero positivo foi informado.\n");
    } else {
        printf("Maior numero positivo: %.2f\n", maior);
    }

    return 0;
}