#include <stdio.h>

typedef struct
{

    char nome[20];
    int idade;

} Pessoa;
/*
    usando ponteiros nao é necessario usar retorno
*/
void dadosPessoa(Pessoa *pessoa)
{

    scanf("%d", &pessoa->idade);
    getchar();
    fgets(pessoa->nome, 20, stdin);
}

int main(void)
{

    Pessoa pessoa;

    dadosPessoa(&pessoa);

    printf("%s", pessoa.nome);
    printf("%i", pessoa.idade);

    return 0;
}