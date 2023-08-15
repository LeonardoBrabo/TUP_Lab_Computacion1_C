#include<stdio.h>
#include<conio.h>
#include<string.h>
#define dir "D:\\archivo3.dat" //direccion 

FILE*arch; //puntero

struct alumnos
{
    int dni;
    char apellido[20];
    char nombre[20];
    float nota;
};

char finalizar;
struct alumnos alum;
int tot_alum, nota_mayor_igual_6, nota_menor_6;
float notas,nota_alta, nota_baja;
char alum_nota_alta[50];
char alum_nota_baja[50];

void cargar_alumnos(){
    
    arch = fopen(dir,"wb");

    if(arch == NULL) printf("No se puede abrir el archivo");
    
    do{
        printf("\nIngrese DNI: ");
        scanf("%d",&alum.dni);
        printf("Ingrese Apellido: ");
        scanf("%s",&alum.apellido);
        printf("Ingrese Nombre: ");
        scanf("%s",&alum.nombre);
        printf("Ingrese nota: ");
        scanf("%f",&alum.nota);
        printf("\nDesea finalizar?(s/n): ");
        scanf("%s",&finalizar);
        fwrite(&alum,sizeof(alumnos),1,arch);
    }
    while(finalizar == 'n');

    fclose(arch);

    getch();
    
}

void mostrar_resultados(){

    int cont;

    arch = fopen(dir,"rb"); nota_alta = 0; nota_baja = 99; notas = 0; nota_mayor_igual_6 = 0; nota_menor_6 = 0;

    if(arch == NULL) printf("No se puede abrir el archivo");

    printf("\n        DNI                       APELLIDO                          NOMBRE                          NOTA");

   while(!feof(arch))
	{
        // mostramos los datos

		cont=fread(&alum,sizeof(alumnos),1,arch);

		if(cont!=1)
		{
			if(feof(arch)) break;
			else
			{
				printf("No leyo el ultimo registro");
				break;
			}
		}

		printf("\n\t%d\t\t%s\t\t\t\t%s\t\t\t\t%.2f",alum.dni,alum.apellido,alum.nombre,alum.nota);
        
        tot_alum++; notas+=alum.nota;

        if(alum.nota > nota_alta){
            nota_alta = alum.nota;
            strcpy(alum_nota_alta,alum.apellido);
            strcat(alum_nota_alta," ");
            strcat(alum_nota_alta,alum.nombre);
        }

        if(alum.nota < nota_baja){
            nota_baja = alum.nota;
            strcpy(alum_nota_baja,alum.apellido);
            strcat(alum_nota_baja," ");
            strcat(alum_nota_baja,alum.nombre);
        }

        if(alum.nota >= 6){
            nota_mayor_igual_6++;
        }

        if(alum.nota < 6){
            nota_menor_6++;
        }

	}

    fclose(arch);

    printf("\nTotal de alumnos: %d",tot_alum);
    printf("\nAlumno con la nota mas alta: %s", alum_nota_alta);
    printf("\nAlumno con la nota mas baja: %s", alum_nota_baja);
    printf("\nPromedio general de los alumnos: %.2f",(notas/tot_alum));
    printf("\nCantidad de alumnos con nota mayor e igual a 6: %d",nota_mayor_igual_6);
    printf("\nCantidad de alumnos con nota menor a 6: %d",nota_menor_6);
    printf("\nPorcentaje de alumnos con nota mayor e igual a 6: %.2f", (float(nota_mayor_igual_6)*100)/(float(tot_alum)));
    printf("\nPromedio de alumnos con nota menor a 6: %.2f",float(nota_menor_6)/float(tot_alum));

    getch();
    
}

int main(){

	/*archivo3.dat cargado con datos de prueba, si se quiere cambiar descomentar la linea siguiente:*/
    /*cargar_alumnos();*/
    mostrar_resultados();
}

