#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    printf("\n***************************************************************");
    printf("\n* Aluno: Joao Marcelo Pereira Da Silva Filto - RA 0028512");
    printf("\n* Programa JMPDSF-15 - Quantas caixas cabem dentro do caminhao");
    printf("\n***************************************************************\n\n");

    float altC, largC, compC, altX, largX, compX;
    int qtdAlt, qtdLarg, qtdComp, total;

    printf("Altura do caminhao: ");
    scanf("%f", &altC);
    printf("Largura do caminhao: ");
    scanf("%f", &largC);
    printf("Comprimento do caminhao: ");
    scanf("%f", &compC);

    printf("Altura da caixa: ");
    scanf("%f", &altX);
    printf("Largura da caixa: ");
    scanf("%f", &largX);
    printf("Comprimento da caixa: ");
    scanf("%f", &compX);

    if (altC <= 0 || largC <= 0 || compC <= 0 || altX <= 0 || largX <= 0 || compX <= 0) {
        printf("Medidas invalidas.\n");
    } else {
        qtdAlt = (int)(altC / altX);
        qtdLarg = (int)(largC / largX);
        qtdComp = (int)(compC / compX);
        total = qtdAlt * qtdLarg * qtdComp;
        printf("Cabem %d caixas no caminhao.\n", total);
    }

    return 0;
}