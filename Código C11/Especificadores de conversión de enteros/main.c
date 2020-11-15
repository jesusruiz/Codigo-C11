/*
Ejemplos de Especificadores de conversión de enteros
*/

#include <stdio.h>

int main(void) {

	//Los especificadores 'd' e 'i' son iguales en la función printf(). No así en la función scanf()
	printf("%d\n", 455);  //se imprime el valor 455
	printf("%i\n", 455);  //se imprime el valor 455

	printf("%d\n", +455);  //el signo más no es imprimido
	printf("%d\n", -455);  //el signo menos no es imprimido

	printf("%hd\n", 32000);  //el especificador 'h' indica short. Se imprime 32000
	printf("%ld\n", 2000000000L);  //el especificador 'l' indica double. El sufijo 'L' hace literal un int largo

	printf("%o\n", 455);  //El especificador 'o' imprime el valor en octal.  Se imprime 707

	printf("%u\n", 455);  //El especificador 'u' imprime el valor en positivo.  Se imprime 455
	printf("%u\n", -455); //El especificador 'u' se interpreta como un valor sin signo 4294966841

	printf("%x\n", 455);  //El especificador 'x' imprime el valor en hexadecimal con letras minúsculas. Se imprime 1c7
	printf("%X\n", 455);  //El especificador 'X' imprime el valor en hexadecimal con letras mayúsculas. Se imprime 1C7
}