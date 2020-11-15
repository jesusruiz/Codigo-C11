/* Funciones de B�squeda - Funci�n strpbrk()

La funci�n strpbrk() busca en su primer argumento de cadena la primera aparici�n 
de cualquier car�cter existente en su segundo argumento de cadena. 

Si se encuentra un car�cter del segundo argumento, la funci�n strpbrk() devuelve 
un puntero al car�cter del primer argumento; de lo contrario, la funci�n strpbrk() devuelve el valor NULL.
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