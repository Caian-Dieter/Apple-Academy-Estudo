#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*Es c r e v a u m a f u nção q u e r e c e b e
u m a s t r i n g d e c aract e r e s
e uma l e tra e devolve um vetor de
inteiros contendo as
posições (índices no vetor dastring) onde a letra
foi encontrada) e um inteiro
contendo o tamanho do vetorcriado
(total de letras iguais encontradas). Utilize
o retorno de um vetor pararetornar os índices e um
ponteiro para guardar o
tamanho do vetor*/

int* encontrar_letra(const char* string, char letra, int* tamanho_vetor) {
    int contador = 0;
    int* indices = NULL;

    // Primeiro, contamos quantas vezes a letra aparece na string
    for (int i = 0; i < strlen(string); i++) {
        if (string[i] == letra) {
            contador++;
        }
    }

    // Se a letra foi encontrada, alocamos espaço para o vetor de índices
    if (contador > 0) {
        indices = (int*)malloc(contador * sizeof(int));
        if (indices == NULL) {
            printf("Erro de alocação de memória!\n");
            exit(1);
        }

        // Preenchemos o vetor de índices com as posições encontradas
        int j = 0;
        for (int i = 0; i < strlen(string); i++) {
            if (string[i] == letra) {
                indices[j++] = i;
            }
        }
    }

    // Guardamos o tamanho do vetor no ponteiro fornecido
    *tamanho_vetor = contador;

    return indices;
}

int main()
{
    char *string, letra;

    int *vetor, *contarepete;

    string = (char *)malloc(sizeof(char) * 100);

    if (string == NULL)
    {
        return 1;
    }

    fgets(string, 100, stdin);

    scanf("%c", &letra);

    contarepete = indices(string, letra, &vetor);

    return 0;
}


