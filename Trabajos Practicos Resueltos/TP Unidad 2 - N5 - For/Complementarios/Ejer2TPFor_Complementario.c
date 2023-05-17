/*
Ejercicio N° 2:
Una empresa de bebidas registró por cada venta efectuada la siguiente información:
- Número de Factura
- Número de Artículo
- Cantidad (en litros)
- Precio Unitario (por litro)
El ingreso de datos finaliza con un número de factura igual a cero. Se pide informar:
a) Total facturado.
b) Cuántos litros del artículo 1 se vendieron en total
c) Cuántas facturas de más de $300.- se emitieron

*/
#include <stdio.h>

int main() {
	
	int numFac, numArt, cantLit, litrosArt1, i, contFac;
	float precioUni, calculo, totalFac;
	
	contFac = 0; //cuenta la cantidad de facturas de mas de $300
	totalFac = 0; // total facturado en el programa
	litrosArt1 = 0; //acumulador de litros del articulo 1.
	
	for(i = 1; i>0;i++){
		printf("\nIngrese numero de factura: ");
		scanf("%d",&numFac);
		
		if(numFac == 0) break; //si el num de factura es cero rompe el ciclo.
		
		printf("\nIngrese numero de artículos:");
		scanf("%d",&numArt);
		
		printf("\nIngrese cantidad de litros: ");
		scanf("%d",&cantLit);

		printf("\nIngrese precio unitario por litro: ");
		scanf("%f",&precioUni);
		
		calculo = cantLit*precioUni; //calculo intermedio por cada factura.
		
		totalFac+= calculo; // acumulador total de las facturas.
		
		if(numArt == 1) litrosArt1+= cantLit; // cuenta los litros de articulo 1.
		
		if( calculo > 300) contFac++; //cuenta las facturas de mas de $300 facturado
		
		//muestra totales intermedios.
		printf("\n\nFactura %d:\nArticulo:%d\nValor de factura $%.2f",numFac,numArt,calculo);
		printf("\n--------------------\n");
		
	}
	
	printf("\nTotal facturado: %.2f",totalFac);
	printf("\nListros del articulo 1 que se vendieron en total: %d",litrosArt1);
	printf("\nCantidad de facturas de más de $300 : %d",contFac);
	
	getchar();
	return 0;
}


