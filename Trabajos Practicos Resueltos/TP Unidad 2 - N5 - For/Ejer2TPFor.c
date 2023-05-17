#include <stdio.h>
#include <conio.h>

int main() {
	
	int num, i ,acum;
	printf("Ingrese el numero: ");
	scanf("%i",&num);
	
	acum = 0;
	
	for(i=1; i < num;i++){
		if(num % i == 0) acum+=i;
	}
	
	if (num == acum) printf("El numero %i es Perfecto",num);
	else printf("El numero %i no es Perfecto",num);
	
	getchar();
	return 0;
}

