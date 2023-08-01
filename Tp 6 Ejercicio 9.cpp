#include <stdio.h>
#include <stdlib.h>
#include <ctime>
#include <math.h>
#include <string.h>
#include <ctype.h>

			

main()
{
	int Num=0, Letra=0, n, i;
	char Palabra[201];
	printf("Ingrese un texto: ");
	
	_flushall();
	
	gets(Palabra);
	
	n = strlen(Palabra);
	
	for (i=0;i<n;i++)
	{
			if(isdigit(Palabra[i]) != 0)
			{
				Num++;
			}
			if(isalpha(Palabra[i]) != 0)
			{
				Letra++;
			}
	}
	printf("\nLa cantidad de digitos es %d", Num);
	printf("\nLa cantidad de Letras es %d", Letra);
}
