/*Se ingresa por teclado la cantidad da agua caida en milimetros día a día durante una semana. 
se pide determinar el dia de mayor lluvia el de menor y el promedio.*/

#include <stdio.h>
#include <conio.h>




int main(int argc, char *argv[]) {
	
	
	
	
	float cantidadAgua, suma, mayor, menor;
	int dia,diaMayor,diaMenor,prim;
	suma = 0; //para calcular el promedio
	prim = 1; //funciona como bandera para saber cuando fue la primera vez que se controla si es mayor o menor.
	dia = 1; //cuenta los dias de la semana en el bucle
 
	
	
	
	while (dia <= 7){
		
		printf("\nDia a Cargar %d",dia);
		printf("\nIngrese la cantidad de agua del día %d: ",dia);
		scanf("%f",&cantidadAgua);
		
		/*Control para asignar el primer valor de comparacion a las variables mayor y menor.*/
		if( prim == 1){
			mayor = cantidadAgua; diaMayor = dia;
			menor = cantidadAgua; diaMenor = dia;
		}
		
		prim = 0; //poniendo a cero la bandera para que no vuelva a entrar al condicional anterior.
		
		suma = suma + cantidadAgua; //sumatoria para obtener el promedio.
	

		/*Bloque de control de Mayor */	
		if(cantidadAgua > mayor){
			mayor = cantidadAgua;
			diaMayor = dia;
		}
		
		/*Bloque de control de Menor*/	
		if(cantidadAgua < menor){
			menor = cantidadAgua;
			diaMenor = dia;
		}
		dia++; // avanzamos de día en el ciclo.
	}
	
	printf("\nEl dia que mas llovio fue el dia: %d",diaMayor);
	printf("\n el dia que menos llovio fue: %d", diaMenor);
	printf("\n El promedio es: %.2f",suma/7);
	
	return 0;
}

