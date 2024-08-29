#include <stdio.h>

/*
    uso e curiosidade do break.
    O comando break é usado para saida de um switch case 
    ou forçar saida de um laço de repeticao

*/

int main()
{
    int numero = 1;

    


    /*
        nesse caso o break foi esquecido de proposito 
        apenas para demonstracao de codigo
    */
    switch (numero)
    {

    case 1:
        printf("1\n");

    case 2:
        printf("2\n");

    case 3:
        printf("3\n");

    case 4:
        printf("4\n");

    case 5:
        printf("5\n");

    case 6:
        printf("6\n");

    default:
        printf("O valor de numero e desconhecido");
        break;
    }

    return 0;
}