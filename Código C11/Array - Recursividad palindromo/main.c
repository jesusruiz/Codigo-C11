//Array - Recursividad �Es pal�ndromo?
//Si una cadena mide 1 o menos, entonces es pal�ndroma. 
//Una cadena vac�a y una de 1 es pal�ndroma. Por ejemplo, �m� se lee igual al inicio y al rev�s.
//Pero en caso de que no mida 1, entonces comparamos el �ltimo y el primero; y avanzamos. 

#include <stdio.h>
#define TAM_PALABRA 10

//Funci�n prototipo
int esPalindromo(const char palabra[], int indiceInicio, int indiceFinal);

int main(void) {

	//Declaraci�n de array de caracteres
	char palabra[TAM_PALABRA] = "radar";

	printf("%s\n", palabra);

	char primeraLetra = palabra[0];   //obtener cu�l es el primer caracter de la palabra almacenada en el array
	int numeroLetras = strlen(palabra) - 1;  //obtener el numero de caracteres que forman el array (se incluye el caracter final de fin de cadena)
	//printf("%d\n", numeroLetras);  //Imprimir el n�mero de caracteres que tiene el array (se cuenta el caracter final de fin de cadena)
	char ultimaLetra = palabra[numeroLetras - 1];  //obtener el �ltimo caracter de la cadena (se resta 1 para que no se el caracter de final de cadena)

	//printf("%c\n", primeraLetra);  //imprimir primera letra del array
	//printf("%c\n", ultimaLetra);  //imprimir ultima letra del array

	int indiceInicio = 0;
	int indiceFinal = numeroLetras;  //4 letras

	//Llamada a la funci�n esPalindromo
	esPalindromo(palabra, indiceInicio, indiceFinal);
}

//Funci�n esPalindromo
int esPalindromo(const char palabra[], int indiceInicio, int indiceFinal) {

	// Cadenas de 1 o menos caracteres son, por definici�n, palindromos

	int palindromo = 0;

	if (strlen(palabra) <= 1) {
		palindromo = 0;
		printf("%s", "Palindromo");
		return 0;
	}

	else {

		if (palabra[indiceInicio] != palabra[indiceFinal]) {
			palindromo = 1;
			printf("%s", "No es un Palindromo");
			return 1;
		}

		else {
			if (indiceInicio != indiceFinal) {
				palindromo = 0;
				esPalindromo(palabra, indiceInicio + 1, indiceFinal - 1);
				return 0;
			}
		}
	}

	if (palindromo == 0) {
		printf("%s", "Palindromo");
	}
	else {
		printf("%s", "No es un palindromo");
	}
}