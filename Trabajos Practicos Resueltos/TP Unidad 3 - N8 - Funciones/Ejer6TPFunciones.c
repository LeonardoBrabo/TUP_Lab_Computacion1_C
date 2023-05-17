/*Calcular las raíces reales de una ecuación cuadrática.*/
#include <stdio.h>
#include <math.h>

/*Calculo del discriminante*/
float discriminante(float a, float b, float c){
	
	float discriminante = pow(b,2)- 4 * a * c;
	
	return discriminante;
}


/*analizamos el tipo de ecuacion segun el discriminante*/
 int tipodeEcuacion(float discri){
	
	int tipo;

	if(discri > 0){
		tipo = 1; 		/*1: tiene dos raices reales*/
	}
	else if(discri == 0){
		tipo = 2;		/*2: tiene una sola raiz real*/
	}
	else{	
		tipo =3;		/*3: no tienen raices reales*/
	}
	
	return tipo;
	
}

/*obtenemos la primer raiz*/
 float x1(float a, float b, float discriminante){
	
	float raiz = sqrt(discriminante);
	float x1 = (-b + raiz) / (2*a); 
	
	return x1;
 }
 
/*obtenemos la segunda raiz*/
float x2(float a,float b, float discriminante){
	
	float raiz = sqrt(discriminante);
	float x2 = (-b - raiz)/ (2*a);
	
	return x2;
 }

	
int main(int argc, char *argv[]) {
	
	float a,b,c;
	float calculoDiscri;
	float raiz1, raiz2;
	
	printf("\nIngrese el Termino cuadratico a:");
	scanf("%f",&a);
	
	printf("\nIngrese el termino lineal b:");
	scanf("%f",&b);
	
	printf("\nIngrese el termino idependiente c:");
	scanf("%f",&c);
	
	calculoDiscri = discriminante(a,b,c);	/*guardamos el valor del discriminante para ver de que tipo.*/
	
	/*segun el tipo del discriminante, calculamos las raices que sean necesarias y mostramos el mensaje correspondiente.*/
	switch(tipodeEcuacion(calculoDiscri)){
	case 1:
		/*dos raices : caso discriminante positivo*/
		raiz1 = x1(a, b, calculoDiscri);
		raiz2 = x2(a, b, calculoDiscri);
		printf("\nEl discriminante es positico ,la ecuacion cuadratica tiene dos soluciones reales distintas:");
		printf("\n  x1 = %.2f, x2 = %.2f",raiz1,raiz2);
		break;
		
	case 2:
		/*una sola raiz: caso discriminante igual a cero*/
		raiz1 = x1(a,b,calculoDiscri);
		printf("\nEl Discriminante es igual a cero, la ecuacion cuadratica tiene una solución real.");
		printf("\n x1 = %.2f",raiz1);
		break;
		
	case 3:
		/*ninguna raiz real: caso discriminante negativo*/
		printf("\n El Discriminante es negativo, ninguna de las soluciones son numeros reales.");
		break;
		
	default:
		
		break;
	}
	
	return 0;
}

