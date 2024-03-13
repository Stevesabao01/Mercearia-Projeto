#include <stdio.h>

int escolha;
do{
    printf("=== MENU PRINCIPAL ===\n");
    printf("1. Venda de Material de Limpeza\n");
    printf("2. Venda de Alimentos\n");
    printf("3. Padaria\n");
    printf("4. Pagamento\n");
    printf("5. Sair\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &escolha);

    switch (escolha){
        case 1:
        printf("Opcao 1 selecionada: Venda de Material de Limpeza\n");
        int submenuLimpeza;
        do{
            printf("=== SUBMENU LIMPEZA ===\n");
            printf("1. Sabao em Pó\n");
            printf("2. Detergente Líquido\n");
            printf("3. Limpa Lixo\n");
            printf("4. Voltar ao menu principal\n");
            printf("Escolha uma opcao: ");
            scanf("%d", &submenuLimpeza);

            switch (submenuLimpeza){
                case 1:
                printf("Opcao 1.1 selecionada: Sabao em Pó\n");
                break;
                case 2:
                printf("Opcao 1.2 selecionada: Detergente Líquido\n");
                break;
                case 3:
                printf("Opcao 1.3 selecionada: Limpa Lixo\n");
                break;
                case 4:
                printf("Voltando ao menu principal...\n");
                break;
                default:
                printf("Opcao invalida! Tente novamente.\n");
            }

            printf("Pressione Enter para continuar...");
            getchar();
            getchar();

        } while (submenuLimpeza != 4);
        break;
        case 2:
        printf("Opcao 2 selecionada: Venda de Alimento\n");
        // Funcao para submenu
        break;
        case 3:
        printf("Opcao 3 selecionada: Padaria\n");
        // Funcao para submenu
        break;
        case 4:
        printf("Opcao 4 selecionada: Pagamento\n");
        // Funcao submenu
        break;
        case 5:
        printf("Saindo do programa. Adeus!\n");
        break;
     default:
        printf("Opcao invalida! Tente novamente.\n");
     }

     printf("Pressione Enter para continuar...");
     getchar();
     getchar();

} while (escolha != 5);

return 0;