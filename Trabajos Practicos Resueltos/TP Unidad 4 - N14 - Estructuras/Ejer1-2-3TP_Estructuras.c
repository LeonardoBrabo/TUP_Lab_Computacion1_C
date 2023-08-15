#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define tamanio 5

struct Alumno{
	
	int dni;
	char apellido[20];
	char nombre[20];
	int edad;
	float promedio;

};

void carga(struct Alumno reg[tamanio],int cant){
	int numAlum;
	for( numAlum = 0; numAlum < cant; numAlum++){
		printf("\n\nDATOS ALUMNO %d:",numAlum+1);
		
		printf("\nDNI: ");
		scanf("%d",&reg[numAlum].dni);
		
		printf("\nAPELLIDO: ");
		scanf("%s",&reg[numAlum].apellido);
		
		printf("\nNOMBRE: ");
		scanf("%s",&reg[numAlum].nombre);
		
		printf("\nEDAD: ");
		scanf("%d",&reg[numAlum].edad);
		
		printf("\nPROMEDIO: ");
		scanf("%f",&reg[numAlum].promedio);
		
		printf("\n-------------------------");
		
	}		
}


void mostrar(struct Alumno reg[tamanio],int cant){
	
	int i;
	system("cls");
	
	printf("DNI");
	printf("\t\tApellido");
	printf("\t\tNombre");
	printf("\t\tEdad");
	printf("\t\tPromedio\n");
	
	for(i = 0; i < cant ; i++){
		
		printf("%d",reg[i].dni);
		printf("\t\t%s",reg[i].apellido);
		printf("\t\t%s",reg[i].nombre);
		printf("\t\t%d",reg[i].edad);
		printf("\t\t%.2f\n",reg[i].promedio);
		
	}
	
}

float promedioEdad(struct Alumno reg[tamanio],int cant){
	/*float promedio;*/
	int suma = 0;
	int i;
	
	for( i = 0; i < cant; i++){
		
		suma += reg[i].edad;
		
	}
	/*promedio = suma /cant;*/
	
	return suma / cant; 
}
	
void mayorMenor(struct Alumno reg[tamanio],int cant){
	int edadMayor = 0,edadMenor = 9999;
	int i;
	char nypMayor[50];
	char nypMenor[50];
	
	for( i = 0; i < cant; i++){
		
		if(reg[i].edad > edadMayor){
			edadMayor = reg[i].edad;
			strcpy(nypMayor,reg[i].nombre);
			strcat(nypMayor," ");
			strcat(nypMayor,reg[i].apellido);
		}
		
		if(reg[i].edad < edadMenor){
			edadMenor = reg[i].edad;
			strcpy(nypMenor,reg[i].nombre);
			strcat(nypMenor," ");
			strcat(nypMenor,reg[i].apellido);
		}
		
	}
	
	printf("\nMayor Edad: %d anios de %s",edadMayor,nypMayor);
	printf("\nMenor Edad: %d anios de %s",edadMenor,nypMenor);
	
	
}
	
	
void informe(struct Alumno reg[tamanio],int cant){
	int promMayor = 0, promMenor = 0; /*cantidad mayor o menor de alumnos con 7 o mas o menos*/
	float porPromMay; /*porcentaje de alumnos con promedio mayor e igual a 7*/
	float promPromMenor; /*Promedio de promedios menores a 7*/
	float promGeneral; /*promedio general de los alumnos*/
	float sumaGen = 0;
	int i;
	for( i = 0; i < cant ; i++){
		
		/*contamos la cantidad de  alumnos con prom mayor o igual a 7, caso contrario contamos los de menores*/
		if(reg[i].promedio >= 7)
			promMayor++;
		else{
			promMenor++;
			
		}
		
		sumaGen += reg[i].promedio;
	}
	
	promGeneral = sumaGen / cant;
	
	porPromMay = ((float)promMayor * 100)/cant; /*calculo de porcentaje de promedios mayores a 7*/
	
	promPromMenor =  promMenor / cant; /*calculo de promedio de los promedios menores a 7*/
	
	printf("\nPromedio general de los alumnos: %.2f",promGeneral);
	printf("\nCantidad de alumnos con promedio mayor e igual a 7: %d",promMayor);
	printf("\nCantidad de alumnos con promedio menor a 7: %d",promMenor);
	printf("\nPorcentaje de alumnos con promedio mayor e igual a 7: %.2f",porPromMay);
	printf("\nPromedio de alumnos con promedio menor a 7: %.2f",promPromMenor);
	
}

int main(int argc, char *argv[]) {
	
	struct Alumno alumnos[tamanio];
	int cantidad;
	float p;

	
	printf("\n Ingrese cantidad de alumnos para el registro:");
	scanf("%d",&cantidad);
	
	if(cantidad > 0 && cantidad <= tamanio){
		carga(alumnos,cantidad);
	}else{
		printf("\n La cantidad ingresada esta fuera de rango.");
	}
	
	
	mostrar(alumnos,cantidad);
	
	printf("\nTotal de Alumnos: %d",cantidad);
	
	p = promedioEdad(alumnos,cantidad);
	
	printf("\nPromedio de las edades: %.2f",p);
	
	mayorMenor(alumnos,cantidad);
	
	informe(alumnos,cantidad);
	
	return 0;
}

