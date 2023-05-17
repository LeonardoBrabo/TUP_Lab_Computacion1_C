/*Ejercicio N° 3: Calcular la tabla del 7 de los 10 primeros números enteros. Mostrar los resultados en forma
ascendente uno abajo del otro.*/

#include <stdio.h>
#include <conio.h>

int main() {
	
	int i;
	printf("\nTabla del siete:");
	for(i = 1; i<= 10;i++){
		printf("\n 7x%d : %d",i,i*7);
	}
	
	getchar();
	return 0;
}

