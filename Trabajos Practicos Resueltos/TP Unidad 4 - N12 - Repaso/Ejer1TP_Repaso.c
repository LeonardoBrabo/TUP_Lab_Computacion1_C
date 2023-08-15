/*Ejercicio 1 :
Realizar un programa que permita usando la sentencia Switch seleccionar la operación a realizar con el arreglo de tipo numérico.  Tener en cuenta los tipos de arreglos que se pueden presentar.
Las operaciones que se pueden realizar son: insertar, eliminar, buscar y ordenar. Estas operaciones se deben realizar mediante una función.
La cantidad de elementos del arreglo se indica mediante DEFINE
Los elementos del arreglo se cargan mediante una sentencia iterativa antes de seleccionar la operación a realizar con el arreglo.
*/
#include <stdio.h>
#define MAX 20

int tam;

void carga(int arr[],int tam){
	int i;
	for( i = 0; i < tam; i++){
		printf("elemento %d: ",(i+1));
		scanf("%d",&arr[i]);
	}
	
}
	
void eliminar(int arr[], int *tam){
	
	/*eliminar*/
	int num; int i;
	int k;
	printf("\n ingrese el valor que quiere eliminar: ");
	scanf("%d",&num);
	
	for( i = 0; i < *tam; i++){
		if(arr[i] == num){
			
			k = i+1;
			while( k < *tam){
				arr[k-1] = arr[k];
				k++;
				
			}
			
			(*tam) = (*tam) - 1;
			
		}
	}
	
}
	
void insertar(int arr[], int *tam){
	/*insertar*/
	int valor;
	printf("\n ingrese el valor que quiere insertar:");
	scanf("%d",&valor);
	
	(*tam) = (*tam) + 1;
	arr[*tam-1] = valor;
	
}
	

void buscar(int arr[], int tam){
	int numero;
	int i;
	int encontrado = 0;

	printf("\n Ingrese el valor que quiere buscar: ");
	scanf("%d",&numero);
	
	for(i = 0; i < tam ; i++){
		
		if(arr[i] == numero){
			encontrado++;;
			printf("\n Elemento encontrado en la posicion %d",i);
		}
		
	}

	if(encontrado == 0){
		printf("\n No se encontró el elemento.");
	}else{
		printf("\n Elemento encontrado %d veces",encontrado);
	}
	
}
	
void ordenar(int arr[],int tam){
	/*ordenamiento por seleccion*/
	int i, j;
	int min;
	int temp;
	for( i = 0; i < tam-1; i++){
		
		min = i;	/*definimos como el elemento minimo a i*/
		
		/*buscamos cual es el valor minimo*/
		for(j = i + 1; j < tam; j++){ /*j = i + 1 : comienza a comparar con el siguiente al valor ordenado*/
			
			if( arr[j] < arr[min]){
				min = j;			/*asigna el nuevo menor*/
			}
		}
		
		/*ubicamos el valor minimo en su posición correcta.*/
		temp = arr[i];
		arr[i] = arr[min];
		arr[min] = temp;
	}
}
	
void mostrar(int arr[], int tam){
	
	int i;
	printf("\n[");
	for( i = 0; i < tam-1 ; i++){
		
		printf(" %d,",arr[i]);
	}
	printf(" %d]\n",arr[i]);
}

int main() {

	int arr[MAX];
	int op;
	
	printf("\n Ingrese tamaño del arreglo maximo10: ");
	scanf("%d",&tam);
	
	printf("\n Cargue el arreglo: \n");
	carga(arr,tam);
	
	printf("\n Arreglo Cargado:\n");
	mostrar(arr,tam);
	
	do{
		printf("\n 1- INSERTAR ELEMENTO");
		printf("\n 2- ELIMINAR ELEMENTO");
		printf("\n 3- BUSCAR ELEMENTO");
		printf("\n 4- ORDENAR VECTOR");
		printf("\n 5- SALIR");
		
		printf("\n ingrese opcion: ");
		scanf("%d",&op);
		
		switch(op){
		case 1:
			if(tam - MAX){
				
				/*insertar elemento*/
				insertar(arr,&tam);
				
				mostrar(arr,tam);
				
			}else{
				printf("\n ya no puede agregar mas elementos.");
			}
			
			break;
		case 2:
			if(tam > 0){
				
				/*eliminar elemento*/
				eliminar(arr,&tam);
				
				mostrar(arr,tam);
				
			}else{
				printf("\n no hay elemento por eliminar");
			}
			
			break;
		
		case 3:
			
			/*buscar*/
			buscar(arr,tam);
			break;
		case 4:
			
			/*ordenar*/
			ordenar(arr,tam);
			
			printf("\n Arreglo Ordenado:\n");
			mostrar(arr,tam);
			break;
			
		case 5:
			
			printf("\n HASTA LUEGO.");
			break;
		default: printf("\n Opcion no disponible."); break;
		}
		
		
	}while(op != 5);
	
	
	
	return 0;
}

