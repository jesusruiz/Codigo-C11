/*
B�squeda de subcadenas con strstr() y un puntero 

Escriba un programa que pide al usuario introducir una l�nea de texto y una cadena de b�squeda desde el teclado. 

Con la funci�n strstr(), ubique la primera aparici�n de la cadena de b�squeda en la l�nea de texto y
asigne la ubicaci�n a la variable busquedaPtr de tipo char *. 

Si se encuentra la cadena de b�squeda, imprima el resto de la l�nea de texto comenzando desde la cadena de b�squeda. 

Luego, utilice la funci�n strstr() nuevamente, para ubicar la pr�xima aparici�n de la cadena de b�squeda 
en la l�nea de texto. 

Si se encuentra una segunda aparici�n, imprima el resto de la l�nea de texto que comienza con la segunda aparici�n. 

[Sugerencia: la segunda llamada a strstr() debe contener searchPtr + 1 como primer argumento].
*/

#include <stdio.h>
#include <string.h>
#define MAX_TAMANO 100

int main(void) {

	char cadena[MAX_TAMANO];  //array de tipo cadena para almacenar la cadena en la que buscar
	char busqueda[30];  //array de tipo cadena para almacenar la cadena a buscar
	char* busquedaPtr;  //puntero a cadena

	printf("%s\n", "Introduzca una cadena: ");
	gets(cadena);

	printf("%s\n", "Introduzca una subcadena a buscar en la primera cadena: ");
	gets(busqueda);

	//Buscar la cadena 'busqueda' en la cadena 'cadena' y almacenar el resultado en 'busquedaPtr'
	if (busquedaPtr = strstr(cadena, busqueda)) {

		printf("Primera ocurrencia encontrada: %s\n", busquedaPtr);
	}
	else {
		printf("%s", "No se encontraron ocurrencias\n");
		exit(0);  //si no se encuentra ninguna ocurrencia, salimos directamente del programa y no seguimos comprobando
	}

	//Buscar una segunda ocurrencia de la cadena 'busqueda' en la cadena 'busquedaPtr'
	//Ya no buscado en la cadena original 'cadena', ya que si lo hiciesemos as�, otra vez empezar�amos a buscar
	//desde el principio de la cadena
	//En este caso, como tenemos un puntero que apunta al caracter donde se encontr� la primera ocurrencia,
	//pues empezamos a buscar a partir desde el caracter siguiente a esa posici�n (busquedaPtr + 1)
	if (busquedaPtr = strstr(busquedaPtr + 1, busqueda)) {

		printf("Segunda ocurrencia encontrada: %s\n", busquedaPtr);
	}
	else
	{
		printf("%s", "No se encontraron mas ocurrencias\n");
	}
}