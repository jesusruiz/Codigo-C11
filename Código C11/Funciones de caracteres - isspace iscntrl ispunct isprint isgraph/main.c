/*
Demostración de  las funciones isspace(), iscntrl(), ispunct() isprint() e isgraph().

La función isspace() determina si un carácter es uno de los siguientes espacios en blanco:
espacio (''), salto de formato ('\f'), nueva línea ('\n'), retorno de carro ('\r'), tabulación horizontal ('\t') 
o tabulación vertical ('\v').

La función iscntrl() determina si un carácter es uno de los siguientes caracteres de control: 
tabulación horizontal ('\t'), tabulación vertical ('\v'), salto de formato ('\f'), alerta ('\a'), retroceso ('\b'), 
retorno de carro ('\r') o nueva línea ('\n').


La función ispunct() determina si un carácter es un carácter de impresión que no es un espacio, un dígito o una letra, 
como $, #, (,), [,], {,}, ;, : o %.

La función isprint() determina si se puede mostrar un carácter en la pantalla (incluido el carácter de espacio). 

La función isgraph() es la misma que isprint(), excepto que no se incluye el carácter de espacio.
*/

#include <stdio.h>
#include <ctype.h>  //Hay que incluir este archivo de cabecera para poder utilizar las funciones de esta demostración

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