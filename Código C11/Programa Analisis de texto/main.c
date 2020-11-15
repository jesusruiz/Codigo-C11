#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#define TEXTO_LONG 1000  //Longitud máxima del texto
#define BUFFER_TAM 100  //Tamaño del buffer de entrada
#define MAX_PALABRAS 300  //Número máximo de palabras diferentes
#define PALABRA_LONG 12  //Longitud máxima de la palabra

int main(void) {

	char delimitadores[] = " \n\".,;:!?)(";  //Delimitadores de palabras
	char texto[TEXTO_LONG];  //Almacena el texto completo
	char buffer[BUFFER_TAM];  //Almacena una entrada de línea
	char palabras[MAX_PALABRAS][PALABRA_LONG];  //Almacena palabras del texto
	int nPalabras[MAX_PALABRAS] = { 0 };  //Número de ocurrencias de palabras
	int palabra_contador = 0;  //Número de palabras almacenadas

	printf("Introduza texto en un número arbitrario de lineas.");
	printf("\nIntroduzca una linea vacia para finalizar la entrada:\n");

	//Leer un número arbitrario de líneas de texto.
	while (true) {
		//Una cadena vacía que contiene solo una nueva línea
		//indica el final de la entrada
		fgets(buffer, BUFFER_TAM, stdin);
		if (buffer[0] == '\n') {
			break;
		}

		// Comprueba si tenemos espacio para la última entrada
		//strcat_s devuelve cero en caso de éxito, devuelve no cero en caso de error.
		if (strcat_s(texto, TEXTO_LONG, buffer)) {
			printf("Capacidad máxima de texto excedida. Finalizando programa.\n");
			return 1;
		}
	}
	return 0;
}