/*Se quiere realizar un programa que lea por teclado las 5 notas obtenidas por un alumno
(comprendidas entre 0 y 10). Por pantalla, se debe mostrar todas las notas, la nota media,
la nota más alta que ha sacado y la menor.*/

#include <stdio.h>
#define MAX 5

void cargar(float arr[]){
	int i;
	
	for(i = 0 ; i< MAX; i++){
		
		do{
			
			printf("\n nota %d de %d,Ingrese una nota comprendida entre 0 y 10:",i+1,MAX);
			scanf("%f",&arr[i]);
			
			if(arr[i] < 0 || arr[i] > 10) printf("\n por favor ingrese solo un valor entre 0 y 10\n");
			
			
		}while(arr[i] < 0 || arr[i] > 10);
		
	}
}
	
void mostrar(float arr[]){
	int i;
	
	for(i = 0; i < MAX; i++){
		
		printf("\n nota %d: %.2f.",i+1,arr[i]);
	}
	
	
}
	
	
	
float notaMedia(float arr[]){
	
	int i;
	float promedio, suma = 0;
	
	for(i = 0; i < MAX; i++){
		
		suma += arr[i];
		
	}
	
	promedio = suma / MAX;
	
	return promedio;

}

float notaMasAlta(float arr[]){
	float mayor = -1;
	int i;
	
	for( i = 0; i < MAX ; i++){
		
		if(arr[i] > mayor){
			mayor = arr[i];
			
		}
	}

	return mayor;
}
	
	
	
float notaMasBaja(float arr[]){
	
	
	float menor = 11;
	int i;
	for( i = 0; i < MAX ; i++){
		if(arr[i] < menor){
			
			menor = arr[i];
		}
	}
	
	return menor;
}

int main(int argc, char *argv[]) {
	
	float notas[MAX];
	
	printf("\n Ingrese las cinco notas del alumno:");
	cargar(notas);
	
	printf("\nLas notas del alumno son las siguientes:");
	mostrar(notas);
	
	printf("\n el Promedio de las notas es: %.2f",notaMedia(notas));
	
	
	printf("\n La nota mas alta es: %.2f",notaMasAlta(notas));
	
	
	printf("\n La nota mas baja es: %.2f",notaMasBaja(notas));
	
	
	return 0;
}

