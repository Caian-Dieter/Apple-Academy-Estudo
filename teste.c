#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int x = 2, *p;
    p = &x;
    /*aqui o valor(deferenciado por p),originalmente 2 vai ser substituido 
     por x*5;
    */
    *p = x * 5;

    printf("%d", *p);
    return 0;
}
