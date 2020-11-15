/*
Ejercicio de estructura 'Persona' con un miembro 'edad', que crea un archivo de Acceso aleatorio

Definir y crear la siguiente estructura:

struct persona {
	char apellido[15];
	char nombre[15];
	char edad[4];
};

Inicialice el archivo "nombreedad.dat" para que haya 100 registros con apellido = "sin-asignar",
nombre = "" y edad = "0".
*/

#include <stdio.h>
#include <stdlib.h>
#include <cerrno>

//Definir la estructura persona con sus campos miembro correspondientes
struct persona {
	char apellido[15];
	char nombre[15];
	char edad[4];
};

int main(void) {

	FILE* aPtr;  //puntero de tipo archivo que apunta a 'cuentas.dat'

	//fopen() abre el archivo; sale si el archivo no puede ser encontrado
	if ((fopen_s(&aPtr, "nombreedad.dat", "wb")) != NULL) {  //Truncar a longitud cero o crear un archivo para escribir.
		puts("No se pudo abrir el archivo.");
	}//end-if
	else {
		puts("Archivo abierto.");
		//Crear unaPersona con la información por defecto
		struct persona unaPersona = { "sin-asignar", "", 0 };

		//Se crean 100 registros con la información por defecto asignada en la línea anterior
		for (unsigned int i = 1; i <= 100; ++i) {
			//La llamada a la función fwrite anterior escribe un único entero en un archivo, 
			//por lo que el tercer argumento es 1 (como si se estuviera escribiendo un elemento de una matriz).
			fwrite(&unaPersona, sizeof(struct persona), 1, aPtr);
		}//end-for

		fclose(aPtr);  //Cerrar el archivo
	}//end-else
}