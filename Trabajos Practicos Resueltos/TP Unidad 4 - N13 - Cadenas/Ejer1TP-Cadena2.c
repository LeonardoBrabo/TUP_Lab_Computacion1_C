/*Ejercicio N° 1:
En una cadena de 20 caracteres, cargar dos nombres separados por puntos. Usar la función strlen
para saber la cantidad de caracteres que tiene la cadena y completar el resto con el caracter “a.”*/
#include <stdio.h>

int main(int argc, char *argv[]) {
	
	char cadena[20];
	int i;
	int calculo;
	
	
	printf("\n Ingrese dos nombres separados por un punto:");
	scanf("%s",&cadena);
	
	
	printf("\n");
	printf("\n %s",cadena);
	calculo = 20 - strlen(cadena);
	for(i = 0; i < calculo; i++){
		printf("a");
	}
	
	return 0;
}

