#include <stdio.h>
#include <string.h>
#define TAM 5


struct Alumno{
	
	int dni;
	char apellido[50];
	char nombre[50];
	float nota;
};

void mostrar(struct Alumno reg[TAM],int cant);

void cargar(struct Alumno reg[TAM],int cant);

float promedioPromocion(struct Alumno reg[TAM], int cant);


int main(int argc, char *argv[]) {
	
	struct Alumno alumnos[TAM];
	int cantAlumnos;
	int arrNotas[TAM];
	int i;
	int promo = 0, regu = 0, desa = 0;
	printf("\n ingrese cantidad de alumnos a agregar (maximo %d):",TAM);
	scanf("%d",&cantAlumnos);
	
	if(cantAlumnos > 0  && cantAlumnos <= TAM){
		
		cargar(alumnos,cantAlumnos);
		mostrar(alumnos,cantAlumnos);
		
		printf("\n Cantidad de alumnos: %d",cantAlumnos);
		
		/*carga de notas en un arreglo:*/
		for( i = 0; i < cantAlumnos;i++){
			
			arrNotas[i] = alumnos[i].nota;
		}
		
		/*trato del arreglo para obtener totales*/
		for( i = 0; i < cantAlumnos; i++){
			
			if(arrNotas[i] > 6){
				promo++;
			}else if( arrNotas[i] == 6){
				regu++;
			}else{
				desa++;
			}
			
		}
		
		/*calculo de la mayor y la menor nota obtenida*/
		float mayorNota = -1, menorNota = 99;
		char alumnoMayor[50];
		char alumnoMenor[50];
		for( i = 0; i < cantAlumnos; i++){
			
			if(alumnos[i].nota > mayorNota){
				mayorNota = alumnos[i].nota;
				strcpy(alumnoMayor,alumnos[i].apellido);
				strcat(alumnoMayor," ");
				strcat(alumnoMayor, alumnos[i].nombre);
			}
			
			if(alumnos[i].nota < menorNota){
				menorNota = alumnos[i].nota;
				strcpy(alumnoMenor,alumnos[i].apellido);
				strcat(alumnoMenor," ");
				strcat(alumnoMenor, alumnos[i].nombre);
				
				
			}
			
		}
		
		printf("\n Cantidad de alumnos que promocionaron: %d",promo);
		printf("\n Cantidad de alumnos que regularizaron: %d",regu);
		printf("\n Cantidad de alumnos que desaprobaron: %d",desa);
		
		printf("\n Promedio de las notas de los alumnos que promocionaron: %.2f",promedioPromocion(alumnos,cantAlumnos));
		printf("\n La mayor nota obtenida es %.2f del Alumno/a %s",mayorNota,alumnoMayor);
		printf("\n La menor nota obtenida es %.2f del Alumno/a %s",menorNota,alumnoMenor);
		
		
		
		
		
		
	}else{
		printf("\n La cantidade alumnos ingresada es incorrecta o supero el tamanio maximo.");
	}
	
	return 0;
}

void cargar(struct Alumno reg[TAM],int cant){
	int i;
	for(i = 0; i < cant; i++){
		
		printf("\nDATOS ALUMNO NUMERO %d:\n",i+1);
		
		printf("\n DNI: ");
		scanf("%d",&reg[i].dni);
		
		printf("\n APELLIDO: ");
		scanf("%s",&reg[i].apellido);
		
		printf("\n NOMBRE: ");
		scanf("%s",&reg[i].nombre);
		
		printf("\n NOTA: ");
		scanf("%f",&reg[i].nota);
		
	}
	
	
}


void mostrar(struct Alumno reg[TAM],int cant){
	int i;
	
	printf("\nDNI\tApellido\tNombre\tNota\t\n");
	printf("-------------------------------------------\n");
	for( i = 0; i < cant; i++){
		
		printf("%d\t %s\t %s\t %.2f\t ",reg[i].dni,reg[i].nombre,reg[i].apellido,reg[i].nota);
		printf("\n\n");
	}
	
}
	
float promedioPromocion(struct Alumno reg[TAM], int cant){
	int i;
	int suma = 0;
	int contPromocionados = 0;
	for( i = 0; i < cant; i++){
		if( reg[i].nota > 6){
			suma += reg[i].nota;
			contPromocionados++;
		}
		
	}
	
	return (float) suma / contPromocionados;
	
}

	


