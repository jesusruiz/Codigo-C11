/*
Combinar anchos de campo y precisiones en una misma sentencia
*/

#include <stdio.h>

int main(void) {

	/*
	El ancho del campo y la precisi�n se pueden combinar colocando el ancho del campo, 
	seguido de un punto decimal, seguido de una precisi�n entre el signo de porcentaje 
	y el especificador de conversi�n.
	*/
	printf("%9.3f", 123.456789);  //se imprimen 2 espacios en blanco y 123.457
								  //Esto es as� porque se ha indicado que el ancho del campo es de 9 posiciones (caracteres)
								  //Y la precisi�n para el n�mero flotante ser� de 3, 
								  //por lo que se tomar�n 7 caracteres en total
								  //(7 porque se a�ade el caracter del PUNTO)
								  //7 posiciones utilizadas por los d�gitos + 2 espacios en blanco hacen el total de 9

	puts("");

	/*
	Es posible especificar el ancho del campo y la precisi�n usando expresiones enteras en la lista de argumentos 
	que siguen a la cadena de control de formato. 
	Para utilizar esta funci�n, inserte un asterisco (*) en lugar del ancho o la precisi�n del campo (o ambos). 
	
	El argumento int coincidente en la lista de argumentos se eval�a y se usa en lugar del asterisco. 
	El valor del ancho de un campo puede ser positivo o negativo (lo que hace que la salida se justifique 
	a la izquierda en el campo).
	*/
	printf("%*.*f", 7, 2, 98.736);  //se imprimen 2 espacios en blanco y 98.74
									//Esto es as� porque se ha indicado que el ancho del campo es de 7 posiciones (caracteres)
								    //Y la precisi�n para el n�mero flotante ser� de 2, 
									//por lo que se tomar�n 5 caracteres en total
									//(5 porque se a�ade el caracter del PUNTO)
								    //5 posiciones utilizadas por los d�gitos + 2 espacios en blanco hacen el total de 7

}