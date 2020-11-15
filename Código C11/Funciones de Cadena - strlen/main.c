/*
Funciones de Cadena - strlen()

La funci�n strlen() toma una cadena como argumento y devuelve el n�mero de caracteres de la cadena; 
el car�cter nulo de terminaci�n no se incluye en la longitud.
*/

#include <stdio.h>
#include <string.h>

int main(void) {

	//inicializar tres punteros de tipo cadena
	const char* cadena1 = "abcdefghijklmnopqrstuvwxyz";
	const char* cadena2 = "cinco";
	const char* cadena3 = "Boston";

	printf("%s\"%s\"%s%u\n%s\"%s\"%s%u\n%s\"%s\"%s%u\n",
		"La longitud de ", cadena1, " es ", strlen(cadena1),
		"La longitud de ", cadena2, " es ", strlen(cadena2),
		"La longitud de ", cadena3, " es ", strlen(cadena3));
}