
/*Mostrar por pantalla los números pares (de mayor a menor) comprendidos entre 50 y 20. Indicar la cantidad
de números hallados.*/

#include <stdio.h>

int main(){

    int control, cantpares;
    control = 50;  cantpares= 0;
    //colocamos igual para que sea un intervalo cerrado y trate el numero 20 también.
    while(control >= 20){
        if(control % 2 == 0){
            printf("\n%d",control);
            cantpares++;
        } 
        control--; //vamos desminuyendo la variable de control del ciclo, hasta que llegue a 20 y tambien lo trate.
    } 
    printf("\nLa cantidad de numero pares hallados es: %d",cantpares); //mostramos la cantidad de pares inclusive los extremos.


    return 0;
}