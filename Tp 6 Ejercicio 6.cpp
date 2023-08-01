#include <stdio.h>
#include <stdlib.h>
#include <ctime>
#include <math.h>
#include <string.h>
#include <ctype.h>


void Invertir (char Palabra[100], int n);

main()
{
	
	char Palabra[100];
	int i=0, n;
	printf("Ingresar Cadena: ");
	_flushall();
	gets(Palabra);
	n = strlen(Palabra);
	Invertir(Palabra, n);
}
void Invertir (char Palabra[100], int n)
{
typedef char cadena[15];
	cadena Vector[100];
	int i;
    strrev(Palabra);
	puts(Palabra);
}
