/*- Cargar en un arreglo los elementos pares de la matriz
-  El arreglo no debe contener elementos repetidos
- Ordenar los elementos del arreglo  de mayor a menor
- Mostrar por pantalla los elementos del arreglo.*/

/*Arreglar y terminar*/

#include <stdio.h>
#define fil 4
#define col 4

void divisiblesEnCuatro( int matrix[fil][col]){
	
	int i, j;
	
	printf("Valores divisibles por cuatro:");
	for( i = 0; i < 4; i++){
		for( j = 0; j < 4; j++){
			
			if( matrix[i][j] % 4 == 0 && matrix[i][j] != 0){
				printf(" %d",matrix[i][j]);
			} 
		}
	}
	
	
}


void elementoPares (int matrix[fil][col]){
	
	int arreglo[10];
	int k = 0, i,j;
	int aux = 0, tamanio = 10;
	int n = 0, t = 0;
	/*carga arreglo con elemento pares- puede contener elementos repetidos*/
	for(i = 0; i < fil; i++){
		for( j = 0;  j < col ; j++){
			if (matrix[i][j] % 2 == 0){
				arreglo[k] = matrix[i][j];
				k++;
			}
		}
	}
	
	/*eliminacion de elementos repetidos en el arreglo:*/
	for(i = 0; i < 10; i++){
		aux++;
		if(arreglo[i] == arreglo[aux]){
			
			/*eliminacion:*/
			
			n = i;
			while(n < tamanio){
				arreglo[t] = arreglo[t+1];
				t++;
				
			}
			
			tamanio--; /*se reduce en 1 el nuevo tamanio del arreglo resultante*/
		}
		
	}
	
	int arregloResultante[tamanio];
	
	/*limpio arreglo*/
	for(i = 0; i < tamanio ; i++){
		
		arregloResultante[i] = arreglo[i];
		
	}
	
	
	
	
}



int main(int argc, char *argv[]) {
	
	int mat[4][4];
	int i = 0, j = 0;
	int cont = 0;
	int pares = 0;
	
	for( i = 0; i < 4; i++){
		for( j = 0; j < 4; j++){
			
			printf("MATRIZ POSICION [%d][%d]:",i,j);
			scanf("%d", &mat[i][j]);
			cont = cont + mat[i][j];
			/*if( mat[i][j] % 2 == 0) pares++;*/
		}
	}
	
	for( i = 0 ; i < 4; i++){
		for( j = 0; j < 4; j++){
			printf(" %d ",mat[i][j]);
		}
		printf("\n");
	}
	
	divisiblesEnCuatro(mat);
	
	elementosPares(mat);
	
	return 0;
}

