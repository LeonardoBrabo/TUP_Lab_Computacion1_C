#include <stdio.h>

/*el programa crea un estructura y luego crea un registro de nombre amigo con ese formato,
le carga durante la declaracion, el nombre , el apellido , el telefono y la edad y luego lo muestra por pantalla
formateado  en una sola linea.*/

struct estructura_amigo{
	
	char nomnbre[30];
	char apellido[40];
	char telefono[10];
	int edad;
};

struct estructura_amigo amigo = {
		"Juanjo",
		"Lopez",
		"983403367",
		30
};


int main(int argc, char *argv[]) {
	
	printf( "%s tiene ", amigo.apellido );
	printf( "%i años ", amigo.edad );
	printf( "y su teléfono es el %s.\n" , amigo.telefono );
	
	
	return 0;
}

