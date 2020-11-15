/*
Funciones de comparación strcmp() y strncmp()

En este ejemplo se comparan tres cadenas de caracteres utilizando las funciones strcmp() y strncmp().
El programa imprime el valor entero retornado por cada llamada de función.

La función strcmp() compara su primer argumento de cadena con su segundo argumento de cadena, carácter por carácter. 
La función devuelve 0 si las cadenas son iguales, un valor negativo si la primera cadena es menor que la segunda cadena 
y un valor positivo si la primera cadena es mayor que la segunda cadena.

La función strncmp() es equivalente a la función strcmp(), excepto que strncmp() compara hasta un número específico
de caracteres. La función strncmp() no compara los caracteres que siguen a un carácter nulo en una cadena. 
*/

#include <stdio.h>
#include <string.h>

int main(void) {

	const char* s1 = "Feliz cumple";  //inicializar puntero de tipo cadena
	const char* s2 = "Feliz cumple";  //inicializar puntero de tipo cadena
	const char* s3 = "Feliz Navidad";  //inicializar puntero de tipo cadena

	printf("%s%s\n%s%s\n%s%s\n\n%s%2d\n%s%2d\n%s%2d\n\n",
		"s1 = ", s1, "s2 = ", s2, "s3 = ", s3,
		"strcmp(s1, s2) = ", strcmp(s1, s2),
		"strcmp(s1, s3) = ", strcmp(s1, s3),
		"strcmp(s3, s1) = ", strcmp(s3, s1));

	printf("%s%2d\n%s%2d\n%s%2d\n",
		"strncmp(s1, s3, 6) = ", strncmp(s1, s3, 6),
		"strncmp(s1, s3, 7) = ", strncmp(s1, s3, 7),
		"strncmp(s3, s1, 7) = ", strncmp(s3, s1, 7));
}