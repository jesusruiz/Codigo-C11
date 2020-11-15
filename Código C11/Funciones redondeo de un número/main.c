//Funciones redondeo de un número a un lugar decimal específico.

#include <stdio.h>
#include <math.h>

float redondeoAEntero(float num);  //Función prototipo
float redondeoADecimal(float num);  //Función prototipo
float redondeoACentesimal(float num);  //Función prototipo
float redondeoAMilesimal(float num);  //Función prototipo

int main(void) {

	float numero;
	float entero;
	float decimal;
	float centesimal;
	float milesimal;

	for (;;) {
		printf("%s", "Introduzca un numero flotante. ej: 2.3 (0 para salir): ");
		scanf_s("%f", &numero);

		if (numero == 0) {
			break;
		}
		else {
			entero = redondeoAEntero(numero);
			decimal = redondeoADecimal(numero);
			centesimal = redondeoACentesimal(numero);
			milesimal = redondeoAMilesimal(numero);
			printf("%.f\n", entero);
			printf("%.1f\n", decimal);
			printf("%.2f\n", centesimal);
			printf("%.3f\n", milesimal);
		}
	}
}

float redondeoAEntero(float num) {

	return floor(num + .5);  //redondea al valor más próximo 2.24 a 2   y   2.6 a 3

}

float redondeoADecimal(float num) {

	return floor(num * 100 + .5) / 100; //redondea al valor más próximo 2.24 a 2.2   y   2.26 a 2.3

}

float redondeoACentesimal(float num) {

	return floor(num * 1000 + .5) / 1000; //redondea al valor más próximo 2.456 a 2.46   y   2.656 a 2.66

}

float redondeoAMilesimal(float num) {

	return floor(num * 10000 + .5) / 10000; //redondea al valor más próximo 2.4568 a 2.457   y   3.1575 a 3.158

}