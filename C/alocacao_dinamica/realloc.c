#include <stdio.h>

int main()
{
    int *vetor = malloc(sizeof(int) * 100);

    if(vetor == NULL){
        return 1;
    }

    /*
        recebe 2 parametros:
        1 ponteiro para o vetor atual
        o novo tamanho que esse vetor vai ocupar
    */
    vetor = realloc(vetor,150);




    return 0;
}