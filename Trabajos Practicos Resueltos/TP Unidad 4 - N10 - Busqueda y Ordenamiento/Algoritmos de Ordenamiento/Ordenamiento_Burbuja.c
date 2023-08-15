#include <stdio.h>

void ordenarBurbuja(int arr[MAX]){ /*orden ascendente*/
	
	int i, j;
	int aux;
	for( i = 0; i <= MAX; i++){
		
		for(j = 0; j < MAX-1; j++){
			
			if(arr[j] > arr[j+1]){
				
				aux = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = aux;
			}
		}
	}
}


int main(int argc, char *argv[]) {
	
	
	
	return 0;
}

