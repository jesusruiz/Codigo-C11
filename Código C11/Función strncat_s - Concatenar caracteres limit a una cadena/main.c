#include <stdio.h>
#include <string.h>

//Función strncat_s() - Concatenar un número limitado de caracteres de una cadena a otra
//strncat_s (cadena destino, longitud máxima de la cadena destino, cadena origen, numero máximo de caracteres a copiar)
//La función devuelve un código de error entero como un valor de tipo errno_t, 
//que es un tipo entero que depende del compilador. Normalmente 0 en caso de éxito. Un número distinto a 0 en caso de error

int main() {

	char cadenaOrigen[50] = "Hola";
	char cadenaDestino[20] = " Mundo";

	int valorRetornado = strncat_s(cadenaOrigen, sizeof(cadenaOrigen), cadenaDestino, 3);

	if (valorRetornado)
		printf("Se produjo un error al concatenar las cadenas. Codigo de error = %d", valorRetornado);
	else
		printf("%s\n", cadenaOrigen);
}