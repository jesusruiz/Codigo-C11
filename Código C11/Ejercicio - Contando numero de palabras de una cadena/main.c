/*Contar numero de palabras de una cadena con la función strtok()*/

#include <stdio.h>
#include <string.h>
#define TAM_MAX 100

int main(void) {

	char cadena[TAM_MAX];  //array para almacenar la cadena introducida por el usuario
	char delimitadores[] = " \n\t";  //delimitadores: espacio, saltos de linea y espacios tabulados
	char* token = NULL;
	char* siguiente_token = NULL;
	unsigned int contador = 0;

	printf("Introduzca una cadena de %u caracteres como maximo:\n", TAM_MAX);
	gets(cadena);

	token = strtok_s(cadena, delimitadores, &siguiente_token);

	while (token != NULL)
	{
		// Obtener siguiente token:
		if (token != NULL)
		{
			printf("%s\n", token);
			token = strtok_s(NULL, delimitadores, &siguiente_token);
			contador++;
		}
	}

	printf("\nNumero de palabras de la cadena introducida: %u\n", contador);
}
