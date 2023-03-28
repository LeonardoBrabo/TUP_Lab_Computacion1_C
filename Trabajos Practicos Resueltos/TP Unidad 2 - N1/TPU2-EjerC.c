/*Ingresar dos caracteres por teclado.
 Si son distintos y uno es distinto de a mostrar por pantalla su nombre
  y en caso contrario mostrar su apellido.*/

#include <stdio.h>

int main(int argc, char *argv[]){

    char caracter1;
    char caracter2;

    printf("Ingrese el primer caracter y seguido el segundo:");

    //evitar que c guarde el intro en la variable siguiente:
    //forma 1: agregando %*c ignora el caracter siguiente al ingresado. En este caso el intro.
    //forma 2: agregar un espacio: scanf(" %c",&var)
    
    scanf("%c%*c",&caracter1); 
    scanf("%c",&caracter2);
    printf("Los caracteres ingresados son %c y %c\n",caracter1,caracter2);


    if( caracter1 != caracter2 && caracter1 != 'a' || caracter2 != 'a') 
        printf("Leonardo");
    else
        printf("Brabo");
        
}