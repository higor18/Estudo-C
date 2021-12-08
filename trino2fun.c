#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include "utils.h"

char nomeProd[5][50], client[5][20];
float valor[5];
int quant[5], n;

// Protótipos de funções
void cliente();
int Opcadastrar();
int senha();
int menu();
int estoque();
void exibirProdutosAcabando();

/*
 * Criar struct e typedef 
 * Padronizar nomes de função e variáveis (Verbos e camelCase)
 * Ler opções do menu com char
 * Ler opções com letras 
 * (https://www.cprogressivo.net/2013/11/Como-ler-arquivos-em-C-As-funcoes-fgetc-fscanf-fgets.html)
 * x00ff00
 * RGB
*/

int main()
{
    int var = 0, i;
    char valorRet[6][50];

    printf("---------------------------\n");
    printf("Seja Bem-Vindo ao programa!\n");
    printf("---------------------------\n");

    if (senha() == 0)
    {
        while (var == 0)
        {
            limpa();

            switch (menu())
            {
            case 1:
                Opcadastrar();
                limpa();
                break;
            case 2:
                estoque();
                break;
            case 3:
                cliente();
                break;
            case 4:
                exibirProdutosAcabando();
                break;
            case 5:
                return 0;
                break;
            }
        }
    }
}

void cliente()
{

    int i;

    for (i = 0; i < 1; i++)
    {
        printf("Nome do cliente ==> %s", client[i]);
    }
    printf("Pressione qualquer tecla para continuar...");
    getchar();
    return;
}

int Opcadastrar()
{
    setlocale(LC_ALL, "portuguese");
    limpa();
    int i, retorno, deciProd;

    do
    {
        printf("\n");
        printf("------------------------------------------------------\n");
        printf("Voce esolheu a opcao cadastrar produto\n");
        printf("------------------------------------------------------\n");

        printf("Deseja cadastrar um total de quantos produtos'Max 5'?: ");
        scanf("%d", &n);
        printf("\n------------------------------------------------------\n");
        fflush(stdin);
    } while (n != 1 && n != 2 && n != 3 && n != 4 && n != 5);

    for (i = 0; i < n; i++)
    {

        printf("\n\nDigite a descricao do produto de numero %d: ", i+1);
        fgets(nomeProd[i], 50, stdin);
        fflush(stdin);

        printf("\nDigite o valor do produto %d: R$", i);
        scanf(" %f", &valor[i]);
        fflush(stdin);

        printf("\nDigite a quantidade do produto %d: ", i);
        scanf(" %d", &quant[i]);
        fflush(stdin);
    }
    retorno = 1;
    return retorno;
}

int senha()
{

    setlocale(LC_ALL, "portuguese");
    char senhaCadastro[10], senhaConfirmacao[10];
    int retorno, i;

    for (i = 0; i < 1; i++)
    {
        printf("Digite o nome do cliente: ");
        fgets(client[i], 50, stdin);
        fflush(stdin);
    }
    printf("\nPara iniciar o programa cadastre uma senha: ");
    scanf(" %s", senhaCadastro);
    fflush(stdin);
    do
    {
        printf("\nReescreva sua senha:  ");
        scanf(" %s", senhaConfirmacao);
        fflush(stdin);

        if (strcmp(senhaCadastro, senhaConfirmacao) == 0)
        {
            printf("\n\nLOGADO!\n\n");
            retorno = 0;
            limpa();
            return retorno;
        }
        else
        {
            printf("\nSenha errada... Tente Novamente! ");
            retorno = 1;
        }
    } while (retorno = 1);
}

int menu()
{
    setlocale(LC_ALL, "portuguese"); //Aceita acentos
    printf("-----------------------------------------\n");
    printf("[1] - Cadastrar um novo produto: \n");
    printf("[2] - Listar produtos em estoque: \n");
    printf("[3] - Listar Clientes: \n");
    printf("[4] - Listar produtos que estao acabando: \n");
    printf("[5] - Encerrar o programa: \n");
    printf("-----------------------------------------\n");

    int t, i;
    int opMenu;
    do
    {
        printf("O que deseja fazer: ");
        scanf(" %d", &opMenu);
        fflush(stdin);

        if (opMenu != 1 && opMenu != 2 && opMenu != 3 && opMenu != 4 && opMenu != 5)
        {
            printf("\nVerifique se a opcao esta correta... Tente novamente\n");
        }

    } while (opMenu != 1 && opMenu != 2 && opMenu != 3 && opMenu != 4 && opMenu != 5);

    return opMenu;
}

int estoque()
{
    if (n == 0)
    {
        printf("Nenhum produto cadastrado no momento.Tente Novamente mais tarde\n");

        printf("\nPressione qualquer tecla para continuar...");
        getchar();
    }
    int i;

    for (i = 0; i < n; i++)
    {
        printf("\nO produto cadastrado e ==>%svalor de $%.2f na quantidade de %d itens, e o codigo dele e:%d \n",
               nomeProd[i], valor[i], quant[i], rand() % 200);
    }

    printf("Pessione qualquer tecla para continuar...");
    getchar();

    return estoque;
}

void exibirProdutosAcabando()
{

    int i;
    
     if (n == 0)
    {
        printf("Nenhum produto cadastrado no momento.Tente Novamente mais tarde\n");

        printf("\nPressione qualquer tecla para continuar...");
        getchar();
    }

    
    for (i = 0; i < n; i++)
    {
        if (quant[i] <= 8)
        {
            printf("\nO produto ==> %sesta acabando  quantidade no estoque ==> %d\n", nomeProd[i], quant[i]);
        }
    }
    printf("Pressione qualquer tecla para continuar...");
    getchar();
    return;
}
