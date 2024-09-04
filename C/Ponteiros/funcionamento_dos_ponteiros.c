#include <stdio.h>

int main(void)
{
    int i[] = {1, 2, 3};

    int *p = &i;

    printf("%d \n", &i);
    printf("%d \n", p);
    printf("%d \n", &p);

    p++;

    printf("%d \n", &p);
    printf("%d \n", p);
    printf("%d \n", *p);

    return 0;
}