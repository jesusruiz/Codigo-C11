/*
Utilizar las funciones getchar() y puts() para leer los caracteres desde la entrada estándar
almacenada en una matriz de caracteres y mostrar los caracteres como una cadena de caracteres.

La función getchar() lee un carácter desde la entrada estándar y devuelve el carácter como un entero
La función puts() toma una cadena como argumento y muestra la cadena seguida de un carácter de nueva línea.

El programa deja de ingresar caracteres cuando se han leído 79 caracteres o cuando getchar lee el carácter de nueva línea
ingresado por el usuario para finalizar la línea de texto.

Se agrega un carácter nulo al array frase (línea 31) para que el array pueda tratarse como una cadena.
Luego, la línea 35 usa puts() para mostrar la cadena contenida en la frase.
*/

#include <stdio.h>
#define TAMANO 80

int main(void) {

	int c;  //variable para almacenar la entrada de caracteres por parte del usuario
	char frase[TAMANO];  //crear un array que permite almacenar como máximo 80 caracteres (79 + caracter de fin de cadena)
	int i = 0;  //inicializar contador i

	puts("Introduzca una linea de texto:");

	//utilizar getchar() para leer cada caracter introducido por el usuario
	while ((i < TAMANO - 1) && (c = getchar()) != '\n') {
		frase[i++] = c;
	}

	frase[i] = '\0';  //añadir caracter de fin de cadena

	//utilizar puts() para mostrar la frase introducida por el usuario
	puts("\nLa frase introducida por el usuario fue:");
	puts(frase);
}
