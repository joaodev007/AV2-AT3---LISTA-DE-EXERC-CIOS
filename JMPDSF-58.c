#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    printf("\n***************************************************************");
    printf("\n* Aluno: Joao Marcelo Pereira Da Silva Filto - RA 0028512");
    printf("\n* Programa JMPDSF-58 - A Calculadora de Bolso de 4 Operacoes");
    printf("\n***************************************************************\n\n");

    float n1, n2, resultado;
    char operacao;

    printf("Digite o primeiro numero: ");
    scanf("%f", &n1);
    printf("Digite a operacao (+, -, *, /): ");
    scanf(" %c", &operacao);
    printf("Digite o segundo numero: ");
    scanf("%f", &n2);

    switch (operacao) {
        case '+':
            resultado = n1 + n2;
            printf("Resultado: %.2f\n", resultado);
            break;
        case '-':
            resultado = n1 - n2;
            printf("Resultado: %.2f\n", resultado);
            break;
        case '*':
            resultado = n1 * n2;
            printf("Resultado: %.2f\n", resultado);
            break;
        case '/':
            if (n2 != 0) {
                resultado = n1 / n2;
                printf("Resultado: %.2f\n", resultado);
            } else {
                printf("Nao e possivel dividir por zero.\n");
            }
            break;
        default:
            printf("Operacao matematica nao reconhecida.\n");
    }

    return 0;
}