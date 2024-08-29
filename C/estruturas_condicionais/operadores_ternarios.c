#include <stdio.h>

int main(char argv[], int argc)
{
    // operadores ternarios:
    // 1. condicao ? verdadeiro : falso
    //  (condicao) ? printf("caso seja verdadeira") : printf("caso seja falsa")

    int idade = 18;

    (idade > 10) ? printf("idade e maior do que 10") : printf("idade menor qdo que 10");

    

    return 0;
}