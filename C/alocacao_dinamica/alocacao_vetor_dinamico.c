#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char *vet;

    /*
        vet = (tipo de inteiroadicionado)
    */

    vet = malloc(sizeof(char) * 100);

    if (vet == NULL)
    {
        return 1;
    }

    fgets(vet, vet, stdin);

    printf("%zu", strlen(vet));

    free(vet);

    return 0;
}