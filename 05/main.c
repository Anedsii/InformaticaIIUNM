#include <stdio.h>
#include <stdlib.h>
/*
6- Se tiene un archivo ‘ datos.txt’ ,
se pide abrir el archivo y mostrar el contenido por consola.

*/
int main(void)
{
	FILE *fp;
	char c;
	fp=fopen("C:\\Users\\siles\\C\\05\\datos.txt","r");
	if(fp==NULL)
	{
		printf("\n\nError de apertura\n\n");
		exit(1);
	}
	do
	{
		c=fgetc(fp);
		putchar(c);
	}
	while(!feof(fp));
	fclose(fp);
    return 0;
}