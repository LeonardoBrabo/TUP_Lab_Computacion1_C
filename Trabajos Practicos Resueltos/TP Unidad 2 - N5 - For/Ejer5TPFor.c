/*Ejercicio N° 5: Modificar el programa 4 para que se ingrese por teclado la tabla que se quiere calcular y la
cantidad de números.*/
#include <stdio.h>

int main() {
	
	int i,tabla,numero;
	
	printf("Ingrese numero de tabla: ");
	scanf("%d",&tabla);
	
	printf("Ingrese hasta que numero quiere:");
	scanf("%d",&numero);
	
	for(i = 1; i<=numero;i++){
		printf("\n %dx%d : %d",tabla,i,i*tabla);
	}
	
	getchar();
	return 0;
}

