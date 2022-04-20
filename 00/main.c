#include <stdio.h>
#include <stdlib.h>
/*
1 - Crear una variable y un puntero de tipo Int que contenga el mismo valor de contenido. 
Se pide visualizar por consola el contenido y la dirección  del puntero y la variable.
*/

int main(void)
{
	int i=1,*pi=&i;
	printf(" i = %d\n",i);
	printf("dir i = %p\n",&i);
	printf(" i = %d\n",*pi);
	printf("dir i = %p\n",pi);
	return 0;
}

