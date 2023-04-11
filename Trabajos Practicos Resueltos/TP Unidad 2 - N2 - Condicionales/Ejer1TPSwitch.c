/*Elaborar un programa que indique la correspondencia de un número introducido por el usuario con un mes del año*/

#include <stdio.h>


int main(){



    int numero;

    printf("\nIngrese un numero correspondiente a un mes: ");
    scanf("%d",&numero);

    switch(numero){

        case 1:
            printf("\nEnero.");
            break;
        case 2:
            printf("\nFebrero");
            break;
        case 3:
            printf("\nMarzo");
            break;
        case 4:
            printf("\nAbril");
            break;
        case 5:
            printf("\nMayo");
            break;
        case 6:
            printf("\nJunio");
            break;
        case 7:
            printf("\nJulio");
            break;
        case 8:
            printf("\nAgosto");
            break;
        case 9:
            printf("\nSeptiembre");
            break;
        case 10:
            printf("\nOctubre");
            break;
        case 11:
            printf("\nNoviembre");
            break;
        case 12:
            printf("\nDiciembre");
            break;
        default:
            printf("\nEse numero no esta disponible, ingrese del 1 al 12");
			break;
            
        
    }

    return 0;
}
