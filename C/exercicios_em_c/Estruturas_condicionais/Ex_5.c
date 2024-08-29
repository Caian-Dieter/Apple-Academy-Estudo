#include<stdio.h>

/*
criar uma funcao que determina se esses valores podem ser
usados para formar um triangulo
*/
int condicaoTriangulo (int x,int y,int z);

/*
criar uma funcao que recebe um valor da funcao condicao Triangulo 
e retorna qual tipo de triangulo que ele é 
*/


/*criar uma funcao que recebe o valor retornado la em cima e 
define o triangulo ,se houver triangulo
*/
int main(void){
    int x,y,z;

    scanf("%d %d %d ",&x,&y,&z);

    

    return 0;
}



int condicaoTriangulo(int x,int y,int z){

    if(x + y > z && x + z > y && z + y > x){
        return 1;
    }
    else{
        return 0;
    }

}