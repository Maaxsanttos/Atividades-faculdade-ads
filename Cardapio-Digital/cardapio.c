#include <stdio.h>

int main(void)
{
    // Variaveis
    int opcao;
    double total = 0.0;
    int item;
    int quantidade = 0;

    // Menu
    printf("Seja bem-vindo ao nosso Cardápio Online! \n");
    printf("\nAqui você pode consultar os pratos e escolher seu pedido.\n");
    printf("============================================\n");
    printf("Escolha uma das opções abaixo\n");
    do
    {
        printf("1 - Ver cardápio\n");
        printf("2 - Fazer pedido\n");
        printf("0 - Sair\n");
        scanf("%d", &opcao);
        switch (opcao)
        {
        case 0:
            break;

        default:
            printf("Opção inválida. Escolha 1, 2 ou 0.\n");
            break;

        case 1: // Ver cardápio 
            printf("=== Cardápio ===\n");
            printf("1 - Pizza - R$ 35.00\n");
            printf("2 - Esfihas - R$ 3.50\n");
            printf("3 - Esfiha Doce - R$ 5.00\n");
            printf("\nPressione Enter para voltar ao menu...");
            getchar(); // Consumir o Enter deixado pelo scanf
            getchar(); // Esperar o usuário pressionar Enter
            break;

        case 2: // Fazer pedido
            do
            {
                printf("=== Faça seu Pedido ===\n");
                printf("\n================================\n");
                printf("\n1 - Pizza - R$ 35.00\n");
                printf("2 - Esfihas - R$ 3.50\n");
                printf("3 - Esfiha Doce - R$ 5.00\n");
                printf("0 - Finalizar pedido\n");
                printf("\n=================================\n");
                printf("\nEscolha um item para adicionar ao pedido: ");
                scanf("%d", &item);
                switch (item)
                {
                    case 1: // Adiciona Pizza ao pedido
                    total += 35.00;
                    quantidade++;
                    printf("Pizza adicionada ao pedido.\n");
                    printf("Pedidos adicionados: %d\n", quantidade);
                    break;
                case 2:
                    total += 3.50;
                    quantidade++;
                    printf("Esfihas adicionadas ao pedido.\n");
                    printf("Pedidos adicionados: %d\n", quantidade);
                    break;
                case 3:
                    total += 5.00;
                    quantidade++;
                    printf("Esfiha Doce adicionada ao pedido.\n");
                    printf("Pedidos adicionados: %d\n", quantidade);
                    break;
                case 0:
                    opcao = 0; // Finaliza o pedido
                    break;
                default:
                    printf("Item inválido.\n");
                }
            } while (item != 0);
            break;
        }
    } while (opcao != 0);
    printf("\nTotal do pedido: R$ %.2f\n", total);
    printf("Obrigado por utilizar nosso Cardápio Online! Até a próxima!\n");
    return 0;
}