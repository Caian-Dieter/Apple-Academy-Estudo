#include <stdio.h>

// criando uma struct que vamos passar para ourta struct
typedef struct
{
    // data de nascimento
    int dia, mes, ano;

} Nascimento;

typedef struct
{
    //chamando o novo tipo de dado
    Nascimento dataNas;
    char nome[15];
    int idade;

} Pessoa;

int main(void)
{
    Pessoa pessoa;

    //acessando o novo tipo de dado 
    scanf("%d %d %d", &pessoa.dataNas.dia, &pessoa.dataNas.mes, &pessoa.dataNas.ano);

    printf("dia: %d mes: %d ano: %d", pessoa.dataNas.dia, pessoa.dataNas.mes, pessoa.dataNas.ano);

    return 0;
}