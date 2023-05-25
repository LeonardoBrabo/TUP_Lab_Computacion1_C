/*• Dados dos arreglos ordenado de mayor a menor sin elementos repetidos de 10
elementos cada uno. Se pide:
• Generar un nuevo vector ordenado que contenga a ambos vectores. Mostrar el
resultado.
• Mostrar el vector de menor a mayor.*/


/*se comparan entre elementos y el que es el mayor es el que avanza, y el que se copia.
si son iguales se copia uno de los dos y se avanzan mutuamente ambos indices.
cuando termina de recorrerse uno de los vectores hay que continuar copiando los elementos del otro vector
usando un while*/
#include <stdio.h>
#define MAX 10

void mostrar(int arr[],int longitud){
	int i;
	
	for( i = 0; i < longitud ; i++){
		
		printf(" %d",arr[i]);
	}
	
}

int main(int argc, char *argv[]) {
	
	int vec1[MAX] = {75,71,60,40,39,37,31,30,27,19};
	int vec2[MAX] = {73,70,69,68,60,55,52,51,50,49};
	int vec3[MAX*2];
	int i = 0, j = 0, k = 0;
	
	
	
	/*CON UN CICLO WHILE PRINCIPAL, cuando termina se recorrer los demas, el principal debe ser uno de los de 10 elementos y no el resultante
	y luego termino de completar el arreglo ordenado al salir del while(se controla si termino alguno de los dos.)luego con dos while más se elige
	dependiendo de cual falta por terminar de recorrer.*/
	
	while (i < MAX && j < MAX){
		
		if( vec1[i] > vec2[j]){
			
			vec3[k] = vec1[i];
			i++;
		}else if(vec2[j] > vec1[i]){
			
			vec3[k] = vec2[j];
			j++;
			
		}else{ /*cuando dos elementos son iguales comparando ambas lista, queda un numero de direccion en las posiciones finales.*/
			vec3[k] = vec1[i];
			i++;
			j++;
		}
		
		k++;
		
	}
	
	while( i < MAX && k < MAX*2){
		vec3[k] = vec1[i];
		i++;
		k++;
	}
	
	while(j < MAX && k < MAX*2){
		vec3[k] = vec2[j];
		j++;
		k++;
	}
	
	/*para solucionar los espacios vacios si dos elementos son iguales entre las lista y el tamanio se reduce en 1 de la lista resultante*/
	while (k < MAX*2){
		vec3[k] = 0;
		k++;
	}
	
	
	
	
	printf("\n Vector 1: ");
	mostrar(vec1,MAX);
	printf("\n Vector 2: ");
	mostrar(vec2,MAX);
	printf("\n Vector 3 Resultante: ");
	mostrar(vec3,MAX*2);
	
	
	
	
	
	return 0;
}

