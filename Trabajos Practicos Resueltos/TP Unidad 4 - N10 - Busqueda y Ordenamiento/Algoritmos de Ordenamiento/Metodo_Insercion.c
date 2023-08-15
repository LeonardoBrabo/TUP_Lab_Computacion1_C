/*Ordenamiento por Inserción:
compara cada elemento con el elemento de su izquierda, si el elemento 
es menor que el que tiene a su izquierda se intercambia de lugares

* se comienza a comparar desde el indice 1, porque con el cero, a su izquierda
produce un desbordamiento del arreglo
* Los elementos intercambiados desde el ultimo elemento tratado quedan ordenados.
* link de lectura https://conclase.net/c/orden/insercion */

#include <stdio.h>

void insercion(int arr[], int tam){
	
	int i , j , temp;
	for( i = 1 ; i < tam ; i++){		/*empieza desde el elemento en la pos 1*/
		temp = arr[i];				/*hacemos un resguardo de lo que tienen esa posición*/
		j = i - 1;					/*j se usa para controlar los elementos que tiene a la izquierda del actual*/
		
		/*vamos intercambiando con los valores de la izquierda.*/
		while((j >= 0) && (arr[j] > temp)){		/*el ciclo termina si llegamos al final de la lista o si el elemento controlado es mayor a lo que tienen a su izquierda.*/
			arr[j+1] = arr[j];					
			j--;
		}
		
		arr[j+1] = temp;
	}
}
	
void mostrar(int arr[], int tam){
	int i;
	
	printf("\n[");
	for(i = 0; i < tam-1; i++){
		
		printf(" %d,",arr[i]);
	}
	printf(" %d]\n",arr[i]);
	
}

int main(int argc, char *argv[]) {
	
	int tam;
	
	int A[] = {6,3,87,2,7,9,3,10};
	tam = sizeof(A) / sizeof(A[0]);
	
	mostrar(A,tam);
	insercion(A,tam);
	mostrar(A,tam);
	
	
	
	return 0;
}

