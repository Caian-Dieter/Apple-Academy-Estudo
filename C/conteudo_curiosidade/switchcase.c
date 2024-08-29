#include <stdio.h>

int main()
{
    int input;

    scanf("%i", &input);

    switch (input)
    {
    case 1:
        printf ("resultado igual a 1\n");
        
    case 2:
        printf ("resultado igual a 2\n");
        
    default:

        printf ("nenhum outro resultado foi selecionado");
        break;
    }

    return 0;
}