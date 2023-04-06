/*Dados dos numeros donde el primero el ultimo son limites
	de un intervalo, mostrar por pantalla los numeros comprendidos
	entre dicho intervalo. La operacion se realizara una vez comprobado
	que los valores ingresados son correctos
*/
	

#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int min,max,control;

	//igualamos la primera vez para que entre al bucle.
	min = 0; 
	max = 0;
		
	while (min >= max){ // controla que los valores sean ingresados correctamente
	//si se ingresa un valor mayor en min y viceversa o tambien si son iguales, se pedira ingresar nuevamente.
		
		printf("Ingrese el valor minimo del intervalor: ");
		scanf("%d",&min);
		
		printf("Ingrese el valor maximo del intervalo: ");
		scanf("%d",&max);
		
		control = min; //intervalo cerrado -> con extremos ; para intervalo abierto -> sin extremos, le sumamos 1 al min.
		while (control <= max){
		// para intervalo cerrado tiene que ser <= ; para intervalo abierto solo <.
			printf("\nValor: %d",control);
			control++;
		}
		
	}
		
	return 0;
}

