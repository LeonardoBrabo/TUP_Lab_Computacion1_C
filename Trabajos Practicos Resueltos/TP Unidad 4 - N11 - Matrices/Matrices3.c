/*
-Dado un arreglo de 10 elementos cargarlos en una matriz de tres filas y tres columnas.
- calcular la sumatoria de la diagonal principal y secundaria. Mostrar los resultados por pantalla
- Mostrar por pantalla los elementos del arreglo y de la matriz*/

#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int arr [10] = {2,7,8,2,0,9,5,3,8,1};
	
	int mat[3][3];
	
	int i , j,a = 0;
	int sumaP = 0, sumaS  = 0;
	int indiceF = 0, indiceC = 2;
	
	/*cargar el arreglo*/
	for( i = 0; i < 3; i++){
		for( j = 0; j < 3; j++){
			
			mat[i][j] = arr[a];
			a++;
		}
	}
	
	
	printf("\n Matrices cargada: \n");

	for( i = 0; i < 3; i++){
		for( j = 0; j < 3; j++){
			
			printf(" %d", mat[i][j]);
		}
		
		printf("\n\n");
	}
	
	
	printf("\n Arreglo Cargado: ");
	for( i = 0; i < 9; i++){
		printf(" %d",arr[i]);
	}
	
	
	
	/*suma diagonal principal*/
	for( i = 0; i < 3; i++){
		for( j = 0; j < 3; j++){
			
			if(i == j){
				
				sumaP += mat[i][j];
				
			}
		}
	}
	
	printf("\n Suma diagonal principal: %d", sumaP);
	
	/*suma diagonal secundaria*/
	for( i = 0; i < 3; i++){
		for( j = 0; j < 3; j++){
			
			printf("\n indice i: %d - indice j: %d",i,j);
			
			if(i == indiceF && j == indiceC){
				
				printf("\nElemento diagonal secundaria i: %d, j: %d", i,j);
				
				sumaS += mat[i][j];
				
				
				indiceF++;
				indiceC--;
				
			}
			
			
			
		}
	}
	
	printf("\n Suma diagonal secundaria: %d", sumaS);
	
	
	
	
	
	
	return 0;
}

