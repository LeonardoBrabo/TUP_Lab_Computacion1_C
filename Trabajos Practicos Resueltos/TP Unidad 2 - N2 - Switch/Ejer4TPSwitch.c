#include <stdio.h>

int main(){

    printf("\n\n....::::::Sistemas de pedidos::::::....");
    printf("\n\t\t1-Bedidas");
    printf("\n\t\t2-Comidas");
    printf("\n\t\t3-Postres");
    printf("\n\t\t4-Salir");
    printf("\n\n...................................");

    int op;
    printf("\nElija una opcion...");
    scanf("%d",&op);

    switch (op)
    {
    case 1:
        printf("\nCoca-cola");
        printf("\nCerveza");
        printf("\nAgua");
        printf("\n\n\n");
        break;
    case 2:
        printf("\nPasta");
        printf("\nPizza");
        printf("\nHamburgesa");
        printf("\n\n\n");
        break;
    case 3:
        printf("\nHelado");
        printf("\nFruta");
        printf("\nGelatina");
        printf("\n\n\n");
        break;
    case 4:

        printf("\nVuelva Pronto.");
        printf("\n\n\n");
        break;
    default:

        printf("\nOpcion no disponible");
        printf("\n\n\n");
        break;
    }

    return 0;
}