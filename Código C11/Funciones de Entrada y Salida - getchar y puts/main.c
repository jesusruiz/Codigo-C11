/*
Utilizar las funciones getchar() y puts() para leer los caracteres desde la entrada est�ndar
almacenada en una matriz de caracteres y mostrar los caracteres como una cadena de caracteres.

La funci�n getchar() lee un car�cter desde la entrada est�ndar y devuelve el car�cter como un entero
La funci�n puts() toma una cadena como argumento y muestra la cadena seguida de un car�cter de nueva l�nea.

El programa deja de ingresar caracteres cuando se han le�do 79 caracteres o cuando getchar lee el car�cter de nueva l�nea
ingresado por el usuario para finalizar la l�nea de texto.

Se agrega un car�cter nulo al array frase (l�nea 31) para que el array pueda tratarse como una cadena.
Luego, la l�nea 35 usa puts() para mostrar la cadena contenida en la frase.
*/

#include <stdio.h>
#define TAMANO 80

int main(void) {

	int c;  //variable para almacenar la entrada de caracteres por parte del usuario
	char frase[TAMANO];  //crear un array que permite almacenar como m�ximo 80 caracteres (79 + caracter de fin de cadena)
	int i = 0;  //inicializar contador i

	puts("Introduzca una linea de texto:");

	//utilizar getchar() para leer cada caracter introducido por el usuario
	while ((i < TAMANO - 1) && (c = getchar()) != '\n') {
		frase[i++] = c;
	}

	frase[i] = '\0';  //a�adir caracter de fin de cadena

	//utilizar puts() para mostrar la frase introducida por el usuario
	puts("\nLa frase introducida por el usuario fue:");
	puts(frase);
}
