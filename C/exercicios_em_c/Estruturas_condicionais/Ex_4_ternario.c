#include <stdio.h>

int main(void)
{

    int numero = 0;

    scanf("%d", &numero);

    numero % 2 == 0 ? printf("esse numero e par \n") : printf("esse numero e nao par");

    return 0;
}