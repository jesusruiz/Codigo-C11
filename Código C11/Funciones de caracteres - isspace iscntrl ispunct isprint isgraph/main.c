/*
Demostraci�n de  las funciones isspace(), iscntrl(), ispunct() isprint() e isgraph().

La funci�n isspace() determina si un car�cter es uno de los siguientes espacios en blanco:
espacio (''), salto de formato ('\f'), nueva l�nea ('\n'), retorno de carro ('\r'), tabulaci�n horizontal ('\t') 
o tabulaci�n vertical ('\v').

La funci�n iscntrl() determina si un car�cter es uno de los siguientes caracteres de control: 
tabulaci�n horizontal ('\t'), tabulaci�n vertical ('\v'), salto de formato ('\f'), alerta ('\a'), retroceso ('\b'), 
retorno de carro ('\r') o nueva l�nea ('\n').


La funci�n ispunct() determina si un car�cter es un car�cter de impresi�n que no es un espacio, un d�gito o una letra, 
como $, #, (,), [,], {,}, ;, : o %.

La funci�n isprint() determina si se puede mostrar un car�cter en la pantalla (incluido el car�cter de espacio). 

La funci�n isgraph() es la misma que isprint(), excepto que no se incluye el car�cter de espacio.
*/

#include <stdio.h>
#include <ctype.h>  //Hay que incluir este archivo de cabecera para poder utilizar las funciones de esta demostraci�n

int main(void) {

	printf("%s\n%s%s%s\n%s%s%s\n%s%s\n\n",
		"Conforme a isspace(): ",
		"Nueva linea", isspace('\n') ? " es un " : " no es un ",
		"caracter de espacio en blanco", "tabulacion horizontal",
		isspace('\t') ? " es un " : " no es un ",
		"caracter de espacio en blanco",
		isspace('%') ? "% es un " : "% no es un ",
		"caracter de espacio en blanco");

	printf("%s\n%s%s%s\n%s%s\n\n", 
		"Conforme a iscntrl():",
		"Nueva linea", iscntrl('\n') ? " es un " : " no es un ",
		"caracter de control", iscntrl('\$') ? "$ es un " :
		"$ no es un ", "caracter de control");

	printf("%s\n%s%s\n%s%s\n%s%s\n\n",
		"Conforme a ispunct():",
		ispunct(';') ? "; es un " : "; no es un ",
		"caracter de puntuacion",
		ispunct('Y') ? "Y es un " : "Y no es un ",
		"caracter de puntuacion",
		ispunct('#') ? "# es un " : "# no es un ",
		"caracter de puntuacion");

	printf("%s\n%s%s\n%s%s%s\n\n", 
		"Conforme a isprint():",
		isprint('$') ? "$ es un " : "$ no es un ",
		"caracter imprimible",
		"Alerta", isprint('\a') ? " es un " : " no es un ",
		"caracter imprimible");

	printf("%s\n%s%s\n%s%s%s\n", 
		"Conforme a isgraph():",
		isgraph('Q') ? "Q es un " : "Q no es un ",
		"caracter imprimible que no sea un espacio",
		"Espacio", isgraph(' ') ? " es un " : " no es un ",
		"caracter imprimible o un espacio");
}