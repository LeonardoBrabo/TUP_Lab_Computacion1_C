#include <stdio.h>
#include <string.h>
#define DIM 100

int cantVocales(char t[DIM]);

int main(int argc, char *argv[]) {
	
	char texto[DIM] = "Hoy-es-lunes. Hoy-es-el-parcial-de-Laboratorio. Estudio-programacion.";

	int tamanio= strlen(texto);
	int i;
	printf("\n la longitud de la candena es: %d",tamanio);
	
	if( tamanio == DIM-1){ /*se re resta el caracter de fin de cadena \0 */
		printf("\n La longitud de la cadena coincide con la dimension de la cadena.");
	}else{
		printf("\n la longitud de la cadena no coincide con la dimension de la cadena.");
	}
	
	printf("\n");
	for( i = 0; i < strlen(texto)+1; i++){
		
		if(texto[i] == '.'){
			printf("\n");
		}else{
			printf("%c",texto[i]);
		}
		
	}
	
	printf("\n La cantidad de vocales que tiene el texto es: %d",cantVocales(texto));
	
	return 0;
}


int cantVocales(char t[DIM]){
	int cont = 0;
	int i;
	i = 0;
	while( t[i] != '\0'){
		switch(t[i]){
			
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
			cont++;
			break;
		default:
			break;
		}
		
		i++;
	}

	return cont;
}
