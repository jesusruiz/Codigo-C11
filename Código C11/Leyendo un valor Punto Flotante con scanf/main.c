/*
Leer valores Punto Flotante con scanf()
*/

#include <stdio.h>

int main(void) {

	double a;
	double b;
	double c;

	puts("Introduzca tres valores punto flotante: ");
	scanf_s("%le %lf %lg", &a, &b, &c);
	//1.27987 1.27987e+03 3.38476e-06

	printf("\nA continuacion se presentan los numeros introducido sin formato ");
	puts("en notacion punto flotante:\n");
	printf("%f\n%f\n%f\n", a, b, c);
	//1.279870
	//1279.870000
	//0.000003
}