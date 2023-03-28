#include <stdio.h> /*necesario para utilizar prinft()*/
#include <conio.h> /*necesario para utilizar getch()*/


int main() {
	char p;
	p=getchar(); /**/
	putchar(p);
	printf("\n El caracter ingresado es %c",p);
	getch();
	
	return 0;
}

