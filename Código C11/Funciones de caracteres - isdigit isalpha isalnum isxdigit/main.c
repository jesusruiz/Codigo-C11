/*
Demostraci�n de  las funciones isdigit(), isalpha(), isalnum() e isxdigit(). 

La funci�n isdigit() determina si su argumento es un d�gito (0�9). 
La funci�n isalpha() determina si su argumento es una letra may�scula (A � Z) o min�scula (a � z). 
La Funci�n isalnum() determina si su argumento es una letra may�scula, una letra min�scula o un d�gito. 
La funci�n isxdigit() determina si su argumento es un d�gito hexadecimal (A � F, a � f, 0�9).
*/

#include <stdio.h>
#include <ctype.h>  //Hay que incluir este archivo de cabecera para poder utilizar las funciones de esta demostraci�n

int main(void) {

	//El primer argumento %s imprime "Conforme a isdigit()
	//El segundo argumento %s imprime "isdigit('8')
	//El tercer argumento %s imprime si "8 es o no es un digito"
	//El cuarto argumento %s imprime "isdigit('#')
	//El quinto argumento %s imprime si "# es o no es un digito"
	printf("%s\n%s%s\n%s%s\n\n", "Conforme a isdigit(): ",
		isdigit('8') ? "8 es un " : "8 no es un ", "digito",
		isdigit('#') ? "# es un " : "# no es un ", "digito");

	printf("%s\n%s%s\n%s%s\n%s%s\n%s%s\n\n",
		"Conforme a isalpha():",
		isalpha('A') ? "A es una " : "A no es una ", "letra",
		isalpha('b') ? "b es una " : "b no es una ", "letra",
		isalpha('&') ? "& es una " : "& no es una ", "letra",
		isalpha('4') ? "4 es una " : "4 no es una ", "letra");

	printf("%s\n%s%s\n%s%s\n%s%s\n\n",
		"Conforme a isalnum():",
		isalnum('A') ? "A es un " : "A no es un ", "digito o una letra letter",
		isalnum('8') ? "8 es un " : "8 no es un ", "digito o una letra",
		isalnum('#') ? "# es un " : "# no es un ", "digito o una letra");

	printf("%s\n%s%s\n%s%s\n%s%s\n%s%s\n%s%s\n",
		"Conforma a isxdigit():",
		isxdigit('F') ? "F es un " : "F no es un ", "digito hexadecimal",
		isxdigit('J') ? "J es un " : "J no es un ", "digito hexadecimal",
		isxdigit('7') ? "7 es un " : "7 no es un ", "digito hexadecimal",
		isxdigit('$') ? "$ es un " : "$ no es un ", "digito hexadecimal",
		isxdigit('f') ? "f es un " : "f no es un ", "digito hexadecimal");
}