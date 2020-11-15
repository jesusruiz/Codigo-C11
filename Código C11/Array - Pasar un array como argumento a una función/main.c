//Array - Pasar un array como argumento a una función

/*Para pasar un array como argumento a una función, especificamos el nombre del array sin los corchetes.

Recordar que todos los argumentos en C son pasados por valor. 
C automáticamente se encarga de pasar los arrary's a las funciones por referencia.

Es posible pasar un array por valor a través de una estructura
*/


//El nombre de un array ocupa la misma dirección que el primer elemento de un array.

#include <stdio.h>

int main(void) {

	char cadena[5];  //define un array de 5 elementos

	printf("    array = %p\n&array[0] = %p\n   &array = %p\n",
		cadena, &cadena[0], &cadena);     //se imprimirán las mismas direcciones de memoria
}