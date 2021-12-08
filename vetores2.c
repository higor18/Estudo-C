int main()
{
    char produt[10], quant[10], valor[10],i;
    int acao1;

    printf("***** Seja Bem-Vindo *****\n");
        printf("'[1]' Cadastrar um Produto: \n");
        printf("'[2]' Exibir produtos em estoque: \n");
        printf("'[3]' Comprar Produto:\n");
        printf(" Escolha o que deseja fazer: ");
    for (i = 0; i < 1; i++)
    {
        scanf(" %d", &acao1);

        switch (acao1)
        {
        case 1:
            printf("voce escolheu cadastrar produto\n");
            printf("Insira a descricao do produto a ser cadastrado: ");
            scanf(" %s", &produt[i]);
            printf("Insira a quantidade de itens do produto cadastrado: ");
            scanf(" %d", &quant[i]);
            printf("Insira o valor do produto a ser cadastrado: ");
            scanf(" %d", &valor[i]);
            printf("O produto cadastrado foi %s %d %d",produt,quant[i],valor[i]);
            break;
        }
        
    }
    





}