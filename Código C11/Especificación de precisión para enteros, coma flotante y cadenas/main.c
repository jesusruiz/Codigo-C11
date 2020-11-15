/*
Especificaci�n de precisi�n para enteros, n�meros de punto flotante y cadenas
Imprimir enteros, n�meros de punto flotante y cadenas con precisi�n
*/

#include <stdio.h>

int main(void) {

	puts("Utilizando la precision para numeros enteros:");
	int i = 873;  //inicializar variable i de tipo entero
	printf("\t%.4d\n\t%.9d\n\n", i, i);  //se imprime espacios de tabulaci�n y 0873. Un salto de l�nea.
										 //se imprime espacios de tabulaci�n y 000000873. Dos saltos de l�nea.

	puts("Utilizando la precision para numeros de punto flotante:");
	double f = 123.94536;  //inicializar variable f de tipo double
	printf("\t%.3f\n\t%.3e\n\t%.3g\n\n", f, f, f);  //se imprime espacios de tabulaci�n y 123.945. Un salto de l�nea.
													//se imprime espacios de tabulaci�n y 1.239e+002. Un salto de l�nea.
													//se imprime espacios de tabulaci�n y 123. Dos saltos de l�nea.

	/*
	Cuando se utilizan los especificadores de conversi�n de punto flotante e, E y f, 
	la precisi�n es el n�mero de d�gitos que aparecen despu�s del punto decimal. 
	
	Cuando se utilizan los especificadores de conversi�n g y G, 
	la precisi�n es el n�mero m�ximo de d�gitos significativos que se imprimir�n.
	*/

	puts("Utilizando la precision para cadenas:");
	char s[] = "Feliz cumpleanos";  //inicializar array s de tipo cadena
	printf("\t%.12s\n", s);  //se imprime espacios de tabulaci�n y Feliz cumple

	/*
	Cuando se utilizan el especificador de conversi�n s, 
	la precisi�n es el n�mero m�ximo de caracteres que se imprimir�n desde el inicio de la cadena.
	*/
}