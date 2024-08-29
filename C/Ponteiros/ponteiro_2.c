#include <stdio.h>

/*
ponteiros podem ser constantes ou variaveis:
por exemplo - nome de vetores sao ponteiros constantes para dados
nomes de funçoes sao ponteiros constantes para codigos.

Logo ja mechiamos com ponteiros constantes antes de entrar nesse assunto em especifico
,mas ainda nao conhecemos os ponteiros variaveis,que nada mais sao
do que endereços sendo apontados para outras variaveis;
*/

int main()
{
    int vetor[] = {5, 10, 15};
    int *pont = vetor;
    int soma = 0;
    // o tipo do ponteiro depende da variavel que ele aponta
    int *ponteiro = &soma;

    *ponteiro = *ponteiro + *(pont + 1); //o segundo é a posicao

    printf("%d", soma);
    return 0;
}