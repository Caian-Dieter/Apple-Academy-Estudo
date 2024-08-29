#include <stdio.h>

/*
    quando usamos a palavrachave static em c
    em uma funçao isso significa que essa variavel em specifico
    vai manter seu valor entre cada chamada dessa funçao.Logo
    o resultado dessa chamada em especifico vai ser :
    7 12 17
*/

int func()
{

        static int x = 2;
    x += 5;
    return x;
}

int main(void)
{

    printf("%d ", func());
    printf("%d ", func());
    printf("%d ", func());

    return 0;
}