//Punteros - Funci�n Convertir una cadena a may�sculas usando un
//puntero no constante a datos no constantes.

#include <stdio.h>
#include <ctype.h>  //Archivo de cabecera para utilizar la funci�n toupper()

//Funci�n prototipo
void conversionAMayuscula(char* sPtr);  //Funci�n que no devuelve nada y recibe un puntero a cadena (string)

int main(void) {

	char cadena[] = "caRaCterEs y 32.98$";  //inicializar el array de caracteres

	printf("La cadena original antes de producirse la conversion es: %s", cadena);

	conversionAMayuscula(cadena);

	printf("\nLa cadena resultante despues de producirse la conversion es: %s\n", cadena);
}

//Funci�n conversionAMayuscula
//convierte los caracteres de una cadena a letras may�sculas
void conversionAMayuscula(char* sPtr) {

	while (*sPtr != '\0') {  //mientras el puntero no apunte al caracter (NULL) de fin de cadena '0'
		*sPtr = toupper(*sPtr);  //convertir caracter a may�scula
		++sPtr;  //hacer que sPtr apunte al siguiente caracter
	}
}