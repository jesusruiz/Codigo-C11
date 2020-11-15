#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#define TEXTO_LONG 1000  //Longitud m�xima del texto
#define BUFFER_TAM 100  //Tama�o del buffer de entrada
#define MAX_PALABRAS 300  //N�mero m�ximo de palabras diferentes
#define PALABRA_LONG 12  //Longitud m�xima de la palabra

int main(void) {

	char delimitadores[] = " \n\".,;:!?)(";  //Delimitadores de palabras
	char texto[TEXTO_LONG];  //Almacena el texto completo
	char buffer[BUFFER_TAM];  //Almacena una entrada de l�nea
	char palabras[MAX_PALABRAS][PALABRA_LONG];  //Almacena palabras del texto
	int nPalabras[MAX_PALABRAS] = { 0 };  //N�mero de ocurrencias de palabras
	int palabra_contador = 0;  //N�mero de palabras almacenadas

	printf("Introduza texto en un n�mero arbitrario de lineas.");
	printf("\nIntroduzca una linea vacia para finalizar la entrada:\n");

	//Leer un n�mero arbitrario de l�neas de texto.
	while (true) {
		//Una cadena vac�a que contiene solo una nueva l�nea
		//indica el final de la entrada
		fgets(buffer, BUFFER_TAM, stdin);
		if (buffer[0] == '\n') {
			break;
		}

		// Comprueba si tenemos espacio para la �ltima entrada
		//strcat_s devuelve cero en caso de �xito, devuelve no cero en caso de error.
		if (strcat_s(texto, TEXTO_LONG, buffer)) {
			printf("Capacidad m�xima de texto excedida. Finalizando programa.\n");
			return 1;
		}
	}
	return 0;
}