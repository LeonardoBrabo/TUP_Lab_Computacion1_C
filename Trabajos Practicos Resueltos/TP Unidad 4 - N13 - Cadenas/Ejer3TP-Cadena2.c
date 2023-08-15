/*Ejercicio N ° 3:
? Escribe un programa que pida tres cadenas al usuario y muestre su longitud (número
de letras). Mostrar el contenido de las cadenas de menor a mayor longitud.*/

#include <stdio.h>
#include <string.h>



int main(int argc, char *argv[]) {
	
	char cad1[100];
	char cad2[100];
	char cad3[100];
	
	int mayor;
	int menor;
	
	char stringmay[100];
	char stringmen[100];
	char stringmed[100];


	
	
	printf("\n Ingrese cadena 1: ");
	scanf("%s",&cad1);
	int l1 = strlen(cad1);
	printf("\nlongitud cadena 1: %d",l1);
	
	mayor = l1;
	menor = l1;
	strcpy(stringmay,cad1);
	strcpy(stringmen,cad1);
	
	
	
	printf("\n Ingrese cadena 2: ");
	scanf("%s",&cad2);
	int l2 = strlen(cad2);
	printf("\nlongitud cadena 2: %d",l2);
	
	if(l2 > mayor){
		mayor = l2;
		strcpy(stringmay,cad2);
		
	}
	
	if(l2 < menor){
		menor = l2;
		strcpy(stringmen,cad2);
		
	}
	
	
	printf("\n Ingrese cadena 3: ");
	scanf("%s",&cad3);
	int l3 = strlen(cad3);
	printf("\nlongitud cadena 3: %d",l3);
	
	
	if( l3 > mayor){
		mayor = l3;
		strcpy(stringmay,cad3);
	}
	
	if(l3 < menor){
		menor = l3;
		strcpy(stringmen,cad3);
	}
	
	/*determinacion del string medio*/
	
	if((strcmp(cad1,stringmen) == 0 || strcmp(cad1,stringmay) == 0 ) && (strcmp(cad2,stringmay) == 0 || strcmp(cad2,stringmen) == 0 )){
		strcpy(stringmed,cad3);
	}else if( (strcmp(cad2,stringmen) == 0 || strcmp(cad2,stringmay) == 0 ) && (strcmp(cad3,stringmay) == 0 || strcmp(cad3,stringmen) == 0 )){
		strcpy(stringmed,cad1);
	}else{
		strcpy(stringmed,cad2);
	}
	

	printf("\n%s",stringmen);
	printf("\n%s",stringmed);
	printf("\n%s",stringmay);
	
	
	
	return 0;
}

