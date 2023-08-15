/*Ejercicio N° 4: Dado el siguiente arreglo A= {5, 4,10,8,2,11,9,1}, se pide:
Ingresar un número por teclado y usando búsqueda común indicar si el elemento se encuentra y
en qué posición está.*/
#include <stdio.h>

int busqueda( int arr[], int  t, int val){
	int i;
	
	for( i = 0; i < t ; i++){
		
		if( arr[i] == val){
			
			return i;
		}
	}
	
	return -1;
}


int main(int argc, char *argv[]) {
	
	int A[]= {5, 4,10,8,2,11,9,1};
	int tam = sizeof(A) / sizeof(A[0]);
	int valor;
	
	printf("\n Ingrese un valor a buscar:");
	scanf("%d",&valor);
	
	
	int bus = busqueda(A,tam,valor);
	
	if( bus != -1){
		printf("\n El valor se encuentra en la posicion %d",bus);
	}else{
		printf("\n Valor no encontrado");
	}
	
	
	return 0;
}

