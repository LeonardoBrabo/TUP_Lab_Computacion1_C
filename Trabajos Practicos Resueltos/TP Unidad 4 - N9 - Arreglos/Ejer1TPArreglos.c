/*Realizar un programa que declare tres arreglos, ‘vector1’, ‘vector2’ y ‘vector3’ de cinco
enteros cada uno, pida valores por teclado para ‘vector1’ y ‘vector2’ y calcule
vector3=vector1+vector2. Mostrar los tres arreglos por pantalla.*/

#include <stdio.h>
#define MAX 5

void cargar(int arr[]){
	int i;
	for( i = 0; i < MAX; i++){
		printf("\n %d / %d Ingrese elemento: ",i+1,MAX);
		scanf("%d",&arr[i]);
	}
}
	
	
void mostrar(int arr[]){
	int i;
	
	for(i = 0; i < MAX ; i++){
		printf(" %d",arr[i]);
		
	}
}
	
	


int main(int argc, char *argv[]) {

	int v1[MAX];
	int v2[MAX];
	int v3[MAX];
	int i ;
	
	
	printf("\n ingrese los cinco valores para el vector 1:");
	cargar(v1);
	
	printf("\n ingrese los cinco valores para el vector 2:");
	cargar(v2);
	
	
	for(i = 0; i < MAX; i++){
		v3[i] = v1[i] + v2[i];
	}
	
	printf("\n Suma del vector 1 y el vector 2 = vector 3:");
	mostrar(v3);
	
	
	
	return 0;
}

