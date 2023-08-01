#include <stdio.h>
#include <stdlib.h>
#include <ctime>
#include <math.h>
#include <string.h>
#include <ctype.h>


main()
{

	char Palabra[5];
	int mayus=0, i=0, n=0;
	printf("Ingrese una Frase Maximo 100 Caracteres: ");
	_flushall();
	gets(Palabra);
	n = strlen(Palabra);
	for(int i=0;i<n;i++)
	{
	if(Palabra[i] >= 65 && Palabra[i] <= 90)
		{
			
			mayus++;
		
		}
    }
	printf("\n\nCantidad de mayusculas: %d",mayus);
	
	
}
