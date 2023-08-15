
/*Eliminar elemento de un arreglo desordenado
link algoritmo explicacion : https://www.youtube.com/watch?v=njPJVd_3e8w*/
#include <stdio.h>


void mostrar(int arr[], int tam){
	int i;
	
	printf("\n[");
	for(i = 0; i < tam-1; i++){
		
		printf(" %d,",arr[i]);
	}
	printf(" %d]\n",arr[i]);
	
}

int main(int argc, char *argv[]) {
	
	int valor;
	int tam;
	int A[] = {6,3,87,2,7,9,3,10};
	tam = sizeof(A) / sizeof(A[0]);
	
	
	mostrar(A,tam);
	
	printf("Ingrese un valor a eliminar del vector:");
	scanf("%d",&valor);

	/*eliminacion*/
	int i;
	int k;
	for(i = 0; i < tam; i++){
		if(A[i] == valor){
			k = i + 1;
			while( k < tam){
				A[k-1] = A[k];
				k++;
			}
			
			tam = tam -1;
			
		}
		
	}
	
	mostrar(A,tam);
	
	
	return 0;
}

