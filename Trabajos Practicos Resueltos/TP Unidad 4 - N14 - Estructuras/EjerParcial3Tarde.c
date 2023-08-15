#include <stdio.h>
#define DIM 3

struct alumnos{
	int dni;
	char apellido[20];
	char nombre[20];
	float nota;
};


void carga(struct alumnos reg[DIM]){
	int i;
	for( i = 0; i < DIM; i++){
		printf("Alumno %d:",i+1);
		printf("\n-----------");
		printf("\n DNI: ");
		scanf("%d",&reg[i].dni);
		printf("\n APELLIDO: ");
		scanf("%s",&reg[i].apellido);
		printf("\n NOMBRE: ");
		scanf("%s",&reg[i].nombre);
		do{
			printf("\n NOTA: ");
			scanf("%f",&reg[i].nota);
			if(reg[i].nota < 0 || reg[i].nota > 10){
				
				printf("\n Porfavor ingrese una nota correcta de 1 a 10.");
			}
		}while(reg[i].nota < 0 || reg[i].nota > 10);
	}
}

void ordenar(struct alumnos reg[DIM]){
	
	int i, j;
	struct alumnos aux;
	for( i = 0; i <= DIM; i++){
		
		for(j = 0; j < DIM-1; j++){
			
			if(reg[j].dni > reg[j+1].dni){
				
				aux = reg[j];
				reg[j] = reg[j+1];
				reg[j+1] = aux;
			}
		}
	}
}	

void mostrar(struct alumnos reg[DIM]){

	int i;
	printf("\n Notas Alumnos del Primer Parcial\n");
	printf("DNI\t APELLIDO\t NOMBRE\t NOTA\t ");
	printf("\n---------------------------------------\n");
	for( i = 0; i < DIM; i++){
		
		printf("%d\t ",reg[i].dni);
		printf("%s\t ",reg[i].apellido);
		printf("%s\t ",reg[i].nombre);
		printf("%.2f\t ",reg[i].nota);
		printf("\n");
		
	}
	
}
	
void resultado(struct alumnos reg[DIM]){
	int i, contProm = 0, contReg = 0, contDes = 0;
	for(i = 0; i < DIM; i++){
		
		if(reg[i].nota >6){
			contProm++;
		}else if(reg[i].nota == 6){
			contReg++;
		}else{
			contDes++;
		}
	}
	
	printf("\n Total de Alumnos: %d",DIM);
	printf("\n Cantidad de Alumnos que promocionarion el parcial: %d",contProm);
	printf("\n Cantidad de alumnos que regularizaron el parcial: %d",contReg);
	printf("\n Cantidad de alumnos que desaprobaron el parcial: %d",contDes);
	
}
int main(int argc, char *argv[]) {
	
	struct alumnos alumno[DIM];
	
	carga(alumno);
	ordenar(alumno);
	mostrar(alumno);
	resultado(alumno);
	
	
	return 0;
}

