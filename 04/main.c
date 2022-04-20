#include <stdio.h>
#include <stdlib.h>
/*
5- Se pide crear un vector V1[10] 
cargar los datos por consola y mostrar el contenido a través de un puntero.

*/
int main(void)
{
    int V1[10],*pi,i;
    pi=&V1[0];
    for(i=0;i<10;i++)
        scanf("%d",pi+i);
    for(i=0;i<10;i++)
        printf("%d\t",pi[i]);
    printf("\n\n");
    return 0;
}
