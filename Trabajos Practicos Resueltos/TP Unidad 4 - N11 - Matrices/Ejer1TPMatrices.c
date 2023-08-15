/*Ejercicio N° 1
Dadas dos matrices cuadradas de 3x3,M y N, Se pide
a. Cargar ambas matrices.
b. Comparar ambas matrices e indicar si son iguales. Mostrar ambas matrices.
c. Calcular M+N y mostrar el resultado por pantalla.
d. Calcular M-N y mostrar el resultado por pantalla.
e. Calcular M*N y mostrar el resultado por pantalla*/
#include <stdio.h>
#define FILA 3
#define COLUM 3

void cargar(int matrix[FILA][COLUM]){
	int i, j;

	for(i = 0; i < FILA ; i++){
		for( j = 0; j < COLUM ; j++){
			printf("fila %d columna %d valor: ",i,j);
			scanf("%d",&matrix[i][j]);
		}
	}	
}
	
void mostrar(int matrix[FILA][COLUM]){
	int i, j;
	
	for(i = 0; i < FILA ; i++){
		for( j = 0; j < COLUM ; j++){
			printf(" %d ",matrix[i][j]);
		}
		printf("\n");
	}	
	
}

/*para que dos matrices sean iguales todos sus elementos deben ser iguales.*/
int iguales(int mat1[FILA][COLUM], int mat2[FILA][COLUM]){
	int i, j;
	
	for(i = 0; i < FILA ; i++){
		for( j = 0; j < COLUM ; j++){
			
			if(mat1[i][j] != mat2[i][j]) return 0;
		}
		
	}	
	return 1;
}
	

void sumar( int mat1[FILA][COLUM], int mat2[FILA][COLUM]){
	int suma;
	int i, j;
	
	for(i = 0; i < FILA ; i++){
		for( j = 0; j < COLUM ; j++){
			suma =  mat1[i][j] + mat2[i][j];
			printf(" %d ",suma);
		}
		printf("\n");
	}	
}

	
void restar( int mat1[FILA][COLUM], int mat2[FILA][COLUM]){
	int resta;
	int i, j;
	
	for(i = 0; i < FILA ; i++){
		for( j = 0; j < COLUM ; j++){
			resta =  mat1[i][j] - mat2[i][j];
			printf(" %d ",resta);
		}
		printf("\n");
	}	
}

	/*producto de matrices.
	el numero de columnas de la matriz 1 debe ser igual al numero de filas de la matriz 2.*/
void producto(int mat1[FILA][COLUM], int mat2[FILA][COLUM]){
	int i,j,k;
	int suma;
	
	for (i = 0; i < FILA; i++) {					/*se itera através de cada fila de matriz1*/
		for (j = 0; j < COLUM; j++) { 				/*se itera através de cada columna de matriz2*/
			suma = 0;								/*es donde se almacenará el valor final*/ 
			for (k = 0; k < COLUM; k++) { 			/*k < a columnas de la matriz 1*/
				suma += mat1[i][k] * mat2[k][j];  	/*se acumula en suma*7*/
			}
			/*matrizRes[i][j] = suma;*/
			printf(" %d ",suma);
		}
		printf("\n");
	}
	
}

int main(int argc, char *argv[]) {
	
	int matriz1 [FILA][COLUM];
	int matriz2 [FILA][COLUM];
	
	printf("\n Carga de matriz 1:\n");
	cargar(matriz1);
	printf("\n Carga de matriz 2:\n");
	cargar(matriz2);
	
	int igual = iguales(matriz1,matriz2);
	if( igual == 1) printf("\n Las matrices son iguales\n");
	else printf("\n Las matrices no son iguales\n");
	
	printf("\n MATRIZ 1:\n");
	mostrar(matriz1);
	
	printf("\n MATRIZ 2:\n");
	mostrar(matriz2);
	
	printf("\n CALCULO DE LA SUMA:\n");
	sumar(matriz1,matriz2);
	
	printf("\n CALCULO DE LA RESTA:\n");
	restar(matriz1,matriz2);
	
	printf("\n CALCULO DEL PRODUCTO DE MATRICES:\n");
	producto(matriz1,matriz2);
	
	return 0;
}

