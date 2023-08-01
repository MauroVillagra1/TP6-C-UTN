#include <stdio.h>
#include <stdlib.h>
#include <ctime>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>

typedef char cadena[30];

void Datos (cadena nombre[40], cadena apellido[40], int &Socios, cadena nombre_completo[40]);
void Ordenamiento (cadena nombre[40],  cadena apellido[40], int Socios, cadena nombre_completo[40]);
void Ordenamiento2 ( cadena nombre[40],  cadena apellido[40], int Socios, cadena nombre_completo[40]);
void BuscarApellido( cadena nombre[40],  cadena apellido[40], int Socios, cadena nombre_completo[40]);

main()
{

int Socios=0, i=0;
cadena nombre[40], apellido[40], nombre_completo[40];
Datos (nombre, apellido, Socios, nombre_completo);
Ordenamiento2(nombre, apellido, Socios, nombre_completo);
Ordenamiento(nombre, apellido, Socios, nombre_completo);
BuscarApellido(nombre, apellido, Socios, nombre_completo);	
}

void Datos (cadena nombre[40], cadena apellido[40], int &Socios, cadena nombre_completo[40])
{
    int i=0;
	printf("Ingresar Cantidad de socios: ");
    scanf("%d", &Socios);
    _flushall();
	printf("\nIngrese Los Datos: \n");
	
for (i=0; i<Socios; i++)
	{
	printf("\nDatos del socio %d \n", i+1);
	_flushall();
	printf("\nIngrese Nombre/es: ");
	gets(nombre[i]);
	_flushall();
	printf("\nIngrese Apellido/os: ");
	gets(apellido[i]);
	}

}
void Ordenamiento ( cadena nombre[40],  cadena apellido[40], int Socios, cadena nombre_completo[40])
{
	cadena aux, aux2;
	int b, i;
	
	do{
		b=0;
		for(i=0; i<Socios-1; i++){
			if(strcmp(apellido[i], apellido[i+1])>0){
				strcpy(aux, nombre[i]);
				strcpy(nombre[i], nombre[i+1]);
				strcpy(nombre[i+1], aux);
				strcpy(aux2, apellido[i]);
				strcpy(apellido[i], apellido[i+1]);
				strcpy(apellido[i+1], aux2);
				b=1;
			}
		}
		for (i=0; i<Socios; i++)
		{
		strcpy(nombre_completo[i], nombre[i]);
        strcat(nombre_completo[i], " " );
	    strcat(nombre_completo[i], apellido[i] );
		}
	}while(b==1);
	printf ("\nLista de Apellidos de forma creciente (A-Z) \n");
		for(i=0; i<Socios; i++){
		puts(nombre_completo[i]);
		
	}
}
void Ordenamiento2 ( cadena nombre[40],  cadena apellido[40], int Socios, cadena nombre_completo[40])
{
cadena aux, aux2;
	int b, i;
	
	do{
		b=0;
		for(i=0; i<Socios-1; i++){
			if(strcmp(nombre[i+1], nombre[i])>0){
				strcpy(aux, nombre[i+1]);
				strcpy(nombre[i+1], nombre[i]);
				strcpy(nombre[i], aux);
				strcpy(aux2, apellido[i+1]);
				strcpy(apellido[i+1], apellido[i]);
				strcpy(apellido[i], aux2);
				b=1;
			}
		}
		for (i=0; i<Socios; i++)
		{
		strcpy(nombre_completo[i], nombre[i]);
        strcat(nombre_completo[i], " " );
	    strcat(nombre_completo[i], apellido[i] );
		}
	}while(b==1);
		printf ("\nLista de Nombre de forma decreciente (Z-A) \n");
		for(i=0; i<Socios; i++){
		puts(nombre_completo[i]);
}
}
void BuscarApellido( cadena nombre[40],  cadena apellido[40], int Socios, cadena nombre_completo[40])
{
	cadena buscar, apellidobuscado[40];
	int i, Cont=0, compa=1;
	printf("\nIngrese apellido a buscar: ");
	gets(buscar);
	
	for(i=0; i<Socios; i++)
	{	
		compa=strcmp(apellido[i],buscar);
		if (compa==0)
		{
			strcpy(apellidobuscado[Cont],nombre_completo[i]);
			Cont++;
			
		}
    }
    
    if (Cont>0)
    {
    	printf("\nLista de Nombres con los Apellidos buscados\n");
    	for(i=0; i<Cont; i++)
    	{
    		puts(apellidobuscado[i]);
    	}
    }
}

