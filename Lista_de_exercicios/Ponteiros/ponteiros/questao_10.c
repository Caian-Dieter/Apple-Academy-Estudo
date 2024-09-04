#include <stdio.h>
/*
    ponteiro de ponteiro:

*/

int main(void)
{
    /*declaracao de variaveis sendo x ,um ponteiro p
    e um ponteiro de ponteiro pp.*/
    int x = 100, *p, **pp;
    /*o ponteiro p esta sendo inicializado,atribuido
    com o valor do endereço de x*/
    p = &x;
    /*o ponteiro de ponteiro pp sendo inicializado com o valor do endereço de p
    ou seja, o endereço do endereço de x*/
    pp = &p;
    /*
    O valor de **pp deferencia p que por sua vez deferencia x,logo
    **pp equivale a x
    */
    printf("Valor de pp : %d\n", &x);
    /*
    quando voce deferencia apenas uma vez um ponteiro de um ponteiro ele aponta para o valor que o outro ponteiro atribuiu,
    logo *pp aponta para o endereço de x ,nao seu valor
    */
    printf("Valor de pp : % d\n", *pp);
    printf("Valor de pp : % d\n", **pp);

    return 0;
}
