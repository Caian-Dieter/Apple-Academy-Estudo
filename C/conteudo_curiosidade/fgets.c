#include <stdio.h>

#define TAMANHO 100

int main()
{
    // fgets é uma funçao usada na entrada de dados de um arquivo(leitura de string em um arquivo)

    int nome[TAMANHO];
    /*
    A funçao fgets recebe tres argumentos sendo eles:
    1 - O ponteiro para a string que ira armazenar o dado
    2 - O tamanho da string que vai ser lida
    3 - O ponteiro para a FILE
    (arquivo de onde a string sera lida,nesse caso é uma referencia de entrada padrao)
    */

    fgets(nome, TAMANHO, stdin);

    printf("%s", nome);

    return 0;
}