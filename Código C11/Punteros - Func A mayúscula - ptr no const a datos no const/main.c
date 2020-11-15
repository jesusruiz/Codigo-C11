//Punteros - Función Convertir una cadena a mayúsculas usando un
//puntero no constante a datos no constantes.

#include <stdio.h>
#include <ctype.h>  //Archivo de cabecera para utilizar la función toupper()

//Función prototipo
void conversionAMayuscula(char* sPtr);  //Función que no devuelve nada y recibe un puntero a cadena (string)

int main(void) {

	char cadena[] = "caRaCterEs y 32.98$";  //inicializar el array de caracteres

	printf("La cadena original antes de producirse la conversion es: %s", cadena);

	conversionAMayuscula(cadena);

	printf("\nLa cadena resultante despues de producirse la conversion es: %s\n", cadena);
}

//Función conversionAMayuscula
//convierte los caracteres de una cadena a letras mayúsculas
void conversionAMayuscula(char* sPtr) {

	while (*sPtr != '\0') {  //mientras el puntero no apunte al caracter (NULL) de fin de cadena '0'
		*sPtr = toupper(*sPtr);  //convertir caracter a mayúscula
		++sPtr;  //hacer que sPtr apunte al siguiente caracter
	}
}