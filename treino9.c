int main()
{
    char sexo;
    int i, n, m, f;
    m = 0;
    f = 0;

    printf("Informe a quantidade de pessoas: ");
    scanf(" %d", &n);

    for (i = 1; i <= n; i++)
    {
        do
        {
            printf("Informe o sexo da pessoa %d: ", i);
            scanf(" %c", &sexo);
            sexo = toupper(sexo);
        } while (sexo != 'M' && sexo != 'F');

        if (sexo == 'M')
        {
            m++;
        }
        else if (sexo == 'F')
        {
            f++;
        }
    }

    printf("Quantidade de mulheres e: %d \n", f);
    printf("Quantidade de Homens e: %d \n", m);
}