/*Ejercicio N° 2: Dado el siguiente arreglo A= {1,4,6,8,10,11,15,16}, se pide:
Ingresar un número por teclado e indicar si el elemento se encuentra y en qué posición está
usando búsqueda binaria*/
#include <stdio.h>
#define MAX 8

void mostrarArreglo(int arr[MAX]){
	int i;
	
	printf("\n[");
	for(i = 0; i < MAX-1; i++){
		printf(" %d, ",arr[i]);
	}
	printf(" %d ]\n",arr[i]);
	
}



void ordenarBurbuja(int arr[MAX]){ /*orden ascendente*/
	
	int i, j;
	int aux;
	for( i = 0; i <= MAX; i++){
		
		for(j = 0; j < MAX-1; j++){
			
			if(arr[j] > arr[j+1]){
				
				aux = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = aux;
			}
		}
	}
}
	

int main(int argc, char *argv[]) {
	
	
		
	int A[MAX] = {6,10,1,4,8,16,11,15};
	int numero;
	int izq = 0, der =  MAX - 1;
	int mid = (izq + der) /2;
	
	mostrarArreglo(A);
	
	ordenarBurbuja(A);
	
	mostrarArreglo(A);
	
	printf("\n Ingrese un valor a buscar: ");
	scanf("%d",&numero);
	
	while( izq <= der && numero != A[mid]){
		
		mid = (izq + der) / 2; /*da solo el valor entero*/
		
		if( numero == A[mid]){
			
			printf("\n El valor %d está en la posción %d",A[mid],mid);
				
		/*Si el numero a buscar es menor al numero que está en la posicion del medio, asignamos a la ultima posicion derecha como la anterior al
		la del medio actual, reduciendo la mitad del arreglo donde buscar*/
		}else if( numero < A[mid]){
			
			der = mid - 1;	
			
		}else{
			/*en el caso de que el numero sea mayor al numero que se encuentra en la mitad del arreglo, se asigna el nuevo valor de la izquierda, como la
			posicion siguiente a la mitad actual, reduciendo la busqueda de la mitad inferior del arreglo donde buscar*/
			izq = mid + 1;
		}
		
	}
	
	if(numero != A[mid]) printf("\n Valor no Encontrado.");
	
	
	
	return 0;
}

