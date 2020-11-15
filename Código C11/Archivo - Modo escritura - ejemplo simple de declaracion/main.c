/*
Modo escritura de Archivo - Ejemplo simple de declaración
*/

#include <stdio.h>

int main(void) {

	FILE *pArchivo = NULL;  //declaramos una variable puntero a tipo FILE (archivo)
	char *nombreArchivo = "miarchivo.txt";  //declaramos una variable puntero de tipo char que apunta al nombre
											//del archivo que queremos crear para escribir dentro del mismo

	//Abrir miarchivo.txt para escribir dentro del mismo
	//La función retorna 0 si todo ha ido bien
	//y un valor distinto a 0 si se ha producido algún error
	if (fopen_s(&pArchivo, nombreArchivo, "w") != NULL) 													
	{
		printf_s("Error al abrir el archivo %s.\n", nombreArchivo);
	}
	else {
		printf_s("Archivo %s abierto.\n", nombreArchivo);
	}
}