char mnome[20];
char nnome[20];
char nome [10][20];
int idade[10], maior, menor,soma,impar,achou;
impar=0;
soma=0;
maior =0;
menor = 90;
int i,op;
Insert()
{
    for(i=1; i<=5; i++)
    {
        printf("\n Informe o nome da Pessoa %d",i);
        fgets(nome[i],20,stdin);
        fflush(stdin);

        printf("\n Informe a Idade da Pessoa");
        scanf("%d",&idade[i]);
        fflush(stdin);
    }

}

Pesquisa()
{

    char pesq[20];
    if(i==0)
    {
        printf("\n Vetor Vazio... tente mas tarde");
        printf("\n\n");
        system("pause");
    }else {

    printf("\n Informe o nome a ser pesquisado");
    scanf("%s",pesq);
    fflush(stdin);
    achou =0;

    for(i=1;i<=5;i++)
    {
        printf("\n passei aqui");
        printf("\n Nome pesq %s Nome %s",pesq,nome[i]);
        system("pause");
        if(pesq == nome[i])
        {
            printf("\n Nome da Pessoa %s esta localizada na posição %d",nome[i],i);
            system("pause");
            achou =1;
        }
        printf("\n Passei por aqui");
    }

    if(achou ==0)
    {
        printf("\n Registro não consta na Lista de Dados");
        system("pause");
    }
    }
}

Exibir()
{
    for(i=1;i<=5;i++)
    {
        printf("\n Nome da Pessoa %s Tem a idade de %d",nome[i],idade[i]);
    }
    system("pause");
}

Processa()
{
    for(i=1; i<=5; i++)
    {

        if (idade[i] %2 ==0)
        {
            soma+=idade[i];
        }
        else
        {
            impar++;
        }

        if( idade[i] > maior)
        {
            maior=idade[i];
            strcpy(mnome,nome[i]);
        }
        if (idade[i]< menor)
        {
            menor=idade[i];
            strcpy(nnome,nome[i]);
        }

    }

    printf("\n O maior idade encontrada é %s possui a idade %d",mnome,maior);
    printf("\n A menor idade encontrada é %s possui a idade %d",nnome,menor);
    printf("\n A somatoria das Pares é de %d", soma);
    printf("\n A quantidade de idades impares %d", impar);
    printf("\n\n");
    system("pause");

}
