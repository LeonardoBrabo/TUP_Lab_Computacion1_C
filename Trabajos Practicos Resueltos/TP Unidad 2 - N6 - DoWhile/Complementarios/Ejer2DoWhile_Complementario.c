#include <stdio.h>
#include <ctype.h>

int main(int argc, char *argv[]) {
	
	char op;
	int num;
	int sum = 0;
	int cont = 0;
	
	do{
		
		printf("\nIntroduzca un n�mero entero: ");
		scanf("%d",&num);
		
		sum+= num;
		cont++;
		printf("�Desea introducir otro n�mero <s/n>?: ");
		scanf(" %c",&op);
		op = tolower(op); //si est� en mayuscula la N la convierte en minuscula.
		
		
	}while(op != 'n');
	
	
	printf("\n Ha introducido %d n�mero<s>",cont);
	printf("\n La suma de todos ellos es: %d",sum);
	
	return 0;
}

