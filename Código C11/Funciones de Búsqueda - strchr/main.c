/*
Funciones de B�squeda - Funci�n strchr()

La funci�n strchr() busca la primera aparici�n de un car�cter en una cadena. 
Si se encuentra el car�cter, la funci�n strchr() devuelve un puntero al car�cter de la cadena; 
de lo contrario, la funci�n strchr() devuelve el valor NULL.
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