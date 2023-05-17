#include <stdio.h>
#include <ctype.h>

int main(){

    char operacion;
    int num1,num2;

    printf("\nCalculadora");
    printf("\nS : Suma");
    printf("\nR : Resta");
    printf("\nM/P : Multiplicacion");
    printf("\nD : Division");

    printf("\nIngrese caracter de operacion S/R/M/D: ");
    scanf("%c",&operacion);

    operacion = toupper(operacion); //convierte en mayuscula si que que no lo esta.

    printf("\nIngrese primer numero:");
    scanf("%d",&num1);

    printf("\nIngrese el segundo numero:");
    scanf("%d",&num2);

    switch (operacion)
    {
    case 'S':
        printf("\nLa suma es: %d ",num1 + num2);
        break;
    case 'R':
        printf("\nLa resta es: %d",num1 - num2);
    case 'M':
    case 'P':
        printf("\nEl producto es: %d",num1*num2);
        break;
    case 'D':
        if(num2 != 0) printf("\nEl cociente es: %d",num1/num2);
        else printf("\nEl divisor no puede ser cero");
    default:
        printf("\nOpcion no disponible");
        break;
    }

    return 0;
}