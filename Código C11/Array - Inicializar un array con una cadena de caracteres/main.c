//Array - Inicializar un array con un string (cadena de caracteres)

#include <stdio.h>

int main(void) {

	char cadena[] = "hola";  //Este array estará formado por cuatro elementos y un caracter null de fin de cadena

	for (unsigned int c = 0; c < 5; c++) {
		printf("%c ", cadena[c]);
	}
}