#include <stdio.h>
#include <stdlib.h>
#include <cctype>
#include <math.h>
#include <string.h>





main(){
	
	char poema[201];
	
	int con = 0,voc= 0,dig= 0,signos= 0,mayus= 0,minus= 0,esp= 0,n;
	
	printf("Ingrese el poema (MAX 200 CARACTERES): ");
	
	_flushall();
	
	gets(poema);
	
	
	n = strlen(poema);
	
	for(int i=0;i<n;i++)
	{
		
		if(poema[i] >= 65 && poema[i] <= 90)
		{
			
			mayus++;
		
		}
		else
		{
			if(poema[i] >= 97 && poema[i] <= 122)
			{
			   minus++;	
			}
		}
		
	
		if(poema[i] == 'a' || poema[i] == 'e' || poema[i] == 'i' || poema[i] == 'o' || poema[i] == 'u' || poema[i] == 'A' || poema[i] == 'E' || poema[i] == 'I' || poema[i] == 'O' || poema[i] == 'U'){
			
			voc++;

		}
		else
		{
			if(poema[i] != ' ' && poema[i] != '.' && poema[i] != ',' && isdigit(poema[i]) == 0)
			{
			    con++; 	
			 	
			}
			else
			{
				if(isdigit(poema[i]) != 0)
				{
				   dig++;	
				}
				else
				{
					if(poema[i] == 32)
					{
						esp++;
					}
					else
					{
						if(poema[i] == '.' || poema[i] == ',')
						{
							
							signos++;
							
						}
					}
				}
				
			}
				
		}
		
	}
	
		
		printf("\n\n\n");
		puts(poema);
		
		printf("\n\nCantidad de mayusculas: %d",mayus);
		printf("\nCantidad de minusculas: %d",minus);
	    printf("\nCantidad de vocales: %d",voc);
	    printf("\nCantidad de consonantes: %d",con);
	    printf("\nCantidad de espacios: %d",esp);
	    printf("\nCantidad de digitos: %d",dig);
	    printf("\nCantidad de signos de puntuacion: %d",signos);
	    printf("\nCantidad de caracteres: %d",n);
	
	
	
}
