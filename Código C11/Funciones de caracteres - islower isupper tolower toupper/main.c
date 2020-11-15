/*
Demostración de  las funciones islower(), isupper(), tolower() y toupper().

La función islower() determina si su argumento es una letra minúscula (a – z).
La función isupper() determina si su argumento es una letra mayúscula (A – Z).

La función tolower() convierte una letra mayúscula en minúscula y devuelve la letra minúscula. 
Si el argumento no es una letra mayúscula, tolower() devuelve el argumento sin cambios.

La función toupper() convierte una letra minúscula en mayúscula y devuelve la letra mayúscula. 
Si el argumento no es una letra minúscula, toupper() devuelve el argumento sin cambios.
*/

#include <stdio.h>
#include <ctype.h>  //Hay que incluir este archivo de cabecera para poder utilizar las funciones de esta demostración

int main(void) {

	//El primer argumento %s imprime "Conforme a islower()
	//El segundo argumento %s imprime "islower('p')
	//El tercer argumento %s imprime si "p es o no es una letra minuscula"
	printf("%s\n%s%s\n%s%s\n%s%s\n%s%s\n\n", "Conforme a islower(): ",
		islower('p') ? "p es una " : "p no es una ", "letra minuscula",
		islower('P') ? "P es una " : "P no es una ", "letra minuscula",
		islower('5') ? "5 es una " : "5 no es una ", "letra minuscula",
		islower('!') ? "! es una " : "! no es una ", "letra minuscula");


	printf("%s\n%s%s\n%s%s\n%s%s\n%s%s\n\n",
		"Conforme a isupper():",
		isupper('D') ? "D es una " : "A no es una ", "letra mayuscula",
		isupper('d') ? "d es una " : "b no es una ", "letra mayuscula",
		isupper('8') ? "8 es una " : "8 no es una ", "letra mayuscula",
		isupper('$') ? "$ es una " : "$ no es una ", "letra mayuscula");

	puts("Funciones toupper() y tolower():");
	printf("%s%c\n%s%c\n%s%c\n%s%c\n",
		"u convertido a mayuscula es ", toupper('u'),
		"7 convertido a mayuscula es ", toupper('7'),
		"$ convertido a mayuscula es ", toupper('$'),
		"L convertido a minuscula es ", tolower('L'));
}