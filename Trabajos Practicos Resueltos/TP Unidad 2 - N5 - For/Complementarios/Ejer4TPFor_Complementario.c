/*
Ejercicio N° 4:
Calcular los 15 primeros números de la sucesión de Fibonacci.
*/

#include <stdio.h>

int main() {
		
	int numero;
	int ant = 0;
	int act = 1;
	int sig;
	
	printf("Ingrese cuantos numero de fibonacci quiere visualizar: ");
	scanf("%d",&numero);
	
	printf(" %d %d ",ant,act); // muestro los primeros 2 numero 0 y 1.
	for(int i = 2; i< numero; i++ ){ //comienza el ciclo desde el siguiente numero
		
		sig = ant + act; //obtengo el siguiente numero
		printf("%d ",sig);
		
		ant = act; //actualizo los valores del anterior y del actual.
		act = sig;
		
	}
	
	
	return 0;
}


/*Fn = Fn-2 + Fn-1 El numero siguiente es la suma de los dos numero anteriores.*/

/*0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144,…*/
