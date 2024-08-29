#include <stdio.h>

// irei tratar aqui das estruturas de repetiçao em c
/*
sendo elas :
for
while
do-while
*/
int main()
{
    int contador;
    int numero = 0;

    /*
    Na estrutura de repeticao for é usada quando 
    se sabe quantas vezes se quer repetir algo
    assim passamos tres argumentos 
    1: inicializaçao;
    2: condicao de parada
    3: incremento ou decremento 
    */
    for (contador = 0; contador < 10; contador++)
    {
        printf("%i ", numero);
        numero++;
    }

    



    return 0;
}