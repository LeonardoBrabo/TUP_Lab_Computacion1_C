/*Ejercicio N° 5: Modificar el programa 4 para que se ingrese por teclado la tabla que se quiere calcular y la
cantidad de números.*/
#include <stdio.h>

int main() {
	
	int i,j,k;
	
	for(i=1;i<=5;i++){
		printf(" %d \n",i);
		for(j= i; j >= 1; j-=2){
			printf(" %d \n",j);
		}
	}
	
	for(i=3; i> 0; i--){
		for(j = i; j<=i;j++){
			for(k = i; k >= j; k--){
				printf("%d %d %d \n",i,j,k);
			}
		}
	}
	
	return 0;
}

