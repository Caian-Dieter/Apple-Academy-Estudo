#include <stdio.h>
#include <string.h>
#include <stdlib>

/*Es c r e v a u m a f u nção q u e r e c e b e
u m a s t r i n g d e c aract e r e s
e uma l e tra e devolve um vetor de
inteiros contendo as
posições (índices no vetor dastring) onde a letra
foi encontrada) e um inteiro
contendo o tamanho do vetorcriado
(total de letras iguais encontradas). Utilize
o retorno de um vetor pararetornar os índices e um
ponteiro para guardar o
tamanho do vetor*/

int *stringcaracter(char *string, char letra)
{
}

int main()
{
    // uma frase para buscar uma letra em especifico
    char *frase = NULL, letra;
    // um vetor que tem a posicao de cada letra encontrada
    // um contador que fala quantas vezes a letra repetiu
    int *vetor, letrarepete;

    fgets(frase, sizeof(frase), stdin);
    scanf("%c", &letra);

    stringcaracter(frase,letra);
    

    return 0;
}