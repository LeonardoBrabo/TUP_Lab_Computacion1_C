/*Ejercicio N°2:
Escribir un bucle que calcule la suma de cada tercer entero, comenzando por i=2 (es decir, calcular la suma de 2 + 5 + 8 +
11 + ….. ) para todos los valores de i menores que 100. Usar la sentencia switch para seleccionar el tipo de bucle a
utilizar para realizar el cálculo:
a) Utilizando una instrucción while.
b) Utilizando una instrucción do - while.
c) Utilizando una instrucción for.*/

#include <stdio.h>

int main() {
	
	int i, aux;
	int sum = 0;
	char op;
	
	printf("Este programa calcula la suma de cada tercer estero para valores menores de 100:");
	
	printf("\n a)While");
	printf("\n b)Do-while");
	printf("\n c)for");
	
	printf("\nIngrese la letra de la instruccion quiere utilizar: ");
	scanf(" %c",&op);
	
	switch(op){
	case 'a':
		printf("\n Eligio While:");
		i = 2;
		aux = 2; //igualamos aux con i para que entre la primera vez a la condicion
		while(i < 100){
			
			if(i == aux){ // aux almacena cada tercer numero del anterior desde 2.
				sum += i;  //sumamos cada tercer numero desde 2.
				aux = i+3; //obtenemos el nuevo tercer numero para comparar con los de i.
			}
			i++; //avanzamos al siguiente numero
		}
		printf("\n la suma es: %d",sum);
		break;
		
	case 'b':
		printf("\n Eligio Do-while:");
		
		i = 2;
		do{
			sum += i;
			i = i+3;
		}while(i < 100);
		
		/*Esta es otra forma de hacer tanto para while como para do while*/
		
		printf("\n la suma es: %d",sum);
		break;
		
	case 'c':
		// con for seria la forma más eficiente.
		printf("\n Eligio For:");
		for(i = 2; i < 100; i+=3){
			sum += i;
		}
		
		printf("\n la suma es: %d",sum);
		break;
		
	default:
		printf("\nOpcion no disponible.");
		break;
	}
	
	getchar();
	return 0;
}

