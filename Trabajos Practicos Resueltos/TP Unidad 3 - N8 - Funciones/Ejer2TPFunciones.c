#include <stdio.h>
#include <stdlib.h>

char* vocal( char caracter){
	char* mensaje = " ";
	
	switch(caracter){
		case 'a': mensaje = " Vocal a";break;
		case 'e': mensaje = " Vocal e";break;
		case 'i': mensaje = " Vocal i";break;
		case 'o': mensaje = " Vocal o";break;
		case 'u': mensaje = " Vocal u";break;
		default: mensaje = "No es vocal"; break;
	}
	
	return mensaje;
}


int main(int argc, char *argv[]) {
	
	char car;
	
	printf("Ingrese un caracter");
	scanf ("%c",&car);
	
	char* cadena = vocal(car);
	
	printf("%s",cadena);
	free(cadena);
	
	
	
	return 0;
}

