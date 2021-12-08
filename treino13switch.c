int main()
{
    int menu, decisao1, decisao2, decisao3;

    printf("\n\n\n*** Bem vindo ao programa ***\n");

    printf("\nPara Iniciar digite 1 ");
    printf("\nPara encerrar o programa digite 0 \n");
    scanf("%d", &decisao1);

    if (decisao1 == 1)
    {
        printf("\nVamos nessa\n");
    }
    else
    {
        printf("A opcao escolhida foi '0' o programa encerrara em...\n");
        printf("3...\n\n\n\n");
        printf("2...\n\n\n\n");
        printf("1...\n\n\n\n");
        return 0;
    }

    if (decisao1 == 1)
    {
        printf("Selecione a Opcao Desejada\n");
        printf("[1] - Mostar categorias de produtos");
        printf("\n[2] - Mostrar todos os produtos");
        printf("\n[3] - Mostrar Novidades");
        printf("\n[4] - Mostrar itens a serem lancados");
        printf("\n[5] - Reclamar\n");
        scanf("%d", &decisao2);
        while (decisao2 != 1 && decisao2 != 2 && decisao2 != 3 && decisao2 != 4 && decisao2 != 5)
        {
            printf("\n*****OPCAO INAVALIDA*****\n");
            printf("\nInsira uma opcao correta: ");
            scanf("%d", decisao2);
        }
    }
    switch (decisao2)
    {
    case 1:
        system("cls");
        printf("\nVoce escolheu 'MOSTRAR CATEGORIAS DE TODOS OS PRODUTOS'\n");
        printf("[1] - Eletrodomesticos: \n");
        printf("\n[2] - Eletroeletronicos: \n");
        printf("\n[3] - Casa,Mesa e Banho: \n");
        printf("\n[4] - Moda e roupas: \n");
        printf("\n[5] - Acessorios: \n");
        printf("\n[6] - Voltar ao menu: \n");
        printf("Selecione a categoria do produtos no qual voce deseja: ");
        scanf("%d", &decisao3);
        while (decisao3 != 1 && decisao3 != 2 && decisao3 != 3 && decisao3 != 4 && decisao3 != 5 && decisao3 != 6)
        {
            printf("\n*****OPCAO INAVALIDA*****\n");
            printf("\nInsira uma opcao correta: ");
            scanf("%d", &decisao3);
        }

        break;

    case 2:
        printf("Voce escolheu 'MOSTRAR TODOS OS PRODUTOS'");
        printf("OPCAO EM DESENVOLVIMENTO");
        break;

    case 3:
        printf("Voce escolheu 'MOSTRAR NOVIDADES'");
        printf("OPCAO EM DESENVOLVIMENTO");
        break;

    case 4:
        printf("Voce escolheu MOSTRAR ITENS A SEREM LANCADOS'");
        printf("OPCAO EM DESENVOLVIMENTO");
        break;

    case 5:
        printf("Voce escolheu 'RECLAMAR'");
        printf("OPCAO EM DESENVOLVIMENTO");
        break;
    }

    switch (decisao3)
    {
    case 1:
        system("cls");
        printf("\n*****VOCE ESCOLHEU ELETRODOMESTICOS*****\n");
        printf("\nAbaixo mostraremos nossos produtos desta categoria\n");
        printf("\nAirfryer + Panela de pressão : $1.481,89 a vista\n");
        printf("\nGeladeira Evolution RT38: $6.047,10 a prazo\n");
        break;
    case 2:
        break;
    case 3:
        break;
    case 4:
        break;
    case 5:
        break;
    case 6:
        return main();
        break;
    }
}