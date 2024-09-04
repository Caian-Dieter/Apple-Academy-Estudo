#include <stdio.h>

char *strcopy(char *str);

int main(void)
{

    char string[] = "nome de todos";
    char *copiado;

    copiado = strcopy(string);

    if (copiado != NULL)
    {
        printf("%s", string);
        printf("%s", copiado);
        free(copiado);
    }

    return 0;
}

char *strcopy(char *str)
{
    char *copia = (char *)malloc(strlen(str) + 1);

    if (copia == NULL)
    {
        perror("erro");
        return NULL;
    }

    strcpy(copia, str);
    return copia;
}