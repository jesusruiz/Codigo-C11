#include <stdio.h>
#include <string.h>

//Función strcmp()  -  Compara dos cadenas de texto
//Devuelve 0 si las cadenas de texto son iguales (incluyendo mayúsculas y minúsculas); 
//si la primera cadena es mayor que la segunda, devuelve un número positivo; 
//si es mayor la segunda, devuelve un valor negativo.
//Existen variantes(no estándar, dependientes del compilador) 
//que comparan dos cadenas despreciando mayúsculas y minúsculas, como stricmp

#define MAX_LONG 21  //Longitud máxima de la matriz de caracteres

int main() {

	char palabra1[MAX_LONG];  //Declaración de la primera palabra
	char palabra2[MAX_LONG];  //Declaración de la segunda palabra

	printf("Introduzca la primera palabra (numero maximo caracteres %d): ", MAX_LONG);
	int valorRetornado = scanf_s("%s", palabra1, sizeof(palabra1));
	
	if (EOF == valorRetornado) {
		printf("Error leyendo la palabra");
		return 1;
	}

	printf("Introduzca la segunda palabra (numero maximo caracteres %d): ", MAX_LONG);
	valorRetornado = scanf_s("%s", palabra2, sizeof(palabra2));

	if (EOF == valorRetornado) {
		printf("Error leyendo la palabra");
		return 2;
	}

	//Comparar las palabras
	if (strcmp(palabra1, palabra2) == 0) {
		printf("Las palabras introducidas son iguales");
	}
	else {
		printf("%s precede a %s", 
			(strcmp(palabra1, palabra2) < 0) ? palabra1 : palabra2,
			(strcmp(palabra1, palabra2) < 0) ? palabra2 : palabra1);
	}
}