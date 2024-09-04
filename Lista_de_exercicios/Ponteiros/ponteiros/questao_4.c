#include <stdio.h>

int mm(int *vetor, int n, int *min, int *max)
{
    *min = vetor[0];
    *max = vetor[0];

    for (int i = 0; i < n; i++)
    {

        if (*min < vetor[i])
        {
            *min = vetor[i];
        }
        if (*max > vetor[i])
        {
            *max = vetor[i];
        }
    }

    printf("valor min = %d\n", *min);
    printf("valor max = %d\n", *max);
}

int main()
{
    int min, max;
    int vetor[] = {1, 4, 6, 8, 10};
    int n = sizeof(vetor) / sizeof(vetor[0]);
    printf("%d\n", n);

    mm(vetor, n, &min, &max);

    return 0;
}
