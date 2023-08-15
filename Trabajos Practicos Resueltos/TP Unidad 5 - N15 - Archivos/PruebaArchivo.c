#include <stdio.h>

int main(int argc, char *argv[]) {
	
	FILE *arch;
	
	arch = fopen("D:\\Mis Cosas Estudio\\Escritorio\\archivo1.dat","w");
	
	char texto[101];
	
	if(arch == NULL){
		printf("\n EL archivo no puede crearse");
	}else{
		
		printf("\n Ingrese cinco nombres separados solo por puntos: ");
		scanf("%s",&texto);
		
		/*fputs(texto,arch);*/ /*escribe lo que contiene la variable en el archivo*/
		
		fwrite(&texto,sizeof(texto),1,arch); /*segunda forma de escribir en un archivo*/
		
	}
	
	
	
	fclose(arch);
	
	/*----------------LECTURA---------------------*/
	
	arch = fopen("C:\\archivo.dat","r");

	if(arch == NULL)
		printf("\n NO se puede abrir el archivo.");
	else{
		printf("\n");
		fread(&texto,sizeof(texto),1,arch);
	}
	
	
	fclose(arch);
	

	return 0;
}

