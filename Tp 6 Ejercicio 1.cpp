#include <stdio.h>
#include <stdlib.h>
#include <ctime>
#include <math.h>
#include <string.h>




main(){
	
	char cadena1[100];
	int s=0,valor;
	char mayor[100];
	int mayorPal=-1,z;
	

	while(strcmp(cadena1,"final") != 0){
		printf("Ingrese una palabra. (AVISO: Para finalizar ingrese la palabra 'final').");
		gets(cadena1);
		
	    s++;
		
		z = strlen(cadena1);
		if( z > mayorPal)
		{
			
			mayorPal = strlen(cadena1);
			strcpy(mayor,cadena1);
			
		}
		
	     strlwr(cadena1);
	}
	
	printf("\n\nLa oracion mas larga ingresada fue: %s",mayor);
	printf("\nSe ingresaron un total de %d palabras.",s-1);
	
	
	
}
