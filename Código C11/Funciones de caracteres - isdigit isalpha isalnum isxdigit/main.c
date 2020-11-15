/*
Demostración de  las funciones isdigit(), isalpha(), isalnum() e isxdigit(). 

La función isdigit() determina si su argumento es un dígito (0–9). 
La función isalpha() determina si su argumento es una letra mayúscula (A – Z) o minúscula (a – z). 
La Función isalnum() determina si su argumento es una letra mayúscula, una letra minúscula o un dígito. 
La función isxdigit() determina si su argumento es un dígito hexadecimal (A – F, a – f, 0–9).
*/

#include <stdio.h>
#include <ctype.h>  //Hay que incluir este archivo de cabecera para poder utilizar las funciones de esta demostración

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