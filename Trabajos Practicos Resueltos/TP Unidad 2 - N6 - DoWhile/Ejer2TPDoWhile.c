/*Ejercicio N� 2: Escribir un programa que resuelva el enunciado
Los padres de una ni�a le prometieron darle 10 d�lares cuando cumpliera 12 a�os de edad y duplicar el regalo
en cada cumplea�os subsiguiente hasta que el regalo excediera 1000 d�lares. Escriba un programa para
determinar qu� edad tendr� la ni�a cuando se le d� la �ltima cantidad y la cantidad total recibida.*/

#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int edad = 12;
	int dineroRec = 10;
	int totalRec = 0;
	
	do{
		edad++;
		dineroRec*= 2;
		totalRec+= dineroRec;
		
	}while(totalRec < 1000);
	
	printf("\nEdad: %d ",edad);
	printf("\nDinero Recibido: %d",dineroRec);
	printf("\nTotal Recibido: %d ",totalRec);
	
	return 0;
}

