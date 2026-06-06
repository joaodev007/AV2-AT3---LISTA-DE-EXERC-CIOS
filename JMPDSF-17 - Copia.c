#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    printf("\n***************************************************************");
    printf("\n* Aluno: Joao Marcelo Pereira Da Silva Filto - RA 0028512");
    printf("\n* Programa JMPDSF-17 - O Sensor do Parque Tematico");
    printf("\n***************************************************************\n\n");

    int altura;
    printf("Digite a altura em centimetros: ");
    scanf("%d", &altura);

    if (altura >= 140) {
        printf("Luz verde: liberado.\n");
    } else {
        printf("Luz vermelha: barrado.\n");
    }

    return 0;
}