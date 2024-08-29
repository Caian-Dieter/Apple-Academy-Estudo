#include <stdio.h>

int main()
{
    int numero = 0;

    scanf("%d", &numero);

    switch (numero)
    {
    case 1:
        printf("Um\n");
        break;
    case 2:
        printf("dois\n");
        break;
    case 3:
        printf("tres\n");
        break;
    case 4:
        printf("quatro\n");
        break;
    default:
        printf("nenhuma das opcoes anteriores foi escolhida");
        break;
    }

    return 0;
}