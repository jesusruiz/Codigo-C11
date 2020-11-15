#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//Ejercicio Unión de cadenas

int main() {

	char preambulo[] = "El chiste es:\n\n";
	char cadena[][40] = {
							"Mi perro no tiene nariz.\n",
							"Como hace tu perro para oler entonces\n",
							"Mi perro huele horrible.\n"
						};

	//Calcular número de cadenas almacenadas en el array cadena
	unsigned int contadorCadenas = sizeof(cadena) / sizeof(cadena[0]);

	//Imprimir número de cadenas almacenadas en el array cadena
	printf("Numero de cadenas almacenadas en el array: %u\n\n", contadorCadenas);  //Imprime 3
	
	printf("Las cadenas almacenadas en el array son:\n\n");
	//Imprimir todas las cadenas completas almacenadas en el array
	for (unsigned int i = 0; i < contadorCadenas; ++i)
		printf("%s\n", cadena[i]);

	//Imprimir número de caracteres que ocupa el array de cadena (en total 120) 40 x 3
	printf("Numero de caracteres que puede tener el array: %d", sizeof(cadena));  //Imprime 120

	//Calcular la longitud total de todas las cadenas almacenadas en el array cadena
	unsigned int longitud = 0;
	
	for (unsigned int i = 0; i < contadorCadenas; i++) {
		//función strnlen() - Numero de caracteres que contiene esta cadena sin contar el caracter null
		longitud += strnlen_s(cadena[i], sizeof(cadena[i])); 
	}

	printf("\n\nLongitud total ocupada por todas las cadenas almacenadas en el array: %u", longitud); //imprime 88

	//Crear un array para almacenar todas las cadenas concatenadas
	//Sumamos los caracteres almacenados en las cadenas: cadena y preambulo
	int totalCaracteresCadenas = longitud + strnlen_s(preambulo, sizeof(preambulo)) + 1;

	char chiste[totalCaracteresCadenas];

}