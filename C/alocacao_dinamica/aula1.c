#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int x;

    x = (int *)malloc(sizeof(int) * 100);

    if (x == NULL)
    {
        return 1;
    }

    printf("%d", sizeof(x));

    free(x);

    return 0;
}