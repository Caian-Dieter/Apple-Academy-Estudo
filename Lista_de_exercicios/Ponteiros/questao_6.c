#include <stdio.h>

int main(void)
{
    int a[99];

    for (int i = 0; i < 99; ++i)
    {
        a[i] = a[a[i]];
        printf("%d\n ", a[i]);
    }

    return 0;
}