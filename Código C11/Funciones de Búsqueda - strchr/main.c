/*
Funciones de Búsqueda - Función strchr()

La función strchr() busca la primera aparición de un carácter en una cadena. 
Si se encuentra el carácter, la función strchr() devuelve un puntero al carácter de la cadena; 
de lo contrario, la función strchr() devuelve el valor NULL.
*/

#include <stdio.h>
#include <string.h>

int main(void) {

	const char *cadena = "Esto es una prueba";  //inicializar el puntero de tipo cadena
	char caracter1 = 'a';  //inicializar variable 'caracter1'
	char caracter2 = 'z';  //inicializar variable 'caracter2'

	//si el caracter1 no fue encontrado en la cadena
	if (strchr(cadena, caracter1) != NULL) {  //puede eliminar "!= NULL"
		printf("El caracter \'%c\' fue encontrado en la cadena \"%s\".\n",
			caracter1, cadena);
	}
	else { //si caracter1 no fue encontrado en la cadena
		printf("El caracter \'%c\' no fue encontrado en la cadena \"%s\".\n",
			caracter1, cadena);
	}

	//si el caracter2 no fue encontrado en la cadena
	if (strchr(cadena, caracter2) != NULL) {  //puede eliminar "!= NULL"
		printf("El caracter \'%c\' fue encontrado en la cadena \"%s\".\n",
			caracter2, cadena);
	}
	else { //si caracter2 no fue encontrado en la cadena
		printf("El caracter \'%c\' no fue encontrado en la cadena \"%s\".\n",
			caracter2, cadena);
	}
}