/*
Especificación de precisión para enteros, números de punto flotante y cadenas
Imprimir enteros, números de punto flotante y cadenas con precisión
*/

#include <stdio.h>

int main(void) {

	puts("Utilizando la precision para numeros enteros:");
	int i = 873;  //inicializar variable i de tipo entero
	printf("\t%.4d\n\t%.9d\n\n", i, i);  //se imprime espacios de tabulación y 0873. Un salto de línea.
										 //se imprime espacios de tabulación y 000000873. Dos saltos de línea.

	puts("Utilizando la precision para numeros de punto flotante:");
	double f = 123.94536;  //inicializar variable f de tipo double
	printf("\t%.3f\n\t%.3e\n\t%.3g\n\n", f, f, f);  //se imprime espacios de tabulación y 123.945. Un salto de línea.
													//se imprime espacios de tabulación y 1.239e+002. Un salto de línea.
													//se imprime espacios de tabulación y 123. Dos saltos de línea.

	/*
	Cuando se utilizan los especificadores de conversión de punto flotante e, E y f, 
	la precisión es el número de dígitos que aparecen después del punto decimal. 
	
	Cuando se utilizan los especificadores de conversión g y G, 
	la precisión es el número máximo de dígitos significativos que se imprimirán.
	*/

	puts("Utilizando la precision para cadenas:");
	char s[] = "Feliz cumpleanos";  //inicializar array s de tipo cadena
	printf("\t%.12s\n", s);  //se imprime espacios de tabulación y Feliz cumple

	/*
	Cuando se utilizan el especificador de conversión s, 
	la precisión es el número máximo de caracteres que se imprimirán desde el inicio de la cadena.
	*/
}