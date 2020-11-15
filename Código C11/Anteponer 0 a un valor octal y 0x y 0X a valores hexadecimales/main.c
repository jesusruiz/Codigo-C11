/*
Utilizar el indicador de bandera # para anteponer un 0 al valor octal y 0x y 0X a los valores hexadecimales, 
y para forzar el punto decimal en un valor impreso con g.
*/

#include <stdio.h>

int main(void) {

	int c = 1427;  //inicializar la variable c de tipo entero
	printf("%#o\n", c);  //imprime  02623  (0 de octal  y 263 que es el valor en octal del entero 1427)

	printf("%#x\n", c);  //imprime  0x593  (0x de headecimal  y 593 que es el valor en hexadecimal del entero 1427)
	printf("%#X\n", c);  //imprime  0X593  (0X de headecimal  y 593 que es el valor en hexadecimal del entero 1427)

	double p = 1427.0;  //inicializar la variable de tipo double p
	printf("\n%g\n", p);  //se imprime 1427
	printf("%#g\n", p);  //se imprime 1427.00
}