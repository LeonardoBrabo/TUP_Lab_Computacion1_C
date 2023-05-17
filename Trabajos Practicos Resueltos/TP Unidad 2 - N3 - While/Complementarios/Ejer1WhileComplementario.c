/*Realizar la operación multiplicacion usando la operación suma.*/
#include <stdio.h>

int main(){

    int numero, multiplicador,producto;

    printf("Ingrese un numero:");
    scanf("%d",&numero);
    printf("\nAhora ingrese el numero por el que lo quiere multiplicar: ");
    scanf("%d",&multiplicador);

    producto = 0;                      //inicializamos el acumulador que contendra la suma total.
    while(multiplicador > 0){           //mientras el numero del multiplicaciones sucesivas sea mayor a cero se ejecuta el ciclo.
        producto+= numero;                 //sumamos por el mismo numero y guardamos los resultados en producto
        multiplicador--;                         //condicion de salida de bucle
    }
    
    printf("\n El producto es: %d",producto);

    return 0;
}