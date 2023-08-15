
/*ingresar por teclado 3 oraciones, cada oracion debe estar separada por un punto y cada palabra separada por un asterisco.
*¿Cuantas palabras tiene cada oración?
*¿Cual es la oracion con mayor cantidad de palabras?
* mostrar las oraciones una debajo de la otra.
* Ingresar un caracter por teclado e indicar la oracion en que mas veces aparece.
* mostrar las oraciones con un procedimiento.

*/
#include <stdio.h>

void mostrarOraciones(char string[200]){
	int i = 0; int ora = 1; 
	printf("\n");
	while(string[i] != '\0'){
		printf("\n Oracion numero %d: ",ora);
		
		while(string[i] != '.' && string[i] != '\0'){
			printf("%c",string[i]);
			i++;
		}
		
		i++; /*salto el punto*/
		printf(".");
		printf("\n");
		ora++;
	}
	
}


int main(int argc, char *argv[]) {
	
	char oraciones[200];
	int i;
	int contOraciones;
	int contPalabras;
	int mayorCant = -1;
	char carac;
	int oracionConMayor;
	int contcarac;
	int mayorContCarac = -1;
	int caracMayor;
	
	i = 0;
	printf("\nIngrese 3 oraciones juntas y las palabras separadas por *:");
	scanf("%s",&oraciones);
	contOraciones = 0;
	
	printf("\n Ingrese un caracter para saber en que oracion aparece mas: ");
	scanf(" %c",&carac);
	
	
	while(contOraciones < 3 && i < 200){
		
		contPalabras = 0;
		contcarac = 0;
		while(oraciones[i] != '.' && i < 200){
			
			
			if(oraciones[i] == carac) contcarac++;
			
			
			
			if(oraciones[i] == '*' || oraciones[i+1] == '.') contPalabras++;
			
			
			i++;
		}
		
		i++; /*avanzo el punto para que entre nuevamente en el segundo while*/
		contOraciones++;
		printf("\n Cantidad de palabras de la oracion %d es %d",contOraciones,contPalabras);
	
		if(contPalabras > mayorCant){
			
			mayorCant = contPalabras;
			oracionConMayor = contOraciones;
		}
		
		if(contcarac > mayorContCarac){
			
			mayorContCarac = contcarac; 
			caracMayor = contOraciones;
			
		}
		
	}
	
	printf("\n La oracion con mayor cantidad de palabras es la oracion: %d",oracionConMayor);
	
	printf("\n La oracion con mayor cantidad del caracter %c es la oracion %d con %d",carac,caracMayor,mayorContCarac);
	
	mostrarOraciones(oraciones);
	
	
	
	return 0;
}

