/*Ingresar un carácter por teclado e indicar si corresponde a una vocal. Indicar a que vocal
corresponde.*/

#include <stdio.h>

int main(int argc, char *argv[]) {
	char car;
	printf("ingrese un caracter: ");
	car = getchar();
	
	if(car == 'a' ) printf("\n el caracter es la vocal a");
	else if (car == 'e') printf("\n el caracter es la vocal e");
	else if (car == 'i') printf("\n el caracter es la vocal i");
	else if (car == 'o') printf("\n el caracter es la vocal o");
	else if (car == 'u') printf("\n el caracter es la vocal u");
	else	printf("\n no es una vocal");
	
	return 0;
}

