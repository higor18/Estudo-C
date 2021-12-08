#include <stdio.h>
#include <stdlib.h>

int main()
{ 

    FILE *ponteiro;

    ponteiro = fopen("F:\\txtTeste\\bancoDeDados.txt", "a");
    

    if(ponteiro == NULL)
    //Quando o ponteiro não aponta em nada, ele retorna NULL.
    {
        printf("Arquivo nao pode ser aberto");
        getchar();
        exit(0);
    }

    
    //Vetor de string
    char frase[] = "\nSegunda linha\n";
    fputs(frase,ponteiro);

    //Apenas um caractere 
    char caractere = '\n 4';
    fputc(caractere,ponteiro);

    fclose(ponteiro);

}