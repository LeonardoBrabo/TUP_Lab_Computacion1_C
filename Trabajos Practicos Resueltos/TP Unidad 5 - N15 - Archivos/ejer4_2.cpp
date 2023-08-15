#include<stdio.h>
#include<conio.h>
#include<string.h>
#define a "D:\\Mis Cosas Estudio\\Escritorio\\archivo2.dat" //definimos direccion del archivo

struct registro
{
    int cliente;
    char nombre[20];
    float saldo;
};

int main(){
	
	FILE *arch;
	struct registro reg;
	char seguir;
	
	if((arch = fopen(a,"wb"))== NULL)
		printf("No se pudo abrir el archivo");
	else{
		
		do{
			printf("\nIngrese numero de cliente:");
			scanf("%d",&reg.cliente);
			printf("\nIngrese el nombre:");
			scanf("%s",&reg.nombre);
			printf("\nIngrese saldo:");
			scanf("%f",&reg.saldo);
			
			fwrite(&reg,sizeof(reg),1,arch);
			
			printf("\n Desea terminar? n/s: ");
			scanf("\n%c",&seguir);
			
		}while(seguir == 'n');
	}
	
	fclose(arch);
	
	
	
	getchar();
	
	return 0;
}


	
