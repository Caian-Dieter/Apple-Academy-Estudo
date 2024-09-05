#include <stdio.h>
#include <string.h>
#define MAX 100

typedef struct
{
    char nome[20];
    char matricula[10];
    float nota1, nota2;
} Aluno;

int main(void)
{
    Aluno aluno[MAX];

    for (int i = 0; i < MAX; i++)
    {

        while (getchar() != '\n')
            ;
        char opcao;
        fgets(aluno[i].nome, 20, stdin);
        aluno[i].nome[strcspn(aluno[i].nome, "\n")] = '\0';
        fgets(aluno[i].matricula, 10, stdin);
        aluno[i].matricula[strcspn(aluno[i].matricula, "\n")] = '\0';
        scanf("%f %f", &aluno[i].nota1, &aluno[i].nota2);

        if (scanf("%f %f", &aluno[i].nota1, &aluno[i].nota2) != 2)
        {
            printf("Erro ao ler as notas. Terminando.\n");
            return 1;
        }

        float media = aluno[i].nota1 / aluno[i].nota2;

        printf("%s\n%s\n%.2f\n", aluno[i].matricula, aluno[i].nome, media);

        while (getchar() != '\n')
            ;

        printf("quer inserir outro aluno (s/n)?");
        scanf(" %c", &opcao);

        if (opcao == 'n')
        {
            break;
        }
    }

    return 0;
}