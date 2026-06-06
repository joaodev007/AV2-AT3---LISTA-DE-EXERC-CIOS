#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    printf("\n***************************************************************");
    printf("\n* Aluno: Joao Marcelo Pereira Da Silva Filto - RA 0028512");
    printf("\n* Programa JMPDSF-39 - Verificar se um numero e positivo");
    printf("\n***************************************************************\n\n");

    float numero;
    printf("Digite um numero positivo: ");
    scanf("%f", &numero);

    while (numero <= 0) {
        printf("Valor invalido. Digite um numero positivo: ");
        scanf("%f", &numero);
    }

    printf("Numero positivo aceito: %.2f\n", numero);
    return 0;
}