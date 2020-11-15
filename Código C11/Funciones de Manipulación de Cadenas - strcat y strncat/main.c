/*
Funciones de Maipulación de Cadenas - strcat() y strncat()
Se recomienda utilizar las funciones seguras strcat_s() y strncat_s() del estándar C11

La función strcat() añade su segundo argumento (una cadena) 
a su primer argumento (un array de cadena de caracteres). 

El primer carácter del segundo argumento reemplaza el caracter nulo ('\0') que termina la cadena en el primer argumento. 
Debe asegurarse de que el array utilizada para almacenar la primera cadena sea lo suficientemente grande 
como para almacenar la primera cadena, la segunda cadena y el carácter nulo final ('\0') de la segunda cadena.

La función strncat() añade un número específico de caracteres de la segunda cadena a la primera cadena. 
El caracter nulo ('\0') de fin de cadena, se agrega automáticamente al resultado.
*/

#include <stdio.h>
#include <string.h>

int main(void) {

	char s1[24] = "Feliz";  //inicializa el array de tipo cadena 's1'
	char s2[] = "Aniversario ";  //inicializar el array de tipo cadena 's2'
	char s3[40] = "";  //inicializar el array de tipo cadena 's3'

	//imprimir el contenido del array 's1' y del array 's2'
	printf("s1 = %s\ns2 = %s\n", s1, s2);

	//almacenar el número de caracteres del array s1
	size_t buffer = sizeof(s1);

	//concatenar la cadena de caracteres del array 's2' en el array 's1'
	strcat_s(s1, buffer, s2);
	printf("%s\n", s1);

	//almacenar el número de caracteres del array s3
	size_t buffer2 = sizeof(s3);

	//concatenar los primeros 6 caracteres de la cadena almacenada en el array 's1' en el array 's3'. 
	//añadir el caracter de fin de cadena '\0' al final del último caracter
	strncat_s(s3, buffer2, s1, 6);
	printf("%s\n", s3);

	//concatenar el contenido del array 's1' en el array 's3'
	strncat_s(s3, buffer2, s1, 6);
	printf("%s\n", s3);
}