/*Ejercicio N° 2: Realizar el ejercicio usando las funciones
? Ingresar dos cadenas llamadas C1 y C2.
? Mostrar el contenido de C1 y C2.
? Indicar cuál es la cadena más larga.
? Comparar ambas cadenas
? Concatenar una cadena a la cadena más corta.*/

#include <stdio.h>
#include <string.h>




int cadenaMasLarga( char string1[100], char string2[100]){
	
	if( strlen(string1) > strlen(string2) ) 
		return 1; 
	else if ( strlen(string1) < strlen(string2) ) 
		return 2;
	else 
		return 3; /*si son iguales*/
	
}

void compararCadenas (char string1[100], char string2[100]){
	
	int i = strcmp(string1,string2);
	if( i  < 0){
		printf(" la cadena 1 es menor que la cadena 2");
	}else if( i == 0){
		printf("Las cadenas son iguales");
	}else{
		printf("La cadena 1 es mayor que la cadena 2");
	}
	
}

void concatenarMasCorta(char string1[100],char string2[100]){
	
	char string3[100];
	
	printf("\n Ingrese una cadena para concatenar con la mas corta:");
	scanf("%s",&string3);
	
	if(strlen(string1) < strlen(string2)){
		strcat(string1, string3);
		printf("\n%s",string1);
	}else if(strlen(string1) > strlen(string2)){
		strcat(string2, string3);
		printf("\n%s",string2);
	}else{
		printf("\n Ambas son de igual longitud");
	}
	
	
}


int main(int argc, char *argv[]) {
	
	
	char c1[100];
	char c2[100];
	int largo;
	printf("\n Ingrese cadena 1: ");
	printf("\nIngrese cadena:");
	scanf("%s",&c1);
	
	printf("\n Ingrese cadena 2: ");
	printf("\nIngrese cadena:");
	scanf("%s",&c2);
	
	
	printf("\n%s",c1);
	printf("\n%s",c2);
	
	
	
	
	largo = cadenaMasLarga(c1,c2);
	switch(largo){
	case 1: printf("\n La cadena 1 es la mas larga."); break;
	case 2: printf("\n la cadena 2 es la mas larga."); break;
	case 3: printf("\n ambas cadenas son iguales."); break;
	default: break;
	
	}
	
	printf("\n");
	
	compararCadenas(c1,c2);
	
	printf("\n");
	
	concatenarMasCorta(c1,c2);
	
	
	return 0;
}

