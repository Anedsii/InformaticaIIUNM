#include <stdio.h>
#include <stdlib.h>
/*
3- Se crearon tres punteros de tipo Int, Char y Float con dirección 0x0000. 
Se pide crear un bucle for de n veces ,aumentar de a uno el puntero y mostrar las direcciones por consola. 
 De una breve explicación de lo mostrado por la consola.

*/
int main(void)
{
    int *pi,i;
    char *pc;
    float *pf;
    pi=pc=pf=0x0000;
    for(i=0;i<10;i++)
    {
        printf("%p\t%p\t%p\n",pi,pf,pc);
        pi=pi+1;
        pf++;
        pc++;
    }
    printf("%p\t%p\t%p\n\n",pi,pf,pc);
    return 0;
}