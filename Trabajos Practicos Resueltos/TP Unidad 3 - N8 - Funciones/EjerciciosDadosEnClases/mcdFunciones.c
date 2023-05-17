/*Crea un programa principal que lea dos n�meros enteros y muestre el mcd
Crear una funci�n que calcule el MCD de dos n�meros por el m�todo de Euclides.
* Se divide el n�mero mayor entre el menor.
* Si la divisi�n es exacta, el divisor es el MCD.
* Si la divisi�n no es exacta, dividimos el divisor entre el resto obtenido y se
continua de esta forma hasta obtener una division exacta, siendo el ultimo divisor el MCD.

MCD(a, b) = MCD(b, a mod b)

*/
#include <stdio.h>

int mcd(int a, int b){
	int resto;
	
	while( b != 0 ){
		resto = a % b; /*se obtiene el resto de la division*/
		a = b;  /* el nuevo dividendo pasa a ser el anterior divisor.*/
		b = resto; /*el resto obtenido pasa a ser el nuevo divisor*/
	}
	
	return a; /*se devuelve el divisor anterior.*/
}

int main(int argc, char *argv[]) {
	
	int n1, n2, resultado;
	
	printf("\n Ingrese primer numero:");
	scanf("%d",&n1);
	
	printf("\n Ingrese segundo numero:");
	scanf("%d",&n2);
	
	resultado = mcd(n1,n2);
	
	printf("\n El MCD entre %d y %d es %d",n1,n2,resultado);
	
	return 0;
}

