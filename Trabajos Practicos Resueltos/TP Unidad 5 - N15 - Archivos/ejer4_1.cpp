#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#define dir "D:\\Mis Cosas Estudio\\Escritorio\\archivo1.txt" // direccion 


FILE*arch; //puntero del archivo

char nombre[50]; 
char nombres[100]; 

int c; 

void cargar_archivo()
{
    arch = fopen(dir,"wt"); // abrimos el archivo

    if((arch) == NULL) printf("Error al abrir el archivo"); //control de errores
    else
    {
        for (int i = 0; i < 5; i++)
        {
            printf("Ingrese nombre: ");
            scanf("%s",&nombre);
            strcat(nombres,nombre);
            strcat(nombres,".");
        }

        fwrite(&nombres, sizeof(nombres),1,arch);//datos del cadena
    }

    fclose(arch);//cerramos el archivo

    getch();

}

//definimos el metodo para mostrar el contenido del archivo
void mostrar_datos(){
    arch = fopen(dir,"rt"); //abrimos el archivo con el modo de lectura

    if(arch = NULL) printf("No se puede abrir el archivo"); 
    else{
        fread(&nombres,sizeof(nombres),1,arch); //leemos el contenido del archivo

        c = strlen(nombres); //tamaño de la cadena

        for (int i = 0; i < c; i++)
        {
            // mostramos los datos

            if(nombres[i] == '.'){
                printf("\n");
            }
            else{
                printf("%c",nombres[i]);
            }
        }
    }

    fclose(arch); //cerramos el archivo.

    getch();
}
int main(){

    //llamamos a los metodos para el funcionamiento del programa
    cargar_archivo();
    mostrar_datos();

    getch();

}
