#include <stdio.h>
#include <math.h>

int cuadrado(int num);

int main(int argc, char *argv[]) {

	int i,resultado;
	for (i=0;i<10;i++)
	{
		resultado = cuadrado(i);
		printf("Cuadrado de %d: %d\n",i,resultado);
	}
	
	
	return 0;
}


int cuadrado(int num){
	int cuad = pow(num,2);
	return cuad;
}
