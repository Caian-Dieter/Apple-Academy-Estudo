#include <stdio.h>
#include <stdlib.h>

/*
    outro uso principal de ponteiros é em alocação memoria 
    dinamica e estatica;
    memoria dinamica: memoria que muda de tamanho conforme a
    apliçao "roda";
    memoria estatica: memoria que tem tamanho fixo conforme a 
    "corrida" da aplicaçao;
*/

int main(int argc,char **argv)
{

    char *heapMemory = malloc(100);
    if(heapMemory == NULL){
        perror("malloc falied");
    }


    return 0;
}