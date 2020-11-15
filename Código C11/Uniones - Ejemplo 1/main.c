/*
Uniones.

Una uni�n es el an�logo de una estructura, salvo por un detalle: 
todos los campos (miembros) de los que consta una uni�n comienzan en una misma posici�n, 
que es la direcci�n de comienzo de la uni�n.
Recordemos que los campos de los que conta una estructura no comienzan en una misma posici�n de memoria.

Consiguientemente, las uniones tienen una longitud que es precisamente la del mayor de sus campos. 
Dicho de otro modo, una uni�n es una estructura en que todos los campos est�n superpuestos, 
ocupando la misma porci�n de memoria f�sica.

Este programa utiliza el valor de la variable 'valor' (l�nea 30) de tipo de uni�n 'numero' 
(l�neas 23 a 26) para mostrar el valor almacenado en la uni�n como int y double. 
La salida del programa depende de la implementaci�n. 
La salida del programa muestra que la representaci�n interna de un valor doble 
puede ser bastante diferente de la representaci�n de int.
*/

#include <stdio.h>

//declaraci�n de una uni�n
union numero {
	int x;  //variable de tipo int
	double y;  //variable de tipo double
};

int main(void) {

	union numero valor;  //definir una variable de tipo union

	valor.x = 100;  //introducimos un n�mero de tipo entero en la uni�n
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