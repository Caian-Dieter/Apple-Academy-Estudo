#include <stdio.h>
#include <string.h>

// funcao .recebe vetor inteiro pega o maior e o menor vetor e os passa por referencia

void maximoMinimo(int *v, int N, int *maximo, int *minimo);

int main(void)
{
    int v[] = {7, 2, 3, 4, 5, 6, 10};
    int n, *max, *min;

    n = sizeof(v) / sizeof(v[0]);
    printf("%d\n", n);

    maximoMinimo(v, n, &max, &min);

    printf("valor maximo = %d\n", max);

    printf("valor minimo = %d\n", min);

    return 0;
}

void maximoMinimo(int *v, int N, int *maximo, int *minimo)
{
    /*
    esse '*' antes de maximo e minimo serve para dizer que estamos
    alterando os valores apontados por maximo e minimo
    */
    *maximo = v[0];
    *minimo = v[0];

    /*
    o looping for so chega na parte da incrementacao quando o looping
    termina,logo pre e pos incrementacao sao indiferentes(++i == i++);
    */
    for (int i = 0; i < N; i++)
    {
        if (*maximo < v[i])
        {
            *maximo = v[i];
        }
        if (*minimo > v[i])
        {
            *minimo = v[i];
        }
    }
}