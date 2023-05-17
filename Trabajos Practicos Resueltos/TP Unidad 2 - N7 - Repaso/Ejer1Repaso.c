/*Ejercicio N°1: Realizar un programa que pida un número y diga todos sus divisores.*/

#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int num;
	
	printf("\nIngrese un numero:");
	scanf("%d",&num);
	
	printf("\nDivisores de %d: ",num);
	
	for(int i = 1;i<=num;i++){
		if(num % i == 0) printf(" %d ",i);
	}
	
	
	return 0;
}

