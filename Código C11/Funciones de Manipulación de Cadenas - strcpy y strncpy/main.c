/*
Funciones de manipulaci�n de cadenas: strcpy() y strncpy()

Se utiliza la funci�n strcpy() para copiar toda la cadena de caracteres del array 'x' en el array 'y'
SE DEBER�A UTILIZAR PARA AUMENTAR LA SEGURIDAD LA FUNCI�N strcpy_s() incluida en el est�ndar C11

Se utiliza la funci�n strncpy() para copiar los primeros 14 caracteres del array 'x' en el array 'z'. 
Se a�ade un car�cter nulo ('\0') al array 'z', porque la llamada a strncpy() en el programa, 
no escribe un car�cter nulo final (el tercer argumento es menor que la longitud de la cadena del segundo argumento).
*/

#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <stdio.h>
#include <string.h>
#define TAMANO1 25
#define TAMANO2 15

int main(void) {

	char x[] = "Feliz cumple y salud";  //inicializar array x
	char y[TAMANO1];  //crear el array de caracteres y
	char z[TAMANO2];  //crear el array de caracteres z

	//almacenar el n�mero de caracteres del array x
	size_t buffer = sizeof(x);

	//imprimir la cadena almacenada en el array 'x'
	printf("La cadena existente en el array x es: %s\n", x);

	//copiar el contenido de x en y
	strcpy_s(y, buffer, x);  //Copiar el n�mero caracteres como m�ximo indicado por 'buffer' del array 'x' en el array 'y'

	//imprimir la cadena almacenada en el array 'y'
	printf("La cadena existente en el array y es: %s\n", y);

	//copiar los primeros 14 caracteres del array 'x' en el array 'z'. No se copia el car�cter null ('\0')
	strncpy(z, x, TAMANO2 - 1);

	z[TAMANO2 - 1] = '\0';  //incluir el car�cter null ('\0') en el array 'z'

	//imprimir la cadena almacenada en el array 'z'
	printf("La cadena existente en el array z es: %s\n", z);
}