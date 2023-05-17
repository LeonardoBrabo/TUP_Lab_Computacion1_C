/*Ejercicio N° 2: Escribir un programa que resuelva el enunciado
Los padres de una niña le prometieron darle 10 dólares cuando cumpliera 12 años de edad y duplicar el regalo
en cada cumpleaños subsiguiente hasta que el regalo excediera 1000 dólares. Escriba un programa para
determinar qué edad tendrá la niña cuando se le dé la última cantidad y la cantidad total recibida.*/

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

