#include <stdio.h>
#include <string.h>

struct Artista {
	int dni;
	char nombre[50];
	char apellido[50];
};

struct Exito {
	int dni;
	char titulo[50];
	int genero; // 1=folklore, 2=rock, 3=popular
	int cantidadVendida;
};

struct Final {
	int dni;
	char nombreArtista[50];
	char apellidoArtista[50];
	char titulo[50];
	char genero[20];
	int cantidadVendida;
};

void ordenarArtistas(struct Artista artistas[], int numArtistas) {
	int i, j;
	struct Artista temp;
	
	for (i = 0; i < numArtistas - 1; i++) {
		for (j = 0; j < numArtistas - i - 1; j++) {
			if (artistas[j].dni > artistas[j + 1].dni) {
				temp = artistas[j];
				artistas[j] = artistas[j + 1];
				artistas[j + 1] = temp;
			}
		}
	}
}

void ordenarExitos(struct Exito exitos[], int numExitos) {
	int i, j;
	struct Exito temp;
	
	for (i = 0; i < numExitos - 1; i++) {
		for (j = 0; j < numExitos - i - 1; j++) {
			if (exitos[j].dni > exitos[j + 1].dni) {
				temp = exitos[j];
				exitos[j] = exitos[j + 1];
				exitos[j + 1] = temp;
			}
		}
	}
}

void cargarArregloFinal(struct Artista artistas[], int numArtistas, struct Exito exitos[], int numExitos, struct Final final[], int *numFinal) {
	int i, j;
	
	*numFinal = 0;
	
	for (i = 0; i < numArtistas; i++) {
		for (j = 0; j < numExitos; j++) {
			if (artistas[i].dni == exitos[j].dni) {
				final[*numFinal].dni = artistas[i].dni;
				strcpy(final[*numFinal].nombreArtista, artistas[i].nombre);
				strcpy(final[*numFinal].apellidoArtista, artistas[i].apellido);
				strcpy(final[*numFinal].titulo, exitos[j].titulo);
				
				if (exitos[j].genero == 1) {
					strcpy(final[*numFinal].genero, "folklore");
				} else if (exitos[j].genero == 2) {
					strcpy(final[*numFinal].genero, "rock");
				} else if (exitos[j].genero == 3) {
					strcpy(final[*numFinal].genero, "popular");
				}
				
				final[*numFinal].cantidadVendida = exitos[j].cantidadVendida;
				(*numFinal)++;
			}
		}
	}
}

int main() {
	struct Artista artistas[3] = {
		{123, "Juan", "Perez"},
	{456, "Maria", "Gomez"},
		{789, "Carlos", "Lopez"}
	};
	
	struct Exito exitos[4] = {
		{123, "Cancion 1", 1, 100},
	{456, "Cancion 2", 2, 200},
		{789, "Cancion 3", 3, 300},
	{456, "Cancion 4", 1, 400}
	};
	
	struct Final final[4];
	int numFinal;
	
	ordenarArtistas(artistas, 3);
	ordenarExitos(exitos, 4);
	cargarArregloFinal(artistas, 3, exitos, 4, final, &numFinal);
	
	printf("DNI\tArtista\t\tTitulo\t\tGenero\t\tCantidad Vendida\n");
	printf("--------------------------------------------------------------\n");
	
	for (int i = 0; i < numFinal; i++) {
		printf("%d\t%s %s\t%s\t\t%s\t\t%d\n", final[i].dni, final[i].nombreArtista, final[i].apellidoArtista, final[i].titulo, final[i].genero, final[i].cantidadVendida);
	}
	
	return 0;
}
