/*Crear un vector de 5 enteros, inicializa el vector en etapa de declaración. Copia los
elementos del vector en otro vector pero en orden inverso, y mostrar por la pantalla
ambos arreglos.*/

#include <stdio.h>
#define MAX 5

void mostrar(int arr[]){
	
	int i;
	for( i = 0; i < MAX; i++){
		printf(" %d",arr[i]);
	}
		
}


void mostrarInverso(int arr[]){
	
	int vecInverso[MAX];
	int i,j= 0;
	for(i = MAX-1; i >= 0; i--){
		vecInverso[j] = arr[i];
		j++;
	}
	
	for( i = 0; i < MAX; i++){
		printf(" %d",vecInverso[i]);
	}
	
}

int main(int argc, char *argv[]) {
	
	int vector[MAX] = {9,8,7,6,5};
	
	printf("\n Vector ingresado:");
	mostrar(vector);
	
	printf("\n Vector Inverso :");
	mostrarInverso(vector);
	
	return 0;
}

