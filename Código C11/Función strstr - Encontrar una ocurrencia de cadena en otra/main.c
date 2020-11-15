#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define TEXTO_LONG 100  //Longitud m�xima del texto de entrada
#define SUBCADENA_LONG 40  //Longitud m�xima de la subcadena

int main() {

	char texto[TEXTO_LONG];  //Buffer de entrada para la cadena en la que buscaremos la subcadena
	char subcadena[SUBCADENA_LONG];  //Buffer de entrada para la subcadena a buscar

	printf("Introduzca la cadena en la que desea buscar (longitud maxima %d caracteres)\n", TEXTO_LONG);
	gets_s(texto, TEXTO_LONG);

	printf("Introduzca la cadena a buscar (longitud maxima %d caracteres)\n", SUBCADENA_LONG);
	gets_s(subcadena, SUBCADENA_LONG);

	//Convertir ambas cadenas a may�sculas
	for (int i = 0; (texto[i] = (char)toupper(texto[i])) != '\0'; i++);
	for (int i = 0; (subcadena[i] = (char)toupper(subcadena[i])) != '\0'; i++);

	printf("La subcadena %s encontrada en la cadena.\n", 
		  (strstr(texto, subcadena) == NULL) ? "no fue" : "fue");
}