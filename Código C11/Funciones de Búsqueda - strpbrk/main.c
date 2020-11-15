/* Funciones de Búsqueda - Función strpbrk()

La función strpbrk() busca en su primer argumento de cadena la primera aparición 
de cualquier carácter existente en su segundo argumento de cadena. 

Si se encuentra un carácter del segundo argumento, la función strpbrk() devuelve 
un puntero al carácter del primer argumento; de lo contrario, la función strpbrk() devuelve el valor NULL.
*/

#include <stdio.h>
#include <string.h>

int main(void) {

	const char* cadena1 = "Esto es una prueba";  //inicializar el puntero de tipo cadena
	const char* cadena2 = "tenga cuidado";  //inicializar el puntero de tipo cadena

	printf("%s\"%s\"\n'%c'%s\n\"%s\"\n",
		"De los caracteres de ", cadena2,
		*strpbrk(cadena1, cadena2),
		" es el primer caracter que aparece antes, en la cadena ", cadena1);
}