#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int i = 0, x = 0;
	
	printf(" Cuenta cuantos divisores de 5 hay en un rango de 20 numeros:");
	do{
		printf("\n i= %d %d",i,i%5);
		if( i % 5 == 0){
			x++;
			
			printf(" %d ",x);
		}
		++i;
	}while(i < 20);
	printf("\nx = %d",x);
	
	getchar();
	
	return 0;
}

