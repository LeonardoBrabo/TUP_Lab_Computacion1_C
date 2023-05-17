#include <stdio.h>

int main(int argc, char *argv[]) {
	
	
	int i = 1;
	int numero;
	
	printf("\nMuestra los numero anteriores al ingresado:");
	printf("\n Ingrese un numero:");
	scanf("%d",&numero);

	do{
		printf(" i = %i\n", i);
		i++;
		
	}while(i <= numero);
	
	return 0;
}

