/*Ejercicio N° 3: Dado el siguiente arreglo A= {1,4,6,6,8,10,11,11,15,16,16}, se pide:
Ingresar un número por teclado e indicar si el elemento se encuentra, cuantas veces aparece y en
qué posición está.
3.1 Realizar el ejercicio usando búsqueda común.
3.2 Realizar el ejercicio usando búsqueda binaria.,*/

#include <stdio.h>


int main(int argc, char *argv[]) {
	
	int A[] = {1,4,6,6,8,10,11,11,15,16,16};
	int tam = sizeof(A) / sizeof(A[0]); /*Obtenemos la longitud del arreglo.*/
	int i;
	int cont = 0;
	int valor;
	
	printf("\n Ingrese un valor a buscar: ");
	scanf("%d",&valor);
	
	
	/*3.1*/
	printf("\n Con busqueda común:");
	for(i = 0; i < tam ; i++){
		
		if( A[i] == valor ){
			cont++;
			printf("\nValor encontrardo en la posición %d",i);
		}
		
	}
	
	if(cont > 0){
		printf("\nValor encontrado %d veces",cont);
	}else{
		printf("\nValor no encontrado.");
	}
	
	
	/*3.1*/
	printf("\n Con busqueda Binaria: ");

	int bajo = 0, alto = tam - 1;
	int cont2 = 0;
	
	
	while( bajo <= alto){
		
		int medio = (bajo + alto) /2;
		
		if(A[medio] == valor){
			
			cont2++;
			
			/*Buscar más ocurrencias hacia la izquierda*/
			int i = medio - 1;
			while( i >= bajo && A[i] == valor){
				cont2++;
				i--;
			}
			
			/*Buscar más ocurrencias hacia la derecha:*/
			i = medio + 1;
			while( i <= alto && A[i] == valor){
				cont2++;
				i++;
			}
			
			break;
			
		}else if( valor < A[medio]){
			alto = medio - 1;
		}else{
			bajo = medio + 1;
		}
		
	}
	
	if(cont2 == 0) 
		printf("\n Valor no encontrado");
	else{
		printf("\n Valor encontrado en las posicion: ");
		for( i = 0; i < tam ; i++){
			if(A[i] == valor){
				
				printf(" %d", i);
			}
			
		}
		printf("\n Cantidad de veces encontrado el valor: %d",cont2);
	}
	
	return 0;
}

