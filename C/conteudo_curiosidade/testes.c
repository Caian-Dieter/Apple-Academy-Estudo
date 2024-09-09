#include <stdio.h>

int main(void)
{
    int num = 9;

    int num2 = 10;
    if (num % 2)
    {
        printf("num(%d) tem resto ao dividir por 2\n", num);
    }

    if (num2 % 2)
    {
    }
    else
    {
        printf("num2(%d) nao tem resto ao dividir por 2\n", num2);
    }

    return 0;
}