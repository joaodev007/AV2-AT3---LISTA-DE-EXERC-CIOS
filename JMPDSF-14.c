#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    printf("\n***************************************************************");
    printf("\n* Aluno: Joao Marcelo Pereira Da Silva Filto - RA 0028512");
    printf("\n* Programa JMPDSF-14 - Tipo de Triangulo");
    printf("\n***************************************************************\n\n");

    float a, b, c;

    printf("Digite o primeiro lado: ");
    scanf("%f", &a);
    printf("Digite o segundo lado: ");
    scanf("%f", &b);
    printf("Digite o terceiro lado: ");
    scanf("%f", &c);

    if (a <= 0 || b <= 0 || c <= 0) {
        printf("Medidas invalidas.\n");
    } else if (a + b <= c || a + c <= b || b + c <= a) {
        printf("Nao forma um triangulo.\n");
    } else if (a == b && b == c) {
        printf("Triangulo equilatero.\n");
    } else if (a == b || a == c || b == c) {
        printf("Triangulo isosceles.\n");
    } else {
        printf("Triangulo escaleno.\n");
    }

    return 0;
}