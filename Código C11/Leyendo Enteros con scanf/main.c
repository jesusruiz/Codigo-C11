/*
Leer numeros enteros con los distintos especificadores de conversi�n de enteros 
y mostrar los enteros como n�meros decimales. 
El especificador de conversi�n %i puede ingresar enteros decimales, octales y hexadecimales.

%d Leer un entero decimal con signo opcional. El argumento correspondiente es un puntero a un int.
%i Leer un entero decimal, octal o hexadecimal con signo opcional. El argumento correspondiente es un puntero a un int.
%o Leer un entero octal. El argumento correspondiente es un puntero a un int sin signo.
%u Leer un entero decimal sin signo. El argumento correspondiente es un puntero a un int sin signo.
%x o %X Leer un entero hexadecimal. El argumento correspondiente es un puntero a un int sin signo.
%h %l %ll Indicar que se ingresar� un entero corto, largo o largo largo, respectivamente.
%e, E, f, g o G Leer un valor de punto flotante. El argumento correspondiente es un puntero a una variable de punto flotante.
%l L Indicar que se ingresar� un valor doble o doble largo. El argumento correspondiente es un puntero a una variable double o long double.

%c Leer un caracter. El argumento correspondiente es un puntero a un char; no se a�ade ning�n caracter nulo ('\0').
%s Leer una cadena. El argumento correspondiente es un puntero a una matriz de tipo char que es lo suficientemente grande para contener la cadena y un car�cter nulo de fin de cadena ('\0'), que se a�ade autom�ticamente.

%p Leer una direcci�n de la misma forma que se produce cuando se imprimr una direcci�n con %p en una declaraci�n printf().
%n Almacena la cantidad de caracteres introducidos hasta ahora en esta llamada a scanf. El argumento correspondiente debe ser un puntero a un int.
% Omite un signo de porcentaje (%) en la entrada.
*/

#include <stdio.h>

int main(void) {

	int a;
	int b;
	int c;
	int d;
	int e;
	int f;
	int g;
	
	puts("Introduzca siete enteros: ");

	scanf_s("%d %i %i %i %o %u %x", &a, &b, &c, &d, &e, &f, &g);
	//-70 -70 070 0x70 70 70 70

	puts("\nLos enteros introducidos mostrados como enteros con decimales son: ");

	printf("%d %d %d %d %d %d %d\n", a, b, c, d, e, f, g);
	//-70 -70 56 112 56 70 112
}