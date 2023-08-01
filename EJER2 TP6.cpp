#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

void MOSTRAR (char Lista[100]);
int LONGITUD(char Lista[100]);
int i;
//Las variables globales pueden cargarse despues de las funciones, los typedef no
main()
{
	char Lista[100];
	int lon;
	
	printf("EJERCICIO 2");
	printf("\n\n Ingrese los nombres: \n\n");
	gets(Lista);
	MOSTRAR(Lista);
	lon = LONGITUD(Lista);
	system("CLS");
	printf("EJERCICIO 2");
	printf("\n\nLa cantidad de palabras es de : %d",lon);
	getch();
	
	
	
	
}
void MOSTRAR (char Lista[100])
{
	//Muestra la lista verticalmente cada vez que ve una coma hace un punto y aparte
	system("CLS");
	for(i=0;i<strlen(Lista);i++)
	{
		if (Lista[i]!= ',')
		{
			printf("%c",Lista[i]);
			
		}
		else
		{
			printf("\n");
		}
		
	}
	getch();
}

int LONGITUD(char Lista[100])
{
	//Me mande un moco
	int lon = 0;
	for(i=0;i<strlen(Lista);i++)
	{
		if (Lista[i]!= ',')
		{
			lon = lon + 1;
		}
		else
		{
			
		}
	}
	return lon;
}

