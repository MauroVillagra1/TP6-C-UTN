#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string>

int i;
typedef char Carrera[50]; //Creamos la variable vehiculo para poder crear un vector con elementos de cadena de caracteres
void CARGA(Carrera A[50],int B[50],int M);
int MAYOR (int B[50],int M);
//Siempre primero crear el typedef  porque sino no compila
main()
{
	
	Carrera A[50];
	int M,B[50],may;
	printf("EJERCICIO 1");
	printf("\n\n Indique la cantidad de asignaturas de la carrera:  ");
	scanf("%d",&M);
	CARGA(A,B,M);
	may = MAYOR (B,M);
	system("CLS");
	printf("EJERCICIO 1");
	printf("\n\n La asignatura que mas alumnos tiene es: %s con una cantidad de alumnos de: %d",A[may],B[may]);
	getch();
	
	
	
	
	
	
}

void CARGA(Carrera A[50],int B[50],int M)
{
	
	//CARGA PARALELA en la posicion de A se carga el nombre de la carrera y en la de B la cantidad de alumnos
	for(i=0;i<M;i++)
	{
	
		
		printf("\n\nIngrese el nombre de la carrera:  ");
 	    _flushall();
		gets(A[i]);
		printf("\n\nIndique la cantidad de alumnos de la asignatura: ");
		scanf("%d",&B[i]); 
		
		
	}
}

int MAYOR (int B[50],int M)
{
	//Se necesita devolver la posicion, pero tambien crear una variable que guarde el mayor
	int may = 0,lug = 0;
	
	
	for(i=0;i<M;i++)
	{
		if(B[i]>may)
		{
			//Con may sabemos cual es el mayor valor y con lug el lugar donde esta guardado
			may = B[i];
			lug = i;
		}
		else
		{
		}
		
	}
	
	//Hay que devolver la posicion donde esta guardado para poder indicar cual es la carrera
	return lug;
}


