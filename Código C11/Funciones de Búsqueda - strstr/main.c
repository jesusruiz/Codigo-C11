/*Funciones de Búsqueda - Función strstr()

La función strstr() busca la primera aparición (ocurrencia) de su segundo argumento de cadena 
en su primer argumento de cadena. 

Si la segunda cadena se encuentra en la primera cadena, se devuelve un puntero a la ubicación de la cadena 
en el primer argumento.
*/

#include <stdio.h>
#include <string.h>

int main(void) {

	const char* cadena1 = "abcdefabcdef";  //cadena en la que buscar
	const char* cadena2 = "def";  //cadena a buscar

	printf("%s%s\n%s%s\n\n%s\n%s%s\n",
		"cadena1 = ", cadena1, "cadena2 = ", cadena2,
		"El resto de la cadena1 comenzando con la",
		"primera ocurrencia de la cadena2 es: ",
		strstr(cadena1, cadena2));
}