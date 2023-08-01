#include <stdio.h>
#include <stdlib.h>
#include <ctime>
#include <math.h>
#include <string.h>
#include <ctype.h>


main()
{
	typedef char cadena[15];
	cadena Vector[100], Palabra, Palabra2;
	int i, N, bandera=0, compa=1;
	printf("Ingrese Cantidad de Articulos: ");
	scanf("%d", &N);
	
	for (i=0; i<N; i++)
	{
	_flushall();
	gets(Palabra);
    strcpy(Vector[i],Palabra); 
	}
    printf("\nIngrese Articulo a buscar: ");
    gets(Palabra2);
  	for (i=0; i<N; i++)
  	{
  		compa=strcmp(Vector[i],Palabra2);
  		if (compa==0)
  		{
  			bandera=1;
  		}
  	}
  	if (bandera==1)
  	{
  	 printf("\nSe encontro el Articulo");
  	}
  	if (bandera==0)
  	{
  		printf("\nNo se encontro el Articulo");
  	}
  	printf("\n\n");
  	printf("\nLista de articulos: ");
  	printf("\n");
  	for (i=0; i<N; i++)
  	{
  		puts(Vector[i]);
  	}
}
