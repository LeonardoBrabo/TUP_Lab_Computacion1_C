#include <stdio.h> /*necesario para utilizar prinft()*/

int main() {
	float a,b,c;
	//se cambiaron las commilas ´´ por las "" en los printf
	printf("\nIngrese los valores para realizar la operacion resta");
	printf("\ningrese el primer valor");
	scanf("%f",&a);
	printf("\ningrese el segundo valor");
	scanf("%f",&b); //cambiamos la variable donde se guardará el segundo valor a (b)
	c=a-b;
	/*Cambiamos el tipo de cadena de %d(que representa un entero) a %f (que representa un dato con punto decimal */
	//ademas usamos %0.2f permitiendo mostrar el resultado con 2 decimales despues de la coma.
	printf("El resultado de la operacion es %0.2f",c); 

	return 0;
}

