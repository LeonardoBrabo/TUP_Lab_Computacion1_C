/*Escribir un programa que permita introducir por teclado tres números enteros y responda cuantos números son iguales.
 Mostrar los valores por pantalla*/

#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int a,b,c,iguales;
	
	printf("Ingrese valor de a b y c: \n");
	scanf("%d%d%d",&a,&b,&c);
	
	
	if(a == b && a == c && b == c){
		iguales = 3;  //tres son iguales
	}else{
		if(a == b || a == c || b == c){
			iguales = 2;	//2 son iguales
		}else{
			iguales = 0; //todos son distintos
			
		}
	}
	
	
	printf("valor de a = %d \nvalor de b= %d \nvalor de c= %d \nIguales = %d",a,b,c,iguales);
	

	return 0;
}

