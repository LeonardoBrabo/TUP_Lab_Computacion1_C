#include <stdio.h>

int main(){

    int codigo;

    printf("Ingrese codigo: ");
    scanf("%d",&codigo);

    switch (codigo)
    {
    case 111:   
        printf("Elementos de programacion");
        break;
    case 120:
        printf("Sistemas electronicos digitales");
        break;
    case 132:
        printf("Tecnicas de organizacion empresarial");
        break;
    case 402:
        printf("Matematica discreta");
        break;
    case 171:
        printf("Fisica");
        break;
    default:
        printf("\nCodigo no disponible");
        break;
    }

    return 0;
}