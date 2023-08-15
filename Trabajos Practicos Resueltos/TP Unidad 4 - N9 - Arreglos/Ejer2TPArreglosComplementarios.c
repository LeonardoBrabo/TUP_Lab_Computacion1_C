/*/*Ejercicio 2 Complementario Arreglos.
Dado un arreglo de 10 enteros, ingresar dos posiciones diferentes e intercambiar sus
contenidos.
*/

#include <stdio.h>
#define MAX 10

void mostrarArreglo(int a[]){
	int i;
	printf("\n Arreglo: \n");
	for( i = 0; i < MAX; i++){
		printf("%d ",a[i]);
	}
}

int main(int argc, char *argv[]) {
	
	int arr[MAX] = {1,2,3,4,5,6,7,8,9,10};
	int pos1, pos2, aux;
	
	mostrarArreglo(arr);
	
	printf("\n ingrese dos posiciones para intercambiar sus contenidos:");
	printf("\n Posicion 1:");
	scanf("%d",&pos1);
	printf("\n Posicion 2:");
	scanf("%d",&pos2);
	
	if( pos1 >= 0 && pos1 < MAX){
		
		if(pos2 > 0 && pos2 < MAX){
			
			aux = arr[pos1];
			arr[pos1] = arr[pos2];
			arr[pos2] = aux;
			
			printf("\n Arreglo con los valores cambiados de posicion:");
			mostrarArreglo(arr);
			
		}else
		   printf("\n La posicion 2 no existe en el arreglo.");
		
	}else
		printf("\n La posicion 1 no existe en el arreglo.");
	
	
	return 0;
}

