#include <stdio.h>
#include <stdlib.h>
/*
4- Se crearon dos punteros con dirección 0x2000 y 0x200a.
 Crear una variable tipo Int y visualizar el valor por consola. 
 De una breve explicación de lo mostrado por la consola.

*/
int main(void)
{
    float *p,*q;
    int a;
    p=0x2000;
    q=0x200a;
    a=q-p;
    printf("\n\n%d %p %p\n\n",a,p,q);
    return 0;
}