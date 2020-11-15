/* Funciones de Búsqueda - Función strrchr()

La función strrchr() busca la última aparición del carácter especificado en una cadena.

Si se encuentra el carácter, la función strrchr() devuelve un puntero al carácter de la cadena; 
de lo contrario, la función strrchr() devuelve el valor NULL.
*/

#include <stdio.h>
#include <string.h>

int main(void) {

	//incializar puntero de tipo cadena
	const char* cadena1 = "Un zoologico tiene muchos ejemplares de animales, incluidas cebras.";
	
	int c = 'c';  //caracter a buscar

	printf("Cadena1:\n%s\n", cadena1);

	puts("");

	printf("%s\n%s'%c'%s\"%s\"\n",
		"El resto de la cadena1 comenzando con la",
		"ultima ocurrencia del caracter ", c,
		" es: ", strrchr(cadena1, c));
}