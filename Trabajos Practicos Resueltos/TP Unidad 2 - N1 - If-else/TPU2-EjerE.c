/*
Realizar un programa que permita:
• Ingresar por teclado dos números enteros.
• Usar un menú de opciones que permita seleccionar la operación a realizar. Las
operaciones pueden ser:
• Opción 1: Suma
• Opción 2: Resta
• Opción 3: Producto
• Opción 4: División
• Opción 5: Salir
*/

#include <stdio.h>

int main(int argc, char *argv[]) {
	
	float a,b;	
	int op;

	printf("Calculadora:");
	printf("\n\t1-Suma");
	printf("\n\t2-resta");
	printf("\n\t3-producto");
	printf("\n\t4-division");
	printf("\n\t5-salir");

	printf("\ndigite una opcion: ");	
	scanf("%d",&op);

	printf("\nIngrese el primer numero:");
	scanf("%f",&a);
	printf("\nIngrese el segundo numero:");
	scanf("%f",&b);

	switch (op)

	{
	case 1:
		printf("\nEl primer numero es: %.0f y el segundo es %.0f la SUMA es: %.0f",a,b,a+b);
		break;
	case 2:
		printf("\nEl primer numero es: %.0f y el segundo es %.0f la RESTA es: %.0f",a,b,a-b);
		break;
	case 3:
		printf("\nEl primer numero es: %.0f y el segundo es %.0f el producto es: %.0f",a,b,a*b);
		break;
	case 4:
			if(b > 0)
				printf("\nEl primer numero es: %.0f y el segundo es %.0f la DIVISION es: %.0f",a,b,a/b);
			else printf("\nNo se puede devidir con el divisor cero");
		break;
	case 5:
		printf("\nGracias por usar la calculadora, hasta luego!");
		break;
	default:
		printf("\nLa opcion ingresada no existe");
	}
	
	return 0;
}

