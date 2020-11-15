/*
Combinar anchos de campo y precisiones en una misma sentencia
*/

#include <stdio.h>

int main(void) {

	/*
	El ancho del campo y la precisión se pueden combinar colocando el ancho del campo, 
	seguido de un punto decimal, seguido de una precisión entre el signo de porcentaje 
	y el especificador de conversión.
	*/
	printf("%9.3f", 123.456789);  //se imprimen 2 espacios en blanco y 123.457
								  //Esto es así porque se ha indicado que el ancho del campo es de 9 posiciones (caracteres)
								  //Y la precisión para el número flotante será de 3, 
								  //por lo que se tomarán 7 caracteres en total
								  //(7 porque se añade el caracter del PUNTO)
								  //7 posiciones utilizadas por los dígitos + 2 espacios en blanco hacen el total de 9

	puts("");

	/*
	Es posible especificar el ancho del campo y la precisión usando expresiones enteras en la lista de argumentos 
	que siguen a la cadena de control de formato. 
	Para utilizar esta función, inserte un asterisco (*) en lugar del ancho o la precisión del campo (o ambos). 
	
	El argumento int coincidente en la lista de argumentos se evalúa y se usa en lugar del asterisco. 
	El valor del ancho de un campo puede ser positivo o negativo (lo que hace que la salida se justifique 
	a la izquierda en el campo).
	*/
	printf("%*.*f", 7, 2, 98.736);  //se imprimen 2 espacios en blanco y 98.74
									//Esto es así porque se ha indicado que el ancho del campo es de 7 posiciones (caracteres)
								    //Y la precisión para el número flotante será de 2, 
									//por lo que se tomarán 5 caracteres en total
									//(5 porque se añade el caracter del PUNTO)
								    //5 posiciones utilizadas por los dígitos + 2 espacios en blanco hacen el total de 7

}