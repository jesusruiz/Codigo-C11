/*
Especificadores de conversión de punto flotante
*/

#include <stdio.h>

int main(void) {

	printf("%e\n", 1234567.89);	  // imprime 1.234568e+006
	printf("%e\n", +1234567.89);  // el signo más no se imprime. Se imprime 1.234568e+006
	printf("%e\n", -1234567.89);  // el signo menos se imprime. Se imprime -1.234568e+006
	printf("%E\n", 1234567.89);	  // se imprime 1.234568E+006
	printf("%f\n", 1234567.89);   // seis dígitos a la derecha del punto decimal. Se imprime 1234567.890000
	printf("%g\n", 1234567.89);   // se imprime la 'e' de exponencial en minúscula. Se imprime 1.23457e+006
	printf("%G\n", 1234567.89);   // se imprime la 'e' de exponencial en mayúscula. Se imprime 1.23457E+006
}