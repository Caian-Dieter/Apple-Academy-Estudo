#include <stdio.h>

// irei tratar aqui as estruturas condicionais em c if , else e else if
int main()
{
    int idade;

    scanf("%i", &idade);

    /*
    A estrutura if em c checa condiçoes e se essa condiçao
    for correta(aquilo que esta dentro dos parenteses)
    se executa aquilo denntro das chaves
    */
    if (idade > 18)
    {
        printf("maior de idade");
        if (idade > 70)
        {
            printf(" e idoso\n");
        }
    }
    /*
    A estrutura condicional else if funciona igual a estrutura if
    mas ela testa outras condiçoes
    */
    else if (idade == 18)
    {
        printf("você tem 18 anos");
    }
    /*
    A estrutura condicional else funciona
    é chamada quando todas as outras estruturas condicionais falham
    */
    else
    {
        printf("menor de idade");
    }
}