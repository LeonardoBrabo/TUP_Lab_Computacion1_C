/*Ejercicio N° 3:
Modificar el programa anterior para que calcule la cantidad que recibirá a la edad de 20 años.*/

#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int edad = 12;
	int dineroRec = 10;
	int totalRec = 0;
	
	do{
		edad++;
		dineroRec*= 2;
		totalRec+= dineroRec;
		
	}while(edad < 20);
	
	printf("\nEdad: %d ",edad);
	printf("\nDinero Recibido: %d",dineroRec);
	printf("\nTotal Recibido: %d ",totalRec);
	
	return 0;
}

