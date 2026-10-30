#include <stdio.h>

int main()
{

    int almocos[7];
    int total = 0;
    float media;
    int maior;
    int diaMaior;

    printf("==== CONTROLE DE ALMOCOS ====\n");
    printf("Bem-vindo ao sistema de controle de almocos!\n");

    printf("Digite a quantidade de almocos servidos:\n");

    for (int i = 0; i < 7; i++)
    {

        do
        {
            printf("Dia %d: ", i + 1);
            scanf("%d", &almocos[i]);

            if (almocos[i] < 0)
            {
                printf("Valor Invalido! Digite novamente.\n");
            }

        } while (almocos[i] < 0);
    }

    for (int i = 0; i < 7; i++)
    {
        total = total + almocos[i];
    }

    media = (float)total / 7;

    printf("\nTotal de almocos da semana: %d\n", total);
    printf("Media diaria de almocos: %.2f\n", media);

    printf("\n==== RESUMO SEMANAL ====\n");

    for (int i = 0; i < 7; i++)
    {
        printf("Dia %d: %d almocos\n", i + 1, almocos[i]);
    }

    maior = almocos[0];
    diaMaior = 1;

    for (int i = 1; i < 7; i++)
    {
        if (almocos[i] > maior)
        {
            maior = almocos[i];
            diaMaior = i + 1;
        }
    }

    printf("\nDia com mais almocos: Dia %d\n", diaMaior);
    printf("Quantidade: %d almocos\n", maior);

    return 0;
}
