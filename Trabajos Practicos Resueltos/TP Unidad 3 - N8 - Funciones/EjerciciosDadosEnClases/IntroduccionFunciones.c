#include <stdio.h>

int suma(int a,int b);

int main() {
	
	int x,y,z;
	
	menu();
	
	printf("\nIngrese un numero: ");
	scanf("%d",&x);
	
	printf("\nINgrese el segundo numero: ");
	scanf("%d",&y);
	
	/*LLamada a la funcion*/
	z = suma(x,y);
	printf("\n La suma es: %d",z);
	getchar();
	
	printf("\n La resta es: %d",resta(x,y));
	
	return 0;
}

int suma( int a, int b){
	/*Desarrollo de la función*/
	int total;
	total = a+b;
	return total;
}

int resta (int a, int b){
	return a - b;
}

void menu(){
	int op;
	printf("\n Eliga una opcion:");
	printf("\n 1-Suma");
	printf("\n 2-Resta");
	scanf("%d",op);
	
}
