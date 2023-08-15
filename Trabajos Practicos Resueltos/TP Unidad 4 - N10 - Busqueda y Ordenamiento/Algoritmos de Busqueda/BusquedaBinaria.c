#include <stdio.h>

int main(int argc, char *argv[]) {
	
	/*Para hacer la busqueda Binaria , previamente el arreglo debe estar ordenado.*/
	
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

