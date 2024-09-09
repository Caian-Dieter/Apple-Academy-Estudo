#include <stdio.h>
#include <string.h>
typedef struct
{

    char nome[15];
    int idade;
    char sexo;
} Pessoa;

int main(void)
{

    Pessoa pessoa;

    printf("nome \nidade\nsexo\n");
    fgets(pessoa.nome, 15, stdin);
    scanf("%d", &pessoa.idade);
    getchar();
    scanf("%c", &pessoa.sexo);
    printf("nome: %sidade: %d \n sexo: %c", pessoa.nome, pessoa.idade, pessoa.sexo);

    return 0;
}