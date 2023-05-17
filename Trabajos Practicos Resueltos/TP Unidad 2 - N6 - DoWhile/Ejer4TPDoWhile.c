/*Ejercicio N° 4:
Escribir un programa que solicite la carga de un valor positivo y nos muestre desde 1 hasta el valor ingresado
de uno en uno. Ejemplo: Si ingresamos 30 se debe mostrar en pantalla los números del 1 al 30.*/

#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int num;
	int i = 1;
	printf("ingrese un numero:");
	scanf("%d",&num);
	
	do{
		printf("%d ",i);
		i++;
	}while(i<=num);
	
	return 0;
}

