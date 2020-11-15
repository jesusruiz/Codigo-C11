/*
Utilizar variables enteras x e y para especificar el ancho y la precisión del campo utilizados
para mostrar el valor doble 87.4573
*/

#include <stdio.h>

int main(void) {

	int x = 2;
	int y = 4;

	//se utiliza el caracter de especificación * que se sustituye para indicar el numero de las variables
	printf("%*.*f\n", x, y, 87.4573);
}