#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
int main()
{
    char descri[10][40];

    int i, n, decisao1, valor[10], quant[10], itens, decisao2;

    

    printf("\n*** Seja bem-Vindo ***\n");

    printf("[1] - Cadastrar porduto: \n");
    printf("[2] - Comprar: \n");
    printf("[3] - Listar produtos\n");
    printf("\nEscolha a opcao desejada:  ");
    scanf(" %d", &decisao1);

    switch (decisao1)
    {
    case 1:
        system("cls");
        printf("Voce escolheu a opcao cadastrar produto\n");
        printf("informe a quantidade de itens que vao ser cadastrados: ");
        scanf(" %d", &itens);
        fflush(stdin);
        for (i = 0; i < itens; i++)
        {
            printf("\n Escreva a descricao do produto:\n ");
            //scanf("%s[^\n]s",&descri[2]);
            gets(descri[i]);
            fflush(stdin);
            printf("Pirntf informe o valor do produto: ");
            scanf("%d", &valor[i]);
            printf("Informe a quantidade destes itens: ");
            scanf("%d", &quant[i]);
            printf("\n O produto que voce cadastou foi %s no valor de $%d na quantidade de  %d itens", descri, valor[i], quant[i]);
            fflush(stdin);
        }
        break;

    }
    printf("os produtos cadastrados foram %s", descri);
    
}
