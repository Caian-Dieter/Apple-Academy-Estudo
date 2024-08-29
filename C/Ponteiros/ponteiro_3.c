#include <stdio.h>


int main(){

    int numero = 4;


    /*
        o asterisco quando é usado antes de alguma variavel dessa 
        forma "int *pX;" ele muda o tipo da variavel para ponteiro 
        
    */
    int *pX = &numero;

    /*
        quando usado da forma a baixo "*pX" nao tem tipo logo,
        ele esta sendo usado como "d reference" que nada mais faz
        do que ir ao endereço apontado pela referencia e definir 
        y como o valor apontado( y = 4)
    */
    int y = *pX;

    printf("%d\n", y);
    printf("%d\n",*pX);

    /*
    */
    printf("%p\n",&pX);
    printf("%p\n",*pX);
    printf("%p\n",pX);


    return 0;
}