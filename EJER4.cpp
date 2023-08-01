#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
int i;
int CONTAR(char poem[120]);
void MOSTRAR (char poem[120]);
int CONTARP(char poem[120]);

main()
{
	int vocales,a,e,y,o,u,palabras;//pongo y reemplazando la i porque la declare como global
	a=0;
	e=0;
	y=0;
	o=0;
	u=0;
	char poem[120];
	printf("EJERCICIO 4");
	printf("\n\n Escribe tu poema: \n\n");
	gets(poem);
	vocales = CONTAR(poem);
	system("CLS");
	printf("EJERCICIO 4");
	printf("\n\nLa cantidad de vocales es de : %d",vocales);
	getch();
	MOSTRAR (poem);
	for(i=0;i<strlen(poem);i++)//Contamos las vocales por separado
	{
		if (poem[i]== 'a')
		{
			a = a + 1;
		}
		else
		{
		}
			if (poem[i]== 'e')
		{
			e = e + 1;
		}
		else
		{
		}
			if (poem[i]== 'y')
		{
			y = y + 1;
		}
		else
		{
		}
			if (poem[i]== 'o')
		{
			o = o + 1;
		}
		else
		{
		}
			if (poem[i]== 'u')
		{
			u = u + 1;
		}
		else
		{
		}
	}
	printf("\n\n la cantidad de vocales a es de: %d",a);
	printf("\n\n la cantidad de vocales e es de: %d",e);
	printf("\n\n la cantidad de vocales i es de: %d",y);
	printf("\n\n la cantidad de vocales o es de: %d",o);
	printf("\n\n la cantidad de vocales u es de: %d",u);
	getch();
	palabras = CONTARP(poem);
	system("CLS");	
	printf("EJERCICIO 4");
	printf("\n\n La cantidad de palabras es de : %d",palabras);
	getch();
	
	
	
	
	
	
}

int CONTAR(char poem[120])//Cuenta cuantas vocales hay
{
	int c = 0;
	for(i=0;i<strlen(poem);i++)
	{
		if(poem[i] == 'a' || poem[i] == 'e'|| poem[i] == 'i'|| poem[i] == 'o'|| poem[i] == 'u')
		{
			c = c  +1;
		}
		else
		{
		}
	}
	return c;
}
void MOSTRAR (char poem[120])//Muestra el poema
{
	system("CLS");
	printf("EJERCICIO 4\n\n\t");
	for(i=0;i<strlen(poem);i++)
  {
	
	if(poem[i]!= '.')
	{
		printf("%c",poem[i]);
	}
	else
	{
		printf("\n\t");
	}
  }
	getch();
}
int CONTARP (char poem[120])//Cuenta cuantas palabras hay
{
	int c =0;
	for (i=0;i<strlen(poem);i++)
	{
		if(poem[i] ==' '|| poem[i]=='\o')
		{
			c = c+1;
		}
		else
		{
			
		}
		
	}
	c--;
	//Aca se tiene que bajar el contador en uno porque parece que cuenta dos \o
	return c;
}

