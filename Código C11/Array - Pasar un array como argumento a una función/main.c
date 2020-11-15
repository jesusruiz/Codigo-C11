//Array - Pasar un array como argumento a una funci�n

/*Para pasar un array como argumento a una funci�n, especificamos el nombre del array sin los corchetes.

Recordar que todos los argumentos en C son pasados por valor. 
C autom�ticamente se encarga de pasar los arrary's a las funciones por referencia.

Es posible pasar un array por valor a trav�s de una estructura
*/


//El nombre de un array ocupa la misma direcci�n que el primer elemento de un array.

#include <stdio.h>

int main(void) {

	char cadena[5];  //define un array de 5 elementos

	printf("    array = %p\n&array[0] = %p\n   &array = %p\n",
		cadena, &cadena[0], &cadena);     //se imprimir�n las mismas direcciones de memoria
}