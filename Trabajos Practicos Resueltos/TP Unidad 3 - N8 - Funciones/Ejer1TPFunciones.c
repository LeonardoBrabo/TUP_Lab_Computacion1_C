/*Programa 1 - Calcular si un año es Bisiesto.*/

#include <stdio.h>
int bisiesto(int anio){
	
	
	if( anio % 4 == 0 && (anio % 100 != 0 || anio % 400 == 0)){
		
		return 1;
	}else{
		return 0;
	}	
	
}


int main(int argc, char *argv[]) {
	int anio;
	printf("\nIngrese un anio para saber si es bisiesto:");
	scanf("%d",&anio);
	if(bisiesto(anio) == 1) 
		printf("\nEs Bisiesto");
	else
		printf("\nNo es Bisiesto");

	
	getchar();
	return 0;
}

