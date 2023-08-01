#include <stdio.h>
#include <stdlib.h>
#include <ctime>
#include <math.h>
#include <string.h>




typedef char cadena[50];
void carga(cadena asignaturas[100],int v[100],int n);
int materiaMay(int v[100],int n);
int busqueda(cadena asignaturas[100],int v[100],int n);

main(){
	
	cadena asignaturas[100];
	int v[100],n,pos;
	
	printf("Ingrese la cantidad de asignaturas: ");
	scanf("%d",&n);
	
	carga(asignaturas,v,n);
	pos = materiaMay(v,n);
	
	
	printf("\n\nAsignatura con mas inscriptos: %s ",asignaturas[pos]);
	printf("\nCantidad de inscriptos en la materia: %d",v[pos]);
	
	busqueda(asignaturas,v,n);
}


void carga(cadena asignaturas[100],int v[100],int n){
	
	for(int i=0;i<n;i++){
		system("cls");
		printf("\n\nIngrese la asignatura y la cantidad de alumnos inscriptos a la misma.");
		_flushall();
		
		printf("\nAsignatura: ");
		gets(asignaturas[i]);
		
		do{
		
		printf("\nCantidad de alumnos: ");
		scanf("%d",&v[i]);
		
		if(v[i]<0){
			printf("\n\nEl valor ingresado no es valido. Ingreselo nuevamente.");
		 }
		
	    }while(v[i]<0);
		strlwr(asignaturas[i]);
	}
	
}


int materiaMay(int v[100],int n){
	
	int pos,i;
	int mayor = 0;
	for(i=0;i<n;i++){
		
		if(v[i]>mayor){
			
			mayor = v[i];
			pos = i;
			
		}
		
		
	}
	
	return pos;
	
}

int busqueda(cadena asignaturas[100],int v[100],int n){
	
	char aux[100];
	int i,alumnos;
	

	printf("\n\nIngrese el nombre de la asignatura a buscar: ");
	_flushall();
	gets(aux);
	
	strlwr(aux);
	
	
	  for(i=0;i<n;i++)
	   {
	
	     if(strcmp(aux,asignaturas[i]) == 0)
	     {
		
	      	alumnos = v[i];
	
	     }
	     
       }
     
     
    
   	printf("\n\nLa materia %s tiene %d alumnos inscriptos.",aux,alumnos);
   	
	
	return alumnos;
	
}















