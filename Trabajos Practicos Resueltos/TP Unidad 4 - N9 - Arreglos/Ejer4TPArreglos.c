/*Dada un arreglo de 10 números enteros positivos, generar un nuevo vector con aquellos
números que son múltiplos de 3 y otro con el resto de los elementos del vector original.
Mostrar los tres vectores.*/
#include <stdio.h>
#define MAX 10

void mostrar(int arr[], int longitud){
	int i;
	for(i = 0; i < longitud ; i++){
		
		printf(" %d",arr[i]);
	}
	
}


int main(int argc, char *argv[]) {
	
	int contMultiplos = 0, conOtros = 0;
	int multi3[MAX];
	int otrosElem[MAX];
	int vector[MAX] ;
	int i, x= 0, y = 0;
	
	
	printf("ingresar 10 valores al vector:");
	for(i = 0 ; i < MAX; i++){
		
		printf("\n %d de %d -> ingrese valor: ",i+1,MAX);
		scanf("%d",&vector[i]);
	}
	
	
	for(i = 0; i < MAX; i++){
		
		if(vector[i] % 3 == 0 && vector[i] != 0){
			contMultiplos++;
			multi3[x] = vector[i];
			x++; /*avanzo el arreglod e multiplos de tres*/
		}else{
			conOtros++;
			otrosElem[y] = vector[i];
			y++;
		}
	}
	
	printf("\n Vector ingresado :");
	mostrar(vector,MAX);
	
	if(contMultiplos > 0){
		printf("\nEl arreglo con multiplos de tres contiene: ");
		mostrar(multi3,contMultiplos);
	}else{
		printf("\nNo hay elementos multiplo de tres en el vector.");
	}
	
	
	if(conOtros > 0){
		printf("\nEl arreglo con elementos que no sean multipo de 3 contiene:");
		mostrar(otrosElem,conOtros);
	}else{
		printf("\n no hay elementos que no sean multiplo de 3.");
	}
	
	return 0;
}

