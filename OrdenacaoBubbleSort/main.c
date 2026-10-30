#include <stdio.h>

int main()
{
    float precos[10] = {19.99, 5.49, 12.75, 8.99, 15.00, 3.50, 7.25, 10.00, 6.75, 9.99};
    float auxiliar;

    printf("==== Sistema de Ordenacao de Precos ====\n");
    printf("Bem-vindo ao sistema de ordenacao de precos!\n");

    printf("\n==== Precos Originais ====\n");
    for (int i = 0; i < 10; i++)
    {
        printf("Preco %d: %.2f\n", i + 1, precos[i]);
    }

    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9 - i; j++)
        {
            if (precos[j] > precos[j + 1])
            {
                auxiliar = precos[j];
                precos[j] = precos[j + 1];
                precos[j + 1] = auxiliar;
            }
        }
    }

    printf("\n==== Precos em Ordem Crescente ====\n");
    for (int i = 0; i < 10; i++)
    {
        printf("Preco %d: %.2f\n", i + 1, precos[i]);
    }

    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9 - i; j++)
        {

            if (precos[j] < precos[j + 1])
            {
                auxiliar = precos[j];
                precos[j] = precos[j + 1];
                precos[j + 1] = auxiliar;
            }
        }
    }

    printf("\n==== Precos em Ordem Decrescente ====\n");
    for (int i = 0; i < 10; i++)
    {
        printf("Preco %d: %.2f\n", i + 1, precos[i]);
    }

    return 0;
}