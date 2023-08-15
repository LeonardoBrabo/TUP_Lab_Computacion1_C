/*Ejercicio N° 5: Dado el siguiente arreglo A= {5, 4,10,8,2,11,9,1,5,11,1}, se pide:
Ingresar un número por teclado y usando búsqueda común indicar si el elemento se encuentra y
en qué posición está.*/

#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int A[] = {5,4,10,8,2,11,9,1,5,11,1};
	int tam = sizeof(A) / sizeof(A[0]);
	int i = 0;
	int valor;
	int encontrado = 0;
	
	
	printf("\n Ingrese un valor a buscar : ");
	scanf("%d",&valor);
	
	while( i < tam && encontrado == 0){
		
		if( A[i] == valor){
			
			printf("\n Valor encontrado en la posicion %d",i);
			encontrado = 1;
		}
		i++;
	}
	
	if(!encontrado) printf("\n Valor no encontrado");
	
	
	return 0;
}

