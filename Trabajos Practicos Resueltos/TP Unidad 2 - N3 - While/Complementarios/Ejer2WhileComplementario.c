/*Realizar la operación división usando la operación resta.*/
#include <stdio.h>

int main(){

    int correcto,cociente;
    int numero,divisor;
	cociente = 0; //contador
    printf("ingrese un numero: ");
    scanf("%d",&numero);
    printf("\nIngrese un numero como divisor:");
    scanf("%d",&divisor);
    correcto = 0; // lo usamos de bandera 0 seria incorrecto.
    while(correcto == 0){
       
        //control de que el divisor no sea cero.
       if(divisor <= 0){
            printf("\nEl divisor no puede ser cero ni un numero negativo en este caso:");
            printf("\ningrese un numero: ");
            scanf("%d",&numero);
            printf("\nIngrese un numero como divisor:");
            scanf("%d",&divisor);
       }else{
            correcto = 1; // la bandera se pone en 1 para salir del primer ciclo

            //controlamos que es resto sea cero o el resto menor al divisor para salir del bucle
            while(numero > 0 && numero >= divisor){
				cociente++; //es la cantidad de veces que debemos restar para llegar al resto cero o un resto menor al divisor (division entera)
                numero-=divisor; //vamos restando el numero sucesivamente por el divisor hasta llegar a cero o ser menor al divisor.

                
            } 
       }
    }
    
    printf("\nEl cociente es: %d",cociente);
    printf("\nEl resto es: %d",numero);
    
    return 0;
}
