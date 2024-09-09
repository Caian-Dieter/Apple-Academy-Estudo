#include <stdio.h>

#define Nstruct 3

typedef struct
{

    char nome[25];
    float altura;
    float peso;
    int cpf;
    char sexo[9];

} Pessoas;

float calculoIMC(Pessoas *pessoa)
{
    return pessoa->peso / (pessoa->altura * pessoa->altura);
}

void mudarStruct(Pessoas *pessoa)
{

    printf("\nnome: ");
    fgets(pessoa->nome, sizeof(pessoa->nome), stdin);
    pessoa->nome[strcspn(pessoa->nome, "\n")] = '\0';


    printf("\naltura: ");
    scanf("%f", &pessoa->altura);
    printf("\npeso: ");
    scanf("%f", &pessoa->peso);
    printf("\ncpf: ");
    scanf("%d", &pessoa->cpf);
    getchar();
    printf("\nsexo: ");
    fgets(pessoa->sexo, sizeof(pessoa->sexo), stdin);
    pessoa->sexo[strcspn(pessoa->sexo, "\n")] = '\0';
}

void infoPessoas(Pessoas *pessoa)
{
    printf("Nome: %s", pessoa->nome);
    printf("Altura: %.2f metros\n", pessoa->altura);
    printf("Peso: %.2f kg\n", pessoa->peso);
    printf("CPF: %d\n", pessoa->cpf);
    printf("Sexo: %s\n", pessoa->sexo);
}

int buscaCPF(Pessoas pessoa[], int buscacpf)
{

    for (int i = 0; i < Nstruct; i++)
    {
        if (pessoa[i].cpf == buscacpf)
        {
            return i;
        }
    }
    return -1;
}

int main(void)
{
    Pessoas pessoa[Nstruct];
    int buscacpf, i;

    for (i = 0; i < Nstruct; i++)
    {
        mudarStruct(&pessoa[i]);
    }
    // mostrar info das pessoas que existem
    for (i = 0; i < Nstruct; i++)
    {
        infoPessoas(&pessoa[i]);
    }

    printf("qual cpf voce quer buscar ? \n");
    scanf("%d", &buscacpf);
    getchar();

    /*loop que passa de um por um comparando se o spf recebido é
    igual ao requisitado
    */

    int acharcpf = buscaCPF(pessoa, buscacpf);

    if (acharcpf != -1)
    {
        infoPessoas(&pessoa[acharcpf]);
    }
    else
    {
        printf("CPF não encontrado\n");
    }

    // buscar uma pessoa pelo cpf

    return 0;
}