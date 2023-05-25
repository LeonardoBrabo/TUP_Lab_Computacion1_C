/*• Dados dos arreglos ordenado de mayor a menor sin elementos repetidos de 10
elementos cadauno. Se pide:
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
	
	for( i = 0; i <longitud ; i++){
		
		printf(" %d",arr[i]);
	}
	
}

int main(int argc, char *argv[]) {
	
	int vec1[MAX] = {75,70,60,40,39,37,30,31,27,19};
	int vec2[MAX] ={73,70,69,68,60,55,50,52,51,49};
	int vec3[MAX*2];
	int i = 0, j = 0, k = 0;
	
	
	/*ARREGLAR CON UN CICLO WHILE PRINCIPAL, cuando termina se recorrer los demas, el principal debe ser uno de los de 10 elementos y no el resultante
	y luego termino de completar el arreglo ordenado al salir del while(se controla si termino alguno de los dos.)luego con dos while más se elige
	dependiendo de cual falta por terminar de recorrer.*/
	
	while( ( j < MAX ) && ( k < MAX ) ){
		
		
		if(vec1[j] > vec2[k]){
			
			/*caso en el que el vector1 su elemento es el mayor*/
			vec3[i] = vec1[j];
			j++;
			
		}else if(vec2[k] > vec1[j]){
			
			/*caso en el que el vector2 su elemento es el mayor*/
			vec3[i] = vec2[k];
			k++;
			
		}else{
			
			/*caso en el que son iguales*/
			vec3[i] = vec1[j];
			vec3[i+1]= vec2[k];
			j++;
			k++;
		}
		
		i++;
		
	}
	
	while( j < MAX){
		
		vec3[i] = vec2[j];
		j++;
		i++;
		
	}
	
	while(k < MAX){
		
		vec3[i] = vec2[k];
		k++;
		i++;
	}
	
	
	printf("\n vector 1:");
	mostrar(vec1,MAX);
	printf("\n vector 2:");
	mostrar(vec2,MAX);
	printf("\n el vector ordenado resultante es:");
	mostrar(vec3,MAX*2);
	
	
	return 0;
}

