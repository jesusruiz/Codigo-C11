//Array - Inicializar un array con una lista de caracteres

#include <stdio.h>

int main(void) {

	char cadena[] = { 'h', 'o', 'l', 'a' };  //Array de 5 elementos: 4 caracteres y un quinto caracter null de fin de cadena

	for (unsigned int c = 0; c < 4; c++) {
		printf("%c", cadena[c]);
	}
}