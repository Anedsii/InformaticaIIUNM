#include <stdio.h>
#include <stdlib.h>
/*
2- Crear dos punteros y dos variables de tipo Int que contenga la misma dirección. Se pide:
Verificar la dirección es mayor o menor a 0x400
Verificar si la dirección del puntero es igual a la dirección de la variable.
Verificar cuál de las dos variables apunta a una dirección mayor.

*/
int main(void)
{
	int *pi,*pj;
	int i,j;
	pi=&i;
	pj=&j;
	if(pi>pj)
		printf("\npi es mayor a pj\n");
	else
		printf("\npi es menor a pj\n");
	if(pi==&i)
		printf("\npi es igual a &i\n");
	else
		printf("\npi no es igual a &i\n");
	if(pi>0x400)
		printf("\npi apunta a una direccion mayor a 0x400\n");
	else
		printf("\npi apunta a una direccion menor a 0x400\n");
	return 0;
}