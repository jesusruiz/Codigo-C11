/*
Funciones de Memoria - Función memcmp()

La función memcmp(), compara el número especificado de bytes de su primer argumento 
con los bytes correspondientes de su segundo argumento. 

La función devuelve un valor mayor que 0 si el primer argumento es mayor que el segundo, 
devuelve 0 si los argumentos son iguales 
y devuelve un valor menor que 0 si el primer argumento es menor que el segundo.
*/

#include <stdio.h>
#include <string.h>

int main(void) {

	char cadena1[] = "ABCDEFG";  //inicializar el array de caracteres 'cadena1'
	char cadena2[] = "ABCDXYZ";  //inicializar el array de caracteres 'cadena2'

	printf("%s%s\n%s%s\n\n%s%2d\n%s%2d\n%s%2d\n",
		"cadena1 = ", cadena1, "cadena2 = ", cadena2,
		"memcmp(cadena1, cadena2, 4) = ", memcmp(cadena1, cadena2, 4),   //devuelve 0
		"memcmp(cadena1, cadena2, 7) = ", memcmp(cadena1, cadena2, 7),   //devuelve -1
		"memcmp(cadena2, cadena1, 7) = ", memcmp(cadena2, cadena1, 7));  //devuelve 1

	return(0);
}