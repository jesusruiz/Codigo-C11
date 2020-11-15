#include <stdio.h>
#include <string.h>
#include <stdbool.h>

//Este programa extraer� todas las palabras del texto que introduzca.

//Funci�n strtok() - Caracteres limitadores de cadena
//strtok(direcci�n de la cadena a ser limitada o NULL para segundas y secuentas operaciones de limitaci�n,
//		 direcci�n de variable de tipo entero conteniendo el tama�o del array en el que el primer argumento ser� almacenado,
//		 direcci�n de cadena que contiene los delimitadores, 
//		 Un puntero a una variable de tipo *char en el que la funci�n almacenar� informaci�n para permitirle 
//		 continuar buscando delimitadores despu�s de que se haya encontrado el primero.)

int main() {

	char delimitadores[] = " \".,;:!?)(";  //delimitadores
	char buffer[100];  //Buffer para una l�nea de entrada por teclado
	char cadena[1000];  //Cadena en la que se buscar�n los delimitadores
	char* puntero = NULL;  //Puntero utilizado por la funci�n strtok_s()

	cadena[0] = '\0';  //Establecer el 1er caracter en nulo

	//size_t puede almacenar el tama�o m�ximo de un objeto de cualquier tipo te�ricamente posible (incluido una matriz).
	//size_t se utiliza com�nmente para la indexaci�n de matrices y el conteo de bucles.
	//Los programas que utilizan otros tipos, como unsigned int, para la indexaci�n de matrices pueden fallar, 
	//por ejemplo, en los sistemas de 64 bits cuando el �ndice excede a UINT_MAX 
	//o si se basa en la aritm�tica modular de 32 bits.
	size_t cadena_long = sizeof(cadena);  //size_t es el tipo entero sin signo del resultado de sizeof = 1000
	size_t buffer_long = sizeof(buffer);  //size_t es el tipo entero sin signo del resultado de sizeof = 100

	printf("Introduzca alguna prosa que tenga menos de %zd caracteres.\n"
		"Finalice la entrada de datos, introduciendo una linea en blanco:\n", cadena_long);

	//Leer m�ltiples l�neas de prosa desde el teclado
	while (true) {
		if (!fgets(buffer, buffer_long, stdin)) {  //Leer una entrada de l�nea
			printf("Error al leer la cadena\n");
			return 1;
		}
		if (buffer[0] == '\n') {  //Una l�nea vac�a finaliza la entrada de datos
			break;
		}
		
		if (strcat_s(cadena, cadena_long, buffer)) {  //Concatenar la l�nea introducida en la variable cadena
			printf("Longitud de entrada m�xima permitida excedida.\n");
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
