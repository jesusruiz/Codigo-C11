/*
Funciones de Memoria - Funci�n memchr()

La funci�n memchr(), busca la primera aparici�n de un byte, representado como car�cter sin signo, 
en el n�mero especificado de bytes de un objeto. 

Si se encuentra el byte, se devuelve un puntero al byte en el objeto; de lo contrario, se devuelve un puntero NULL. 
*/

#include <stdio.h>
#include <string.h>

int main(void) {

	const char cadena[] = "http://www.genialogic.es";  //inicializar el array de tipo cadena
	const char caracter = 'g';  //inicializar un caracter de cadena
	char* retorno;  //inicializar un puntero de tipo cadena

	retorno = memchr(cadena, caracter, strlen(cadena));

	printf("La cadena existente desde el primer caracter |%c| encontrado es - |%s|\n", caracter, retorno);

	return(0);
}