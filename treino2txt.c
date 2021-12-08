#include <stdio.h>
#include <stdlib.h>

int main()
{ 
    //Ler um aquivo txt
    int x,y,z;

    FILE *ponteiro;

    ponteiro = fopen("F:\\txtTeste\\numeros.txt", "r");
    //Não é possivel ler string aqui

    if(ponteiro == NULL)
    //Quando o ponteiro não aponta em nada, ele retorna NULL.
    {
        printf("Arquivo nao pode ser aberto");
        getchar();
        return 0;

    }

    fscanf(ponteiro,"%d %d %d", &x, &y, &z);

    printf(" %d \n %d \n %d", x,y,z);

    fclose(ponteiro);

}