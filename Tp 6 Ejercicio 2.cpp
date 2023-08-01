#include <stdio.h>
#include <stdlib.h>
#include <ctime>
#include <math.h>
#include <string.h>




int longitud(char cadena[100]);
void mostrar(char cadena[100]);

main(){
	
	char cadena[100];
	int longi=0;
	
	
	printf("Ingrese una lista de nombres separados por una coma: \n");
	gets(cadena);
	
	printf("\n\n");
	mostrar(cadena);
	longi= longitud(cadena);
	printf("\n\nLa longitud de la cadena es de: %d.",longi);
	
}




int longitud(char cadena[100]){
	
	int i=0;
	while(cadena[i] != 0){
	    i++;
	}
	
	return i;
	
}


void mostrar(char cadena[100]){
	
	int i=0;
	while(cadena[i] != 0)
	{
	    
		 if(cadena[i] == ','){
		 	printf("\n");
		 }  
		 else{
		 printf("%c",cadena[i]);  
		 }
		 i++;
	}
	
}
