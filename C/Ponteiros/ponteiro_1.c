#include <stdio.h>

/*
    principais usos de ponteiros:
    1. passagem de argumentos para funções()
*/



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
    int i = 5;
    // o tipo do ponteiro depende da variavel que ele aponta
    int *ponteiro = &i;

    i += 1;
    /*usando ponteiros podemos acessar a variavel por
    referencia ao inves de acessa-la por valor

    */
    printf("%d\n", ponteiro);
    printf("%d\n", &i);
    printf("%d\n", &ponteiro);
    printf("%d\n", *ponteiro);
    printf("%d", i);

    return 0;
}