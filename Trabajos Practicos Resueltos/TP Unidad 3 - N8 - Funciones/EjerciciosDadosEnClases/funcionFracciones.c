/*Crear un programa que muestre el siguiente menú:
- Sumar dos fracciones.
- restar dos fracciones.
- multiplicar dos fracciones.
- dividir dos fracciones.
- salir.*/

#include <stdio.h>

/*usaremos el calculo del mcd para simplificar las fracciones luego de obtenerlas.*/
int mcd(int a, int b){
	int resto;
	
	while( b != 0 ){
		resto = a % b;
		a = b;
		b = resto;
	}
	
	return a;
}

/*En este caso usamos procedimientos, para funciones podriamos devolver el equivalente decimal y luego convertirlo en fraccion
	al pasarlo al bloque principal.*/
void sumar(int a, int b , int c, int d){
	
	int numerador, denominador,x;
	
	if( b == d){  /*fracciones homogeneas*/
		numerador = a + c;
		denominador = b;
	}else{	/*fracciones heterogeneas*/
		
		numerador = a*d + b*c;
		denominador = b*d;
	}
	
	x = mcd(numerador,denominador); /*para simplificar la fraccion.*/ 
	printf("\nes igual a : %d/%d",numerador/x,denominador/x);

}

void restar( int a, int b , int c , int d){
	int numerador, denominador;
	
	if( b == d){  /*fracciones homogeneas*/
		numerador = a - c;
		denominador = b;
	}else{		/*fraccion heterogenea*/
		numerador = a*d - b*c;
		denominador = b*d;
	}
	
	int x = mcd(numerador,denominador); /*para simplificar la fraccion.*/ 
	printf("\nes igual a : %d/%d",numerador/x,denominador/x);
	
}

void multiplicar( int a, int b, int c , int d){
	int numerador, denominador;
	
	numerador = a*c;
	denominador = b*d;
	
	int x = mcd(numerador,denominador); /*para simplificar la fraccion.*/ 
	printf("\nes igual a : %d/%d",numerador/x,denominador/x);
	
}

void dividir( int a , int b, int c, int d){
	int numerador, denominador;
	
	numerador = a*d;
	denominador = b*c;
	
	int x = mcd(numerador,denominador); /*para simplificar la fraccion.*/ 
	printf("\nes igual a : %d/%d",numerador/x,denominador/x);
	
}


int main(int argc, char *argv[]) {
	
	int op, fn1,fd1, fn2,fd2;
	
	do{
	
		printf("\n1-Sumar Fracciones");
		printf("\n2-Restar Fracciones");
		printf("\n3-Multiplicar Fracciones");
		printf("\n4-Dividir");
		printf("\n5-Salir");
		
		printf("\nIngrese opcion: ");
		scanf("%d",&op);
		
		if(op > 0 && op < 5){
			
			printf("\nFraccion 1 Numerador:");
			scanf("%d",&fn1);
			
			printf("\nFraccion 1 Denominador:");
			scanf("%d",&fd1);
			
			printf("\nFraccion 2 Numerador:");
			scanf("%d",&fn2);
			
			printf("\nFraccion 2 Denominador:");
			scanf("%d",&fd2);
			
		}
		
		
		switch(op){
		case 1:
			
			printf("\nLa suma de %d/%d + %d/%d ",fn1,fd1,fn2,fd2);
			sumar(fn1,fd1,fn2,fd2);
			break;
			
		case 2:
			
			printf("\nLa resta de %d/%d - %d/%d",fn1,fd1,fn2,fd2);
			restar(fn1,fd1,fn2,fd2);
			break;
	
		case 3:
			
			printf("\nEl producto de %d/%d * %d/%d",fn1,fd1,fn2,fd2);
			multiplicar(fn1,fd1,fn2,fd2);
			break;
			
		case 4:
			
			printf("\nEl cociente de %d/%d %% %d/%d",fn1,fd1,fn2,fd2);
			dividir(fn1,fd1,fn2,fd2);
			break;
			
		case 5:

			printf("\nPrograma terminado");
			break;
			
		default:
			
			printf("\nOpcion no disponible");
		}
		
		
	}while( op != 5);
	

	return 0;
}

