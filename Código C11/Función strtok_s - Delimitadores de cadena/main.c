#include <stdio.h>
#include <string.h>
#include <stdbool.h>

//Este programa extraerá todas las palabras del texto que introduzca.

//Función strtok() - Caracteres limitadores de cadena
//strtok(dirección de la cadena a ser limitada o NULL para segundas y secuentas operaciones de limitación,
//		 dirección de variable de tipo entero conteniendo el tamaño del array en el que el primer argumento será almacenado,
//		 dirección de cadena que contiene los delimitadores, 
//		 Un puntero a una variable de tipo *char en el que la función almacenará información para permitirle 
//		 continuar buscando delimitadores después de que se haya encontrado el primero.)

int main() {

	char delimitadores[] = " \".,;:!?)(";  //delimitadores
	char buffer[100];  //Buffer para una línea de entrada por teclado
	char cadena[1000];  //Cadena en la que se buscarán los delimitadores
	char* puntero = NULL;  //Puntero utilizado por la función strtok_s()

	cadena[0] = '\0';  //Establecer el 1er caracter en nulo

	//size_t puede almacenar el tamaño máximo de un objeto de cualquier tipo teóricamente posible (incluido una matriz).
	//size_t se utiliza comúnmente para la indexación de matrices y el conteo de bucles.
	//Los programas que utilizan otros tipos, como unsigned int, para la indexación de matrices pueden fallar, 
	//por ejemplo, en los sistemas de 64 bits cuando el índice excede a UINT_MAX 
	//o si se basa en la aritmética modular de 32 bits.
	size_t cadena_long = sizeof(cadena);  //size_t es el tipo entero sin signo del resultado de sizeof = 1000
	size_t buffer_long = sizeof(buffer);  //size_t es el tipo entero sin signo del resultado de sizeof = 100

	printf("Introduzca alguna prosa que tenga menos de %zd caracteres.\n"
		"Finalice la entrada de datos, introduciendo una linea en blanco:\n", cadena_long);

	//Leer múltiples líneas de prosa desde el teclado
	while (true) {
		if (!fgets(buffer, buffer_long, stdin)) {  //Leer una entrada de línea
			printf("Error al leer la cadena\n");
			return 1;
		}
		if (buffer[0] == '\n') {  //Una línea vacía finaliza la entrada de datos
			break;
		}
		
		if (strcat_s(cadena, cadena_long, buffer)) {  //Concatenar la línea introducida en la variable cadena
			printf("Longitud de entrada máxima permitida excedida.\n");
			return 1;
		}
	}

	//Encontrar y enumerar todas las palabras introducidas en la prosa
	unsigned int contador_palabras = 0;

	char * pPalabra = strtok_s(cadena, &cadena_long, delimitadores, &puntero); // Encontrar primera palabra
	if (pPalabra) {
		do {
			printf("%-18s", pPalabra);
			if (++contador_palabras % 5 == 0)
				printf("\n");
				pPalabra = strtok_s(NULL, &cadena_long, delimitadores, &puntero); //Encontrar palabras posteriores
		} while(pPalabra);
		printf("\n%u palabras encontradas.\n", contador_palabras);
	}
	else
		printf("Ninguna palabra encontrada.\n");

	return 0;
}
