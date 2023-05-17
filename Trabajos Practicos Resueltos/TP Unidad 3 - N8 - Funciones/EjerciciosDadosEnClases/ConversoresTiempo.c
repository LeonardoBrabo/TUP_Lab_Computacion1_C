#include <stdio.h>

int convertir_segundos ( int h, int m , int s){
	int horas, minutos;
	horas = h * 3600;
	minutos = m * 60;
	return  horas + minutos + s;
}

/*Opcion con un procedimiento.*/
void convertir_hms(int segundos){ /*probar como string*/
	int horas, minutos, resto;
	horas = segundos /3600;
	resto = segundos % 3600; /*se obtiene los segundos restantes*/
	minutos = resto / 60;
	segundos = resto % 60;
	
	printf("\nHoras: %d Minutos %d Segundos %d",horas,minutos,segundos);
}
	
/*Opcion con tres funciones*/	
int obtenerHoras(int segundos){
	int horas;
	horas = segundos / 3600;
	return horas;
}
	
int obtenerMinutos(int segundos){
	int resto, minutos;
	resto = segundos % 3600;
	minutos = resto / 60;
	
	return minutos;
}

int obtenerSegundosRestantes(int segundos){
	int resto;
	resto = segundos % 3600;
	segundos = resto % 60;
	
	return segundos;
}

	

int main() {

	int op, hor,min,seg;
	
	printf("\n1-Convertir a Segundos");
	printf("\n2-Convertir a horas-minutos-segundos");
	printf("\n ingrese opcion: ");
	scanf("%d",&op);
	
	
	switch(op){
		
		case 1: 
			printf("\nIngrese horas:");
			scanf("%d",&hor);
			printf("\nIngrese minutos:");
			scanf("%d",&min);
			printf("\nIngrese segundos:");
			scanf("%d",&seg);
			
			printf("\nEn Segundo es: %d",convertir_segundos(hor,min,seg));
			break;
		case 2:
			printf("\nIngrese los segundos a convertir:");
			scanf("%d",&seg);
			convertir_hms(seg);
			printf("\n Horas: %d, Minutos %d, Segundos %d",obtenerHoras(seg),obtenerMinutos(seg),obtenerSegundosRestantes(seg));
			break;
	default:
		printf("\n Opcion no disponible");
		break;
	}
	
	return 0;
	
}



