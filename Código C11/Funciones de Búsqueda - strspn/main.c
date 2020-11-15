/* Funciones de Búsqueda - Función strspn()

La función strspn() determina la longitud de la parte inicial de la cadena en su primer argumento 
que contiene solo caracteres de la cadena en su segundo argumento. 

La función devuelve la longitud del segmento.
*/

#include <stdio.h>
#include <string.h>

int main(void) {

	int i;

	//inicializar dos punteros de tipo cadena
	const char *cadena1 = "129th";
	const char *cadena2 = "1234567890";

	i = strspn(cadena1, cadena2);

	printf("Cadena1\n%s\n", cadena1);
	
	puts("");

	printf("El numero inicial de la cadena contiene %d digitos.\n", i);
	return 0;
}