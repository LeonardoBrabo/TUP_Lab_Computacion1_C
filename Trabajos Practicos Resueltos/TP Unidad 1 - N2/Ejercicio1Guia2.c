#include <stdio.h> /*necesario para utilizar prinft()*/
#include <conio.h> /*necesario para utilizar getch()*/


int main() {
	
	char caracter;
	int Entero,a,b,c;
	
	
	//Ejer 1 Punto 1: Ingresar un caracter y mostrarlo por pantalla
	printf("Ingrese un caracter: ");
	caracter=getchar();
	printf("\nEl caracter ingresado es: ");
	putchar(caracter);
	
	
	
	//PEjer 1 Punto 2: Ingresar un entero y mostrarlo por pantalla
	printf("\nIngrese un entero: ");
	scanf("%d",&Entero);
	printf("\nEl entero ingresado es: %d",Entero);
	
	
	
	//Ejer 1 Punto 3: Intercarmbiar el valor de los enteros ingresados 
	printf("\nIngrese el valor de A:");
	scanf("%d",&a);
	printf("\nIngrese el valor de B:");
	scanf("%d",&b);
	//Opcion 1: mostrar por pantalla con el orden intercambiado
	printf("\nEl valor de A es: %d y el valor de B es: %d",a,b); 
	printf("\nA: %d, B: %d",b,a);
	//Opcion 2: Intercambio de valores en memoria:
	c = a;
	a = b;
	b = c;
	printf("\nEl valor de A es: %d y el valor de B es: %d",a,b);
	printf("\nA: %d, B: %d",a,b);
	
	
	return 0;
}

