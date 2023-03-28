//Calcular el Perímetro de la circunferencia. Usar DEFINE para PI


#include <stdio.h>
#define PI 3.14

int main(int argc, char *argv[]) {
	
	float diametro;
	printf("Ingrese el diametro de la circunferencia: ");
	scanf("%f",&diametro);
	
	if( diametro > 0){
		
		printf("El perimetro de la circunferencia es:  %.2f",PI*diametro);
		
	}else{
		printf("no se puede calcular el valor del perimetro");
	}
	

	return 0;
}

