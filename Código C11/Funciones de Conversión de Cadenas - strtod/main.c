/* Función strtod() - Convierte una secuencia de caracteres que representan un valor de punto flotante 
					  en un valor de tipo doble.

La función devuelve 0 si no puede convertir ninguna parte de su primer argumento en doble.

La función recibe dos argumentos: una cadena (char *) y un puntero a una cadena (char **).

El argumento de cadena contiene la secuencia de caracteres que se va a convertir en doble; 
se ignoran los espacios en blanco al principio de la cadena.

La función usa el argumento char ** para modificar un char * en la función de llamada (stringPtr)
de modo que apunte a la ubicación del primer carácter después de la parte convertida de la cadena 
o a toda la cadena si no se puede convertir ninguna parte de ella.
*/

#include <stdio.h>
#include <stdlib.h>  //Hay que añadir esta cabecera para poder utilizar la función de esta demostración

int main(void) {

	const char *cadena = "51.2% han sido admitidos";  //inicializar cadena de caracteres
	char *cadenaPtr;  //crear puntero que apunta a una cadena de caracteres

	//declarar una variable de tipo double para almacenar el resultado de la función strtod()
	//indica que a d se le asigna el valor doble convertido de cadena, 
	//y a cadenaPtr se le asigna la ubicación del primer carácter después del valor convertido (51.2) en cadena.
	double d = strtod(cadena, &cadenaPtr);

	//Se imprime:
	//La cadena '51.2% han sido admitidos' ha sido convertida al
	//valor double 51.2 y a la cadena '%han sido admitidos'
	printf("La cadena \"%s\" ha sido convertida al\n", cadena);
	printf("valor double %.2f y a la cadena \"%s\"\n", d, cadenaPtr);
}