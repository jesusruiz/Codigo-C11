/*
Funciones de comparaci�n strcmp() y strncmp()

En este ejemplo se comparan tres cadenas de caracteres utilizando las funciones strcmp() y strncmp().
El programa imprime el valor entero retornado por cada llamada de funci�n.

La funci�n strcmp() compara su primer argumento de cadena con su segundo argumento de cadena, car�cter por car�cter. 
La funci�n devuelve 0 si las cadenas son iguales, un valor negativo si la primera cadena es menor que la segunda cadena 
y un valor positivo si la primera cadena es mayor que la segunda cadena.

La funci�n strncmp() es equivalente a la funci�n strcmp(), excepto que strncmp() compara hasta un n�mero espec�fico
de caracteres. La funci�n strncmp() no compara los caracteres que siguen a un car�cter nulo en una cadena. 
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