/*Ejercicio 3 :
Dada un arreglo num�rico de 10 elementos repetidos se pide:
1)	Cargar el arreglo en etapa de declaraci�n.
2)	Ingresar un elemento por pantalla e indicar:
a.	Si se encuentra en el arreglo.
b.	En el caso de que se encuentre el elemento en el arreglo:
i.	Indicar cuantas veces aparece y en qu� posici�n.
c.	En caso de no hallar el elemento emitir el mensaje correspondiente por pantalla.
d.	Para realizar la b�squeda usar una funci�n.
e.	Eliminaci�n: En el caso de que el elemento aparezca m�s de una vez eliminar el que aparece �ltimo. Si aparece una sola vez eliminarlo directamente. 
f.	Usar una funci�n para mostrar por pantalla el arreglo luego de la eliminaci�n.
*/

#include <stdio.h>
#define MAX 10

void busqueda(int arr[MAX], int num){
	int i, encontrado = 0;
	for( i = 0; i < MAX; i++){
		if(arr[i] == num){
			encontrado = 1;
			printf("\n Elemento encontrado en la posicion %d",i);
		}
	}
	
	if(encontrado == 0) printf("\n El valor no se encuentra.");
	
}


int cantidadVeces(int arr[MAX], int num){
	int i, cont = 0;
	for( i = 0; i < MAX; i++){
		if(arr[i] == num){
			cont++;
		}
	}
	return cont;

}
	
	
void mostrar(int arr[], int tam){
	int i;
	
	printf("\n[");
	for(i = 0; i < tam-1; i++){
		
		printf(" %d,",arr[i]);
	}
	printf(" %d]\n",arr[i]);
	
}


int main(int argc, char *argv[]) {
	
	int arr[] = {1,3,6,8,2,2,3,1,10,12};
	int tam = MAX;
	int valor;
	
	printf("\nArreglo:\n");
	mostrar(arr,tam);
	
	printf("\n Ingrese un valor: ");
	scanf("%d",&valor);
	
	
	busqueda(arr,valor);
	
	
	
	int cant = cantidadVeces(arr,valor);
	int i,k;
	int control=0;
	int band = 0;
	/*Eliminaci�n*/
	if(cant > 1){
		
		for(i = 0; i < tam; i++){
			if(arr[i] == valor){
				control++;
				if(control == cant){
					
					k = i + 1;
					while( k < tam){
						arr[k-1] = arr[k];
						k++;
					}
					
					tam = tam -1;
					
				}
				
				
			}
			
		}
		band= 1;
	}else if(cant == 1){
		
		for(i = 0; i < tam; i++){
			if(arr[i] == valor){
				control++;
				if(control == 1){
					k = i + 1;
					while( k < tam){
						arr[k-1] = arr[k];
						k++;
					}
					
					tam = tam -1;
					
				}
				
			}
			
		}
		band = 1;
		
	}else{
		printf("\n El elemento no existe por lo tanto no se puede eliminar.");
	}
	
	if(band == 1){
		printf("\n Arreglo con elemento/s eliminados.");
		mostrar(arr,tam);
	}
	
	
	
	return 0;
}

