#include <stdio.h> /*necesario para utilizar prinft()*/
#include <conio.h> /*necesario para utilizar getch()*/


int main() {
	char p,r;
	printf("ingresar un caracter por teclado: ");
	p= getchar();
	printf("El valor ingresado por teclado es: ");
	putchar(p);
	printf("\n ingresar un caracter por teclado\n");
	scanf("%c",&r);
	printf("El valor ingresado por teclado es: ");
	putchar(r);

	return 0;
}

