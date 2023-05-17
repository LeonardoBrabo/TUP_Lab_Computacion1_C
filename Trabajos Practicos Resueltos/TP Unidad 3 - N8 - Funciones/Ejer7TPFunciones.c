/*Determinar la distancia entre dos puntos P y Q (leidos por teclado), con una función cuyo prototipo sea:
float distancia.euclidea (punto P, punto Q);
y que imprima el resultado con una función cuyo prototipo sea
void imprime.distancia (float distancia) ;*/

#include <stdio.h>
#include <math.h>

float distancia_euclidea(float xp , float yp , float xq, float yq){
	
	int cuadrado1 = pow(xq-xp,2);
	int cuadrado2 = pow(yq-yp,2);
	float raiz = sqrt(cuadrado1 + cuadrado2);
	
	return raiz;
}

void imprime_distancia (float distancia){
	
	printf("la Distancia entre el punto p y el punto q es: %.2f",distancia);
	
}


int main(int argc, char *argv[]) {
	
	float x1,y1,x2,y2;
	
	printf("\n ingresa el valor de X del primer punto:");
	scanf("%f",&x1);
	
	printf("\n ingresa el valor de Y del primer punto:");
	scanf("%f",&y1);
	
	printf("\n ingresa el valor de X del segundo punto:");
	scanf("%f",&x2);
	
	printf("\n ingresa el valor Y del segundo punto:");
	scanf("%f",&y2);
	
	
	imprime_distancia(distancia_euclidea(x1,y1,x2,y2));
	
	return 0;
}

