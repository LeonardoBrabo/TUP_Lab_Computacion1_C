#include <stdio.h>
#include <conio.h>

int main(int argc, char *argv[]) {
	
	char cadena[5] = {'h','o','l','a','\0'};
	int i;
	char cadena2[6] = {'m','u','n','d','o','\0'};
	
	char nombre[10], apellidos[10];
	int contN = 0, contA = 0;
	int j;
	char carac;
	int bandera = 0;
	
	/*muestra caracter por caracter:*/
	
	printf("La cadena es: \n");
	i = 0;
	
	while(i < 5){
		printf("carac %d: %c\n",i,cadena[i]);
		i++;
	}
	
	i = 0;
	while( i < 6){
		printf("carac %d: %c\n",i,cadena2[i]);
		i++;
	}
	
	/*ingreso por secuencia*/
	
	printf("\n Introduce tu nombre: ");
	scanf("%s",&nombre);
	
	printf("\n Introduce tus apellidos: ");
	scanf("%s",&apellidos);
	
	/*muestra por secuencia*/
	
	printf("\n Usted es %s %s",nombre,apellidos);
	
	/*determina la cantidad de vocales que tiene nombre y apellido*/
	i = 0;
	while( i < 10){
		switch(nombre[i]){
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
			contN++;
			break;
		default: break;
		}
		
		i++;
	}
	
	
	j = 0;
	while( j < 10){
		switch(apellidos[j]){
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
			contA++;
			break;
		default: break;
		}
		j++;
	}
	
	printf("\n Cantidad de vocales en el nombre: %d",contN);
	printf("\n Cantidad de vocales en el apellido: %d",contA);
	
	
	
	/*cuantas veces aparece el caracter en el apellido y en el nombre*/
	printf("\n Ingrese un caracter para determinar cuantas veces aparece en el nombre y apellido: ");
	scanf(" %c",&carac);
	contA = 0;
	contN = 0;	
	for(i = 0; i < 10; i++){
		if(nombre[i] == carac) contN++;
		
		if(apellidos[i]== carac) contA++;
	}
	printf("\n La cantidad de veces que aparece %c en %s es : %d",carac,nombre,contN);
	printf("\n La cantidad de veces que aparece %c en %s es : %d",carac,apellidos,contA);
	
	
	/*buscar si la secuancia tiene "ar"*/
	
	for( i = 0; i < 10; i++){
		if(apellidos[i] == 'a' && apellidos[i+1] == 'r') bandera = 1;
	}
	
	if(bandera == 1) printf("\n El apellido contiene 'ar'");
	else printf("\n El apellido no contiene 'ar'");
	
	

	
	getch();

	return 0;
}

