/*Ejercicio N° 3:
Calcular el factorial de un número.*/

#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int numero,factorial;
	
	factorial = 1;
	printf("Ingrese un numero:");
	scanf("%d",&numero);
	
	for(int i = 1; i<=numero; i++){
		factorial*=i;
	}
	
	printf("el Factorial del numero es: %d",factorial);
	
	return 0;
}

//5 = 5*4*3*2*1 = 120 
