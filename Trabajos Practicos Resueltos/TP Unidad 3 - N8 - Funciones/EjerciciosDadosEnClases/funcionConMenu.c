#include <stdio.h>


/*Procedimiento*/
void mostrar_datos(int opcion, int valor){
	
	if(opcion == 1){
		
		printf("\n La suma es: %d",valor);
	}else{
		printf("\n La resta es: %d",valor);
	}
	
}


int suma(int a,int b);

int resta (int a, int b);

int main() {
	
	int x,y,z,op;
	char continuar;
	
	do
	{
		
		printf("\n 1-Suma");
		printf("\n 2-Resta");
		printf("\n Elija una opcion: ");
		scanf("%d",&op);
		
		printf("\nIngrese un numero: ");
		scanf("%d",&x);
		
		printf("\nINgrese el segundo numero: ");
		scanf("%d",&y);
		
		switch(op){
		case 1: 
			z = suma(x,y);
			mostrar_datos(op,z);
			break;
		case 2:
			z = resta(x,y);
			mostrar_datos(op,z);
			break;
		default : 
			printf("\n Opcion no disponible"); 
			break;
		}
		
		printf("\n Continuar? <s/n>");
		scanf(" %c",&continuar);
		
	}while(continuar != 'n');	
	
	return 0;
}

int suma( int a, int b){
	/*Desarrollo de la función*/
	int total;
	total = a+b;
	return total;
}

int resta (int a, int b){
	int resultado;
	resultado = a - b;
	return  resultado;
}




