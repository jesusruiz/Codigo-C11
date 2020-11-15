/*
Justificando la impresión desde la derecha y desde la izquierda
*/

#include <stdio.h>

int main(void) {

	puts("1234567890123456789012345678901234567890\n");  //se imprime 1234567890123456789012345678901234567890
	printf("%10s%10d%10c%10f\n\n", "hola", 7, 'a', 1.23);  //se imprimen 6 espacios desde la derecha y hola
														   //se imprimen 9 espacios desde la derecha y 7
														   //se imprimen 9 espacios desde la derecha y a
														   //se imprimen 2 espacios desde la derecha y 1.230000

	printf("%-10s%-10d%-10c%-10f\n", "hola", 7, 'a', 1.23);  //se imprime hola y se añaden 6 espacios a su izquierda
															 //se imprime 7 y se añaden 9 espacios a su izquierda
														     //se imprime a y se añaden 9 espacios a su izquierda
														     //se imprime 1.230000 y se añaden 2 espacios a su izquierda
}