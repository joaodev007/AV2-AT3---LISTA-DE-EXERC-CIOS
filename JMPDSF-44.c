#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    printf("\n***************************************************************");
    printf("\n* Aluno: Joao Marcelo Pereira Da Silva Filto - RA 0028512");
    printf("\n* Programa JMPDSF-44 - Contar digitos de um numero");
    printf("\n***************************************************************\n\n");

    int numero, contador = 0;

    printf("Digite um numero positivo: ");
    scanf("%d", &numero);

    if (numero == 0) {
        contador = 1;
    } else {
        while (numero > 0) {
            numero = numero / 10;
            contador++;
        }
    }

    printf("Quantidade de digitos: %d\n", contador);
    return 0;
}