/*
Funciones de Búsqueda - Función strcspn()

La función strcspn() determina la longitud de la parte inicial de la cadena en su primer argumento 
que no contiene ningún carácter de la cadena en su segundo argumento.

La función devuelve la longitud del segmento.
*/

#include <stdio.h>
#include <string.h>

int main(void) {

	const char* cadena1 = "El valor es 3.14159";  //inicializar el puntero de tipo cadena
	const char* cadena2 = "1234567890";  //inicializar el puntero de tipo cadena

	printf("%s%s\n%s%s\n\n%s\n%s%u\n",
		"cadena1 = ", cadena1, "cadena2 = ", cadena2,
		"La longitud de la parte inicial de la cadena1",
		"que no contiene caracteres existentes en la cadena2 es de = ",
		strcspn(cadena1, cadena2));
}