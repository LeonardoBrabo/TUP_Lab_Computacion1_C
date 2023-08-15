/*Arreglo Ordenado sin elementos repetidos:

Ejercicio N° 1: Dado el siguiente arreglo A= {1,4,6,8,10,11,15,16}, se pide:
Ingresar un número por teclado y usando búsqueda común indicar si el elemento se encuentra y
en qué posición está.*/

#include <stdio.h>

int main(int argc, char *argv[]) {
	
	
	int A[8] = {1,4,6,8,10,11,15,16};
	int bus = 0 , numero;
	int i, pos;
	printf("\n Ingrese un numero a buscar en el arreglo:");
	scanf("%d",&numero);
	
	for( i = 0 ; i < 8; i++){
		
		if (A[i] == numero){
			bus = 1;
			pos = i;
		} 
	}
	
	if(bus == 1){
		printf("\n Elemento existente en la posición %d",pos);
	}else{
		printf("\n El elemento no existe");
	}
	
	return 0;
}

