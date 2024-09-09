#include <stdio.h>

typedef struct
{

    char nome[20];
    int idade;

} Pessoa;

/*
    passa pessoa como paramatre da funçao que vai retornar os
    dados preenchidos
*/
Pessoa retornoPessoa()
{
    Pessoa p;
    printf("digite sua idade: ");
    scanf("%d", &p.idade);
    getchar();
    printf("nome : ");
    fgets(p.nome, 20, stdin);

    return p;
}

int main(void)
{

    Pessoa pessoa;

    /*lembrar de atribuir qual dado que vai receber o 
    retorno do que voce passou(dado precisa ser do mesmo tipo de retorno)
    */
    pessoa = retornoPessoa();

    printf("%s", pessoa.nome);
    printf("%i", pessoa.idade);

    return 0;
}