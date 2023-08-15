
/*Ejercicio N° 4:
¿Es posible realizar el siguiete programa usando funciones de string?
? Crear una función que reciba una cadena y una letra, y devuelva la cantidad de veces
que dicha letra aparece en la cadena. Por ejemplo, si la cadena es "Barcelona" y la
letra es 'a', debería devolver 2 (aparece 2 veces).*/

#include <stdio.h>

int cantidadDeVeces(char string[100],char letra){
	int i = 0;
	int cont = 0;
	while( string[i] != '\0'){
		
		if(string[i] == letra) cont++;
		i++;
	}
	
	return cont;
	
	
}

int main(int argc, char *argv[]) {
	
	char cad[100];
	char let;
	int c;
	
	printf("\n Ingrese una cadena: ");
	scanf("%s",&cad);
	
	printf("\n ingrese una letra para buscar:");
	scanf(" %c",&let);
	
	c = cantidadDeVeces(cad,let);
	printf("\n La cantidad de veces que aparece la letra %c en %s es : %d",let,cad,c);
	
	
	
	return 0;
}

