#include <stdio.h>

int main(){

    float val, aux, deprec, x, n, naux,sum;
    int anual, eleccion;

    eleccion = 0;

    while(eleccion != 4){

        //menu:
        printf("\n\t\tMenu:");
        printf("\n 1-Metodo: Linea recta");
        printf("\n 2-Metodo: Balance doblemente declinante");
        printf("\n 3-Metodo: Suma de los digitos de los anios");
        printf("\n 4-Salir.");
        
        printf("\n\nIngrese opcion: "); scanf("%d",&eleccion);

        //ingreso de valores:
        if(eleccion >0 && eleccion <4){

            printf("\n Ingrese el valor original del objeto: ");
            scanf("%f",&aux);


            printf("\n Ingrese el numero de anios por los que se depreciara el objeto: ");
            scanf("%f",&n); 


        }

        
        anual = 1;  //incializamos el control de los bucles por anios ingresados.


        
        switch (eleccion)
        {
        case 1:
            //Metodo Linea recta.

            deprec = aux/n;
            val = aux - deprec;

            while(anual <= n){

            
                printf("\nAnio: %d",anual);
                printf("\ndepreciacion: %.2f",deprec);
                printf("\nValor del objeto actual: %.2f",val);

                val =  val - deprec;
                anual++;

            }
            break;
        case 2:
            //Metodo balance doblemente declinante.

            val = aux;              
            x = 2/n;                // n debe ser tratado como float para que la division no sea entera y de cero como resultado...

            while(anual <= n){

                deprec = x*val;
                val =  val - deprec;
                printf("\nAnio: %d",anual);
                printf("\ndepreciacion: %.2f",deprec);
                printf("\nValor del objeto actual: %.2f",val);

                anual++;

            }        
            break;
            
        case 3:
            //Metodo de la suma de los dígitos de los años.


             
            val = aux;
            sum = 0;                    //sumatoria de los digitos de 1 a n
            x = 1;                      //reutilizo está variable, la use anteriormente 

            //Ciclo para obtener el denominador del factor de depreciacion.
            while(x <= n){ 
                sum = sum + x;
                x++;
            }


            naux = n;                     // para no modificar n, y mostramos la primera vez el valor de n/sum 
            while(anual <= n){

                deprec = (naux/sum)*aux;
                
                val =  val - deprec;

                printf("\nAnio: %d",anual);
                printf("\ndepreciacion: %.2f",deprec);
                printf("\nValor del objeto actual: %.2f",val);

                naux--;                   // para obtener el proximo numerador (n-1); 
                anual++;                // controla la salida del ciclo.
            }                   
            break;

        case 4:

            //opcion de salir.
            break;  

        default:
            printf("\nError. Valor de opcion no disponible.");
            break;
        }    
    }

    printf("\n\n\t\tPrograma Finalizado.\n\n");

    return 0;
}