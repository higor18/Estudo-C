#include <stdio.h>


void copiarConteudo(FILE*ponteiro1, FILE*ponteiro2)
{
    char leitor[1000];

    while(fgets(leitor,1000,ponteiro1) != NULL)
    {
        fputs(leitor,ponteiro2);
    }
}
int main()
{   
    void copiarConteudo(FILE*ponteiro1, FILE*ponteiro2);

    FILE *ponteiro1 = fopen("F:\\txtTeste\\bancoDeDados.txt",'r');

    if (ponteiro1 == NULL)
    {
        printf("Nao foi possivel abrir o arquivo");
        getchar();
        exit(0);
    }

    FILE *ponteiro2 = fopen("F:\\txtTeste\\numero.txt",'w');
    copiarConteudo(ponteiro1,ponteiro2);

    fclose(ponteiro1);
    fclose(ponteiro2);
}