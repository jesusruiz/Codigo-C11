/*
Introducir varias l�neas de texto y un caracter de b�squeda
y utilizar la funci�n strchr() para determinar las ocurrencias totales del caracter en las l�neas de texto.
Imprimir el resultado.
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX_TAMANO 100

int main(void) {

	char cadena[MAX_TAMANO];  //array de tipo cadena para almacenar la cadena en la que buscar
	char busqueda = "";  //caracter a buscar
	char* busquedaPtr;  //puntero a cadena
	int contador = 0;

	printf("%s\n", "Introduzca una cadena: ");
	gets(cadena);

	printf("%s\n", "Introduzca un caracter a buscar en la primera cadena: ");
	busqueda = getc(stdin);  //Almacenamos el caracter introducido por el usuario en la variable utilizando getc()

	//Buscar el caracter 'busqueda' en la cadena 'cadena' y almacenar el resultado en 'busquedaPtr'
	if (busquedaPtr = strchr(cadena, busqueda)) {

		contador++;
	}
	else {
		printf("%s", "No se encontraron ocurrencias\n");
		exit(0);  //si no se encuentra ninguna ocurrencia, salimos directamente del programa y no seguimos comprobando
	}

	//Buscar una segunda ocurrencia del caracter 'busqueda' en la cadena 'busquedaPtr'
	//Ya no buscado en la cadena original 'cadena', ya que si lo hiciesemos as�, otra vez empezar�amos a buscar
	//desde el principio de la cadena
	//En este caso, como tenemos un puntero que apunta al caracter donde se encontr� la primera ocurrencia,
	//pues empezamos a buscar a partir desde el caracter siguiente a esa posici�n (busquedaPtr + 1)
	while (busquedaPtr = strchr(busquedaPtr + 1, busqueda)) {

		contador++;
	}

	printf("Ocurrencias encontradas: %d", contador);
}