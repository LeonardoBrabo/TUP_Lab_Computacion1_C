/*Ejercicio 1 Complementario Arreglos:
1. Cargar un arreglo de tipo entero de 10 elementos en etapa de definición. Mostrar el
contenido del arreglo usando la sentecia FOR. Los elementos se deben mostrar uno al lado
del otro separados por dos guiones medio.
a. Al programa anterior agregar la suma de sus elementos. Mostrar el resultado.
Calcular el promedio.
b. Mostrar los elementos que son mayores a la mitad del promedio.
c. Ingresar una posición por teclado e indicar que elemento se encuentra en dicha
posición.
d. Ingresar un valor por teclado e indicar si es un elemento que pertenece al arreglo.*/


#include <stdio.h>
#define MAX 10

void cargarArreglo(int arr[]){
	int i;
	for(i = 0 ; i < MAX;i++){
		printf("\n elemento %d: ",i+1);
		scanf("%d",&arr[i]);
	}
}
	
void mostrarArreglo(int arr[]){
	int i;
	for(i = 0; i < MAX-1; i++){
		printf("%d--",arr[i]);
	}
	printf("%d",arr[i]); /*para que no muestre 2 guiones al final de la lista.*/
}
	
int sumaArreglo (int arr[]){

	int i, suma = 0;
	
	for(i = 0 ; i < MAX ; i++){
		suma += arr[i];
	}

	return suma;	
}
	
float promedio(int suma){

	return suma / MAX;
}	

int main(int argc, char *argv[]) {
	
	int arreglo[MAX];
	int i,j;
	
	printf("\n Carga de un arreglo de 10 posiciones:");
	cargarArreglo(arreglo);
	
	printf("\n El Arreglo cargado es el siguiente: ");
	mostrarArreglo(arreglo);
	
	/*a. Al programa anterior agregar la suma de sus elementos. Mostrar el resultado.
	Calcular el promedio.*/
	
	printf("\n La suma de los valores del arreglo es : %d", sumaArreglo(arreglo));
	
	int suma = sumaArreglo(arreglo);
	printf("\n El promedio de los valores del arreglo es: %.2f", promedio(suma));
	
	
	
	/*b. Mostrar los elementos que son mayores a la mitad del promedio.*/
	
	printf("\n Los elementos que son mayores a la mitad del promedio :");
	
	int mitadProm = promedio(suma) / 2;
	for( i = 0; i < MAX; i++){
		if(arreglo[i] > mitadProm)
			printf("%d ",arreglo[i]);
	}
	
	
	/*c. Ingresar una posición por teclado e indicar que elemento se encuentra en dicha
	posición.*/
	int pos;
	printf("\n Ingrese una posicion para saber que valor contiene en el arreglo: ");
	scanf("%d",&pos);
	
	if(pos > 0 && pos < MAX){
		printf("El valor de la posicion es: %d", arreglo[pos]);
	}else{
		printf("la posición ingresada no existe.");
	}
	
	/*d. Ingresar un valor por teclado e indicar si es un elemento que pertenece al arreglo.*/
	
	/*ordenamos el arreglo:*/
	
	int aux;
	for( i = 1; i <= MAX; i++){ 
		for( j = 0; j < MAX-1; j++){
			if(arreglo[j]> arreglo[j+1]){
				aux = arreglo[j];
				arreglo[j] = arreglo[j+1];
				arreglo[j+1] = aux;
			}
		}
	}
	
	int bus, bajo = 0, alto = MAX-1, central = (bajo+alto)/2;
	printf("\n Introduce un numero a buscar: ");
	scanf("%d",&bus);
	
	/*busqueda binaria:*/
	while( bajo < alto && bus != arreglo[central]){
		if(bus > arreglo[central]){
			bajo = central + 1;
		}else{
			alto = central -1;
		}
		central = (bajo+alto)/2;
	}
	
	if( bus == arreglo[central]){
		printf("\n %d encontrado en el arreglo", bus);
	}else{
		printf("\n %d no existe en el arreglo",bus);
	}
	
	
	
	
	
	return 0;
}

