#include <stdio.h> /*necesario para utilizar prinft()*/
#include <conio.h> /*necesario para utilizar getch()*/
#include <math.h> //necesario para utilizar la funcion de potenciacion pow.
#include <stdlib.h> //necesario para usar system(cls)- Limpia la consola.

int main() {
	
	float entero,quinta,mitadquinta,cuadrado,articulo,descuento;
	int cantidad;
	
	//Ejer 2 Punto 1:
	printf("Ingresar un valor entero: ");
	scanf("\n%f",&entero);
	
	quinta= entero/5;
	mitadquinta = quinta/2;
	cuadrado = pow(mitadquinta,2); // se utilizo la funcion pow de la libreria math.h
	
	printf("el entero es: %0.0f",entero);
	printf("\nLa quinta parte del entero es: %0.2f ",quinta); //el %0.2f Indica que corte el decimal en 2 cifras al mostrar por pantalla
	printf("\nLa midad de la quinta parte es %0.2f ",mitadquinta);
	printf("\nEl cuadrado del numero resultante es %0.2f ",cuadrado);
	
	//---------------------------------------------------------------------------
	getch();
	system("cls"); //limpiamos la consola
	
	//Ejer 2 Punto 2:
	printf("Farmacia:");
	printf("\nIngrese Precio de Articulo: ");
	scanf("%f",&articulo);
	printf("\nIngrese cantidad comprada del mismo articulo: ");
	scanf("%d",&cantidad);
	
	//calculamos el descuento
	descuento = ((articulo*cantidad)*15)/100;
	
	
	printf("\nEl precio del articulo unitario es: $%0.2f",articulo);
	printf("\n Cantidad del articulo: %d",cantidad);
	printf("\nPrecio sin descuento: $%0.2f",articulo*cantidad);
	//restamos el valor del descuento a la cantidad total:
	printf("\nEl precio con 15%% de descuento es: $%0.2f",(articulo*cantidad)- descuento); //con %% podemos representar el % en printf
	
	return 0;
}

