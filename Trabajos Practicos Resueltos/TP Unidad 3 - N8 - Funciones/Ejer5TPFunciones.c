/*Hacer un programa para que dada una lista de números que finaliza con cero informa cuantos de ellos
eran primos. Usar una función llamada PRIMO que devuelva 1 si el número recibido es primo y 0 si no es
primo.*/
#include <stdio.h>

int primo(int numero){

	if( numero == 0 || numero == 1) return 0;
	for(int i = 2; i < numero; i++){
		
		if(numero % i == 0) return 0;
	}
	
	return 1;

}

int main(int argc, char *argv[]) {
	
	int cont = 0, num = 1, prim;
	
	printf("\n Contador de numeros primos.");
	while(num != 0){
		
		printf("\n Ingrese un numero o cero para terminar de contar:");
		scanf("%d",&num);
		
		prim = primo(num);
		if(prim == 1) cont++;
		
	}
	
	printf("\n Cantidad de numeros primos: %d", cont);
	
	return 0;
}

