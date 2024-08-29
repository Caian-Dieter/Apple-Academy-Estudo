#include <stdio.h>

/*
    nesse codigo podemos ver um dos principais usos dos 
    ponteiros
*/

typedef struct
{
    char nome[100];
    int idade;
} Pessoa;

/*
    um dos principais usos de pontieiros, alem de manter o codigo
    legivel e escalavel, é passar informaçoes para funçoes por 
    referencia podendo alterar variaveis mesmo estando fora do escopo 
    da funcao "atualizarstruct" 
*/
void atualizarstruct(Pessoa *ponteiro, int idade);

int main()
{

    Pessoa lowlevellearning;

    atualizarstruct(&lowlevellearning, 100);

    return 0;
}

void atualizarstruct(Pessoa *ponteiro, int idade)
{
    /*
        assim a variavel ponteiro altera o valor que se encontra 
        no endereço de lowlevellearning
    */
    ponteiro->idade = idade;
}