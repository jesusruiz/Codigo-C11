/*
Uniones.

Una unión es el análogo de una estructura, salvo por un detalle: 
todos los campos (miembros) de los que consta una unión comienzan en una misma posición, 
que es la dirección de comienzo de la unión.
Recordemos que los campos de los que conta una estructura no comienzan en una misma posición de memoria.

Consiguientemente, las uniones tienen una longitud que es precisamente la del mayor de sus campos. 
Dicho de otro modo, una unión es una estructura en que todos los campos están superpuestos, 
ocupando la misma porción de memoria física.

Este programa utiliza el valor de la variable 'valor' (línea 30) de tipo de unión 'numero' 
(líneas 23 a 26) para mostrar el valor almacenado en la unión como int y double. 
La salida del programa depende de la implementación. 
La salida del programa muestra que la representación interna de un valor doble 
puede ser bastante diferente de la representación de int.
*/

#include <stdio.h>

//declaración de una unión
union numero {
	int x;  //variable de tipo int
	double y;  //variable de tipo double
};

int main(void) {

	union numero valor;  //definir una variable de tipo union

	valor.x = 100;  //introducimos un número de tipo entero en la unión
	printf("%s\n%s\n%s\n %d\n\n%s\n %f\n\n\n",
			"Introducimos 100 en el miembro de tipo entero",
			"e imprimimos ambos miembros.",
			"int:", valor.x,
			"double:", valor.y);

	valor.y = 100;  //introducimos un valor double en la misma union
	printf("%s\n%s\n%s\n %d\n\n%s\n %f\n\n\n",
		"Introducimos 100 en el miembro de tipo double",
		"e imprimimos ambos miembros.",
		"int:", valor.x,
		"double:", valor.y);
}