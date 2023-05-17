#include <stdio.h>
#include <ctype.h>

int main(int argc, char *argv[]) {
	
	char op;
	int num;
	int sum = 0;
	int cont = 0;
	
	do{
		
		printf("\nIntroduzca un número entero: ");
		scanf("%d",&num);
		
		sum+= num;
		cont++;
		printf("¿Desea introducir otro número <s/n>?: ");
		scanf(" %c",&op);
		op = tolower(op); //si está en mayuscula la N la convierte en minuscula.
		
		
	}while(op != 'n');
	
	
	printf("\n Ha introducido %d número<s>",cont);
	printf("\n La suma de todos ellos es: %d",sum);
	
	return 0;
}

