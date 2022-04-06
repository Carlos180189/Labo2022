

#include <stdio.h>
#include <stdlib.h>


int main (void) {
	setbuf(stdout,NULL);// para que me corra el scanf en windows
	int numero;

	printf("Ingrese numero:");

	scanf("%d",&numero);//para ingresar un numero , primero especifico el tipo %d, y luego
	//la direccion de memoria de la vble. con el &
	printf("ingresaste:%d",numero);
	return EXIT_SUCCESS;
}
