#include <stdio.h>

int suma(int a,int b)
{
	return (a+b);
}

int main(int argc, char *argv[]) {
	
	int a,b;
	printf("Ingrese dos numeros para sumarlos:");
	scanf("%d%d",&a,&b);
	
	printf("\n El resultado de la suma es : %d",suma(a,b));
	return 0;
}

