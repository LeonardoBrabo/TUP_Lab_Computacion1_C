#include <stdio.h>

void mostrar(int arr[], int tam);

void seleccion(int arr[], int tam);


int main(int argc, char *argv[]) {
	
	int tam;
	
	int A[] = {6,3,87,2,7,9,3,10};
	tam = sizeof(A) / sizeof(A[0]);
	
	mostrar(A,tam);
	seleccion(A,tam);
	mostrar(A,tam);
	
	/*eliminar los elementos repetidos*/
	int i,j, k;
	for( i = 0; i < tam; i++){
		
		
		
	}
	
	
	return 0;
}


void mostrar(int arr[], int tam){
	int i;
	
	printf("\n[");
	for(i = 0; i < tam-1; i++){
		
		printf(" %d,",arr[i]);
	}
	printf(" %d]\n",arr[i]);
	
}
	
void seleccion( int arr[], int tam){
	int i, j;
	int min;
	int temp;
	for( i = 0; i < tam-1; i++){
		
		min = i;	/*definimos como el elemento minimo a i*/
		
		/*buscamos cual es el valor minimo*/
		for(j = i + 1; j < tam; j++){ /*j = i + 1 : comienza a comparar con el siguiente al valor ordenado*/
			
			if( arr[j] < arr[min]){
				min = j;			/*asigna el nuevo menor*/
			}
		}
		
		/*ubicamos el valor minimo en su posición correcta.*/
		temp = arr[i];
		arr[i] = arr[min];
		arr[min] = temp;
	}
	
}
	
