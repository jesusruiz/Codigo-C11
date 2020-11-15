/* Función strtoul() - Convierte en una valor unsigned long int una secuencia de caracteres que representan un 
valor usigned long int (sin signo).

La función devuelve 0 si no puede convertir ninguna parte de su primer argumento a unsigned long int.

La función recibe tres argumentos: una cadena (char *), un puntero a una cadena (char **) y un entero.

La cadena contiene la secuencia de caracteres que se va a convertir a valor long.
Se ignoran los espacios en blanco al principio de la cadena.

La función usa el argumento char ** para modificar un char * en la función de llamada (restoPtr o residuoPtr)
de modo que apunte a la ubicación del primer carácter después de la parte convertida de la cadena
o a toda la cadena si no se puede convertir ninguna parte de ella.

El entero especifica la base del valor que se convierte.
*/

#include <stdio.h>
#include <stdlib.h>  //Hay que añadir esta cabecera para poder utilizar la función de esta demostración

int main(void) {

	const char* cadena = "1234567abc";  //inicializar cadena de caracteres
	char* residuoPtr;  //crear puntero que apunta a una cadena de caracteres

	//declarar una variable de tipo long para almacenar el resultado de la función strtol()
	//indica que a x se le asigna el valor long convertido de cadena, 
	//y a residuoPtr se le asigna la ubicación del primer carácter después del valor convertido (-1234567) en cadena.
	//El uso de NULL para el segundo argumento hace que se ignore el resto de la cadena.
	//El tercer argumento, 0, indica que el valor a convertir puede estar en formato octal (base 8), 
	//decimal (base 10) o hexadecimal (base 16). La base se puede especificar como 0 o cualquier valor entre 2 y 36.
	unsigned long int x = strtoul(cadena, &residuoPtr, 0);

	printf("%s\"%s\"\n%s%lu\n%s\"%s\"\n%s%lu\n",
		"El valor original de la cadena es ", cadena,
		"El valor obtenido una vez convertido el valor original a tipo long es ", x,
		"El residuo de la cadena original es ",
		residuoPtr,
		"El valor convertido menos 567 es ", x - 567);
}