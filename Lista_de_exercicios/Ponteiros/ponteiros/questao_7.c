#include <stdio.h>

void troca(int *a, int *b);

int main(void)
{
    int a, b;

    a = 4;

    b = 8;

    troca(&a, &b);

    return 0;
}

void troca(int *a, int *b)
{
    int temp;
    printf("a = %d\nb = %d\n", *a, *b);
    temp = *a;
    *a = *b;
    *b = temp;
    printf("a = %d\nb = %d\n", *a, *b);
}