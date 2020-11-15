//Array de caracteres - Orden Inverso

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAMANO 6

int main(void) {

	//Creación de array 5 caracteres
	char palabra[TAMANO] = "";

	//Pedir introducción de palabra por teclado
	printf("Introduzca una palabra no superior a %d caracteres: ", TAMANO);
	//Obtener lo introducido por el usuario
	gets(palabra);

	//imprimir array
	printf("%s\n", palabra);

	//calcular numero de caracteres del array
	int contadorCaracteres = strlen(palabra);

	//imprimir el numero de caracteres que tiene el array
	printf("%d\n", contadorCaracteres);

	//imprimir los caracteres del array en orden inverso
	for (int contador = contadorCaracteres - 1; contador >= 0; contador--) {
		printf("%c", palabra[contador]);
	}
}