#include <stdio.h>

/*Monospace821 BT font.*/
int main() {
	
	int i , j, suma = 0, cont = 0;
	int num ,contnum = 0;
	int matriz[5][2] = {{0,0},{1,2},{2,4},{3,6},{4,8}};
	
	for(i = 0; i < 5; i++){
		for(j = 0; j < 2; j++){
			
			printf("matriz[%d][%d]= ",i,j);
			printf("%d\t", matriz[i][j]);
			
		}
		
		printf("\n");
	}
	
	printf("\n Ingrese un valor para contar cuantas veces aparece:\n");
	scanf("%d",&num);
	
	
	for(i = 0; i < 5 ; i++){
		for(j  = 0; j < 2; j++){
			
			if(matriz[i][j] == num)  contnum++;
			
			printf("%d  ", matriz[i][j]);
			suma += matriz[i][j];
			cont++;
		}
		
		printf("\n\n");
	} 
	
	printf("\n Suma: %d",suma);
	printf("\n Promedio: %.2f", (float)suma/cont);
	printf("\n cantidad de veces que aparece %d es : %d",num,contnum);
	
	
	
	
	
	
	
	
	return 0;
}

