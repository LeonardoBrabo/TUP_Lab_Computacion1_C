#include <stdio.h>
#include <stdlib.h>
#define MAX 5

struct datosArtista{
	
	int dni;
	char nombre[50];
	char apellido[50];
};

struct exito{
	int dni;
	char titulo[50];
	int genero;
	int cantVendida;
};

struct salida{
	int dni;
	char nombre[50];
	char apellido[50];
	char titulo[50];
	int genero;
	int cantVendida;
	
};


void ordernarPorDNI(struct datosArtista art[MAX], struct exito exi[MAX], int cantArt, int cantExi);

void cargaSalida(struct datosArtistas art[MAX], struct exito exi[MAX], int cantArt, int cantExi);

int main(int argc, char *argv[]) {
	
	
	struct datosArtista artistas[MAX];
	struct exito exitos[MAX];
	struct salida sal[MAX];
	
	int cantArtistas, cantExitos;
	int i;
	printf("\n defina la cantidad de artistas a cargar (maximo %d):",MAX);
	scanf("%d",&cantArtistas);
	
	if(cantArtistas > 0 && cantArtistas <= MAX){
		
		printf("\n Carga datos artistas:");
		for( i = 0; i < cantArtistas; i++){
			printf("\nArtista numero %d:",i+1);
			printf("\ndni: ");
			scanf("%d",&artistas[i].dni);
			printf("\nNombre: ");
			scanf("%s",&artistas[i].nombre);
			printf("\nApellido: ");
			scanf("%s",&artistas[i].apellido);
		}
		
		
	}else{
		printf("\n Supero el numero maximo de carga.");
	}
	
	printf("\n defina la cantidad de exitos a cargar (maximo %d):",MAX);
	scanf("%d",&cantExitos);
	
	if(cantExitos > 0 && cantExitos <= MAX){
		
		for(i = 0 ; i < cantExitos; i++){
			printf("\n Exito numero %d:",i+1);
			printf("\ndni: ");
			scanf("%d",&exitos[i].dni);
			printf("\nNombre: ");
			scanf("%s",&exitos[i].titulo);
			printf("\nGenero: ");
			scanf("%d",&exitos[i].genero);
			printf("\n Cantidad Vendida: ");
			scanf("%d",&exitos[i].cantVendida);
		}
		
		
	}else{
		printf("\n la cantidad e exitos ingresada esta fuera de rango");
	}
	
	ordernarPorDNI(artistas,exitos,cantArtistas,cantExitos);
	
	return 0;
}


void ordernarPorDNI(struct datosArtista art[MAX], struct exito exi[MAX], int cantArt, int cantExi){
	
	/*ordenamiento por burbuja*/
	int i, j;
	struct datosArtista aux;
	/*ordenamiento artistas*/
	for( i = 0; i <= cantArt; i++){
		
		for(j = 0; j < cantArt-1; j++){
			
			if(art[j].dni > art[j+1].dni){
				
				aux = art[j];
				art[j] = art[j+1];
				art[j+1] = aux;
			}
		}
	}
	
	/*ordenamiento exitos*/
	struct exito aux2;
	for( i = 0; i <= cantExi; i++){
		
		for(j = 0; j < cantExi-1; j++){
			
			if(exi[j].dni > exi[j+1].dni){
				
				aux2 = exi[j];
				exi[j] = exi[j+1];
				exi[j+1] = aux2;
			}
		}
	}
}
	
void cargaSalida(struct datosArtistas art[MAX], struct exito exi[MAX], int cantArt, int cantExi){
	int i = 0, j = 0;
	for( i = 0; i < cantArt; i++){
		for( j = 0; j < cantExi; j++){
			if( art[i].dni == exi[j].dni){
				
				
				
			}
			
		}
		
	}
	
}
	

