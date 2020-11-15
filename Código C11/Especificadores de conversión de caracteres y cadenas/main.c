/*
Especificadores de conversión de caracteres y cadenas
*/

#include <stdio.h>

int main(void) {

	char caracter = 'A';  //inicializar caracter
	printf("%c\n", caracter);  //imprime A

	printf("%s\n", "Esto es una cadena de caracteres");  //imprime Esto es una cadena de caracteres

	char cadena[] = "Esto es una cadena";  //inicializar array de cadena de caracteres
	printf("%s\n", cadena);  //imprime Esto es una cadena

	const char* ptrCadena = "Otra cadena de caracteres";  //inicializar puntero de tipo cadena
	printf("%s\n", ptrCadena);  //imprime Otra cadena de caracteres
}