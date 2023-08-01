#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>


typedef char Vehiculo[30];
int i;
void CARGAR (Vehiculo A[50],int M);
void ORDENAR (Vehiculo A[50],Vehiculo B[50],int M);
void MOSTRARB(Vehiculo B[50],int M);
void MOSTRARA(Vehiculo A[50],int M);
main()
{
	printf("EJERCICIO 3");
	
	Vehiculo A[50];
	Vehiculo B[50];
	int M = 10;
	CARGAR(A,M);
	strupr(A[50]);
	ORDENAR(A,B,M);
	MOSTRARB(B,M);
	MOSTRARA(A,M);
}
void CARGAR (Vehiculo A[50],int M)
{
	for(i=1;i<=M;i++)
	{
		printf("\n\nIngrese el nombre del auto %d:  ",i);
		_flushall();
		gets(A[i]);
	}
	
}

void ORDENAR (Vehiculo A[50],Vehiculo B[50],int M)
{
	Vehiculo Bandera;
	int m,j,k;
	k = 1;
	m = 0;	
	for(i=1;i<=M;i++)	
	{
			for(j=1;j<=M;j++)
			{
				m = strcmp(A[i],A[j]);
				if(m > 0)
				{
					k = k + 1;
				}
				else
				{
				}
		
			}
			_flushall();
			strcpy(B[i],A[k]);
			k =1;
				
	}
}


void MOSTRARB(Vehiculo B[50],int M)
{
	system("CLS");
	printf("EJERCICIO 3");
	printf("\n\n Ordenado:\n");
	for(i=1;i<=M;i++)
	{
		printf("\n%s",B[i]);
	}
	getch();
}
void MOSTRARA(Vehiculo A[50],int M)
{
	system("CLS");
	printf("EJERCICIO 3");
	printf("\n\n Desordenado:\n");
	for(i=1;i<=M;i++)
	{
		printf("\n%s",A[i]);
	}
	getch();
}

