/*Ejercicio N° 4: Modificar el ejercicio anterior para que muestre los resultados en forma descendente uno
abajo del otro.*/

#include <stdio.h>

int main() {
	
	int i;
	
	for(i = 10; i>=1;i--){
		printf("\n 7x%d : %d",i,i*7);
	}
	
	getchar();
	return 0;
}

