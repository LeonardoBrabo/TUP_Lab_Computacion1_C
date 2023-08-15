/*
Ejercicio 2:
Realice un programa en lenguaje C que compruebe si una matriz cuadrada de 3x3 dada es una matriz simétrica. Mostrar la matriz mediante la representación gráfica propia de las matrices. Usar un procedimiento para cargar y mostrar la matriz.
*/

#include <stdio.h>

int iguales(int mat[3][3], int tras[3][3]){
	int i, j;
	for(i = 0; i < 3; i++){
		for(j = 0; j < 3 ; j++){
			
			if(mat[i][j] != tras[i][j])
				return 0;
			
		}
	}	
	return 1;
	
}



void mostrar(int matrix[3][3]){
	int i, j;
	
	for(i = 0; i < 3 ; i++){
		for( j = 0; j < 3 ; j++){
			printf(" %d ",matrix[i][j]);
		}
		printf("\n");
	}	
	
}

int main(int argc, char *argv[]) {
	
	int matriz[3][3];
	int i, j;
	
	printf("\n Ingrese los valores de la matriz:\n");
	for(i = 0; i < 3; i++){
		for( j = 0; j < 3 ; j++){
			
			printf("\n valor del elemento [%d][%d]: ",i,j);
			scanf("%d",&matriz[i][j]);
			
		}
	}
	
	/*traspuesta*/
	int traspuesta[3][3];
	for(i = 0; i < 3; i++){
		for( j = 0; j < 3 ; j++){
			
			traspuesta[j][i] = matriz[i][j];
			
		}
	}
	
	
	printf("\n Matriz Ingresada:\n");
	mostrar(matriz);
	printf("\n Matriz Traspuesta:\n");
	mostrar(traspuesta);
	
	int result = iguales(matriz,traspuesta);
	if( result == 1) printf("\n La Matriz es Simetrica.");
	else printf("\n La Matriz no es Simetrica.");
	
	
	return 0;
}

