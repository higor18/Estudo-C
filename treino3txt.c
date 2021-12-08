#include <stdio.h>
#include <stdlib.h>

int main()
{ 
    //Ler um aquivo txt
    int x,y,z;
    char frase[100];

    FILE *ponteiro;

    ponteiro = fopen("F:\\txtTeste\\bancoDeDados.txt", "r");
    

    if(ponteiro == NULL)
    //Quando o ponteiro não aponta em nada, ele retorna NULL.
    {
        printf("Arquivo nao pode ser aberto");
        getchar();
        exit(0);

    }
    // Vai ler tudo que há lá dentro.
    while(fgets(frase,100,ponteiro)!= NULL)
    {
        printf("%s", frase);
    }

    fclose(ponteiro);

}