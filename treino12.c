int main()
{
    char sexo;

    printf("Insira 'f' ou 'm':\n"); 
    scanf("%c", &sexo);

    switch(sexo)
    {
        case 'm': 
        printf("O sexo escolhido e´ errado");
        break;

        case 'f': 
        printf("O sexo e´ feminino");
        break;

    }

    return 0;
}