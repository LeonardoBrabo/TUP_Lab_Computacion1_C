/*Calcular el total de una factura que un cliente debe pagar en una libreria.
Ingresar por teclado la cantidad de lineas de la factura. Mostrar por pantalla el
total parcial y final*/

#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int cantidalineas, cantlin;
	float total,valor;
		
	printf("\n Ingrese la cantidad de lineas de la factura: ");
	scanf("%d",&cantidalineas);
	
	total = 0; //para obtener la sumatoria total
	cantlin = 1; //representa la primera linea
	while(cantlin <= cantidalineas){
		
		printf("\nIngrese monton del producto %d: ",cantlin);
		scanf("%f",&valor);
		
		total+= valor;  //Acumulador
		
		printf("\ntotal parcial: %.2f",total);	//muestra total parcial
		
		cantlin++;	//avanza de linea.
	}
		printf("\n\n\t---------------------");
		printf("\n\n\n\tTotal Final: %.2f",total); //al salir de bucle muestra el total final.
		printf("\n\n\t---------------------");
	
	
	return 0;
}

