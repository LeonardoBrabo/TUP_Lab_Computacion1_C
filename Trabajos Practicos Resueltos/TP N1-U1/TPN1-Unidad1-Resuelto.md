# Trabajo Practico N°1- Unidad 1 (Resuelto)
##### Cátedra: Lab de Computación 1- TUP
## Ejercicio 1:
Marcar con una cruz los identificadores válidos. Si no son válidos, explicar por qué.

| Identificador | Validos | Explicación |
|:---:|---|:---:|
| registro1 | **X** |  |
| 1resitro |  | No es válido porque comienza con un número. |
| float |  | No es válido porque es una palabra reservada. |
| Nombre y dirección |  | No es válido porque hay espacios entre palabras y se usa una letra con acénto. |
| e-mail |  | No es valido porque contiene un guión medio. |
|  |  | No es valido porque solo contiene el caracter de espacio en blanco. |
| e_mail | **X** |  |
| $impuesto | **X** |  |
| 1234 |  | No es válido porque comienza con un número. |


------------

## Ejercicio 2:
Completar la siguiente tabla indicando para las siguientes opciones cuales representan la declaración de una constante:

| Opciones | Declaración de Constantes |
|---|---|
| #define cantidad 12 | Es una constante simbólica, es decir no se almacena en memoria |
| const char c= 'y' | Si representa la declaración de una constante. |
| t=4 ¿Se puede escribir de otras formas? Si es así ¿Cuáles pueden ser? | La forma correcta sería: const int t= 4; |
| int a | No representa una constante. |


------------
## Ejercicio 3:
Establecer la relación entre las siguientes funciones y su significado:

| Funciones | Significado |
|---|---|
| gets | Permite la entrada de una cadena de caracteres. |
| scanf | Ninguna de las anteriores.  (permite el ingreso de distintos tipos de datos segun el formato especificado) |
| puts | Permite mostrar por pantalla una cadena de caracteres. |
| printf | Permite mostrar un carácter, un número o una cadena de caracteres por pantalla. |
| putchar | Permite mostrar un carácter por pantalla sin formato. |
| getchar | Permite el ingreso de caracteres sin formato. |

------------
## Ejercicio 5:
###### (así está el conteo en la guia practica)
Establecer la relación entre las siguientes funciones y su significado:

### Expresión 1:
```c
int a,b,c;
a= 3;
b=4;
c=a-b;
printf(“El resultado de la resta es %d”,c);

```
### Expresión 2:
```c
int a,b,c;
a= 3;
b=4;

printf(“El resultado de la resta es %d”,a-b);

```
### Resolución:
Como podemos visualizar en el siguiente código al ejecutarlo, ambas expresiones dan el mismo resultado:
```c
#include <stdio.h> /*necesario para utilizar prinft()*/
#include <conio.h> /*necesario para utilizar getch()*/


int main() {
	int a,b,c,a2,b2;
	a= 3;
	b=4;
	c= a-b;
	printf("El resultado de la resta es %d",c);
	
	a2=3;
	b2=4;
	printf("\n \t\tEl resultado de la resta es %d",a2-b2);
	
	getch();
	
	return 0;
}

```



------------


## Ejercicio 7:
###### (así está el conteo en la guia practica)
Corregir los errores del siguiente programa y luego documentarlo usando comentarios:
```c
#include stdio.h

int main()
{
int a,b,c;
printf(“Ingrese los valores para realizar la operación resta);
printf (“Ingrese el primer valor”);
scanf("%f",&a);
printf (“Ingrese el segundo valor”);
scanf("%f",&a);
c=a-b;
printf(“El resultado de la resta es %d”,c);
return 0;
}

```
### Resolución:
```c
#include <stdio.h> /*necesario para utilizar prinft()*/

int main() {
	float a,b,c;
	//se cambiaron las comillas ´´ por las "" en los printf
	printf("Ingrese los valores para realizar la operacion resta");
	printf("ingrese el primer valor");
	scanf("%f",&a);
	printf("ingrese el segundo valor");
	scanf("%f",&b); //cambiamos la variable donde se guardará el segundo valor a (b)
	c=a-b;
	/*Cambiamos el tipo de cadena de %d(que representa un entero) a %f (que representa un dato con punto decimal */
	//ademas usamos %0.2f permitiendo mostrar el resultado con 2 decimales despues de la coma.
	printf("El resultado de la operacion es %0.2f",c); 

	return 0;
}
```

------------

## Ejercicio 8:
Realice las modificaciones pertinentes en el programa del Ejercicio 7 para que cada mensaje que se muestra por pantalla aparezca uno debajo del otro:
###Resolución:

> Solo es necesario agregar la secuencia de escape \n dentro del texto ingresado en cada printf luego de las primeras comillas dobles

```c
#include <stdio.h>

int main() {
	float a,b,c;
	printf("\nIngrese los valores para realizar la operacion resta:"); // agregamos \n
	printf("\ningrese el primer valor: "); // agregamos \n
	scanf("%f",&a);
	printf("\ningrese el segundo valor: "); // agregamos \n
	scanf("%f",&b);
	c=a-b;
	printf("El resultado de la operacion es %0.2f",c); 

	return 0;
}

```

------------

## Ejercicio Complementario:
Completar la siguiente tabla con el significado de las palabras reservadas en C que correspondan a tipo de datos que debe seleccionar del listado de  abajo:

(imagen de PalabrasRevervadas subir link.)


| Palabras Reservadas | Significado                                                                   |
|---------------------|-------------------------------------------------------------------------------|
| char                | Almacena un caracter. Puede almacenar un valor con signo.                     |
| double              | En punto flotante del doble de tamaño del float.                              |
| float               | En un punto flotante(puede ser una fracción o un entero con exponente)        |
| int                 | Define un valor númerico entero (sin fracción).                               |
| long                | Define un entero con signo, usualmente del doble del tamaño al int.           |
| short               | Guarda numeros enteros con menor capacidad de almacenamiento(y rango) que int |


------------

##### :tw-270c: :tw-1f4bb: *TP resuelto por Leonardo Brabo.*