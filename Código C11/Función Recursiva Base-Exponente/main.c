//Función Recursiva Base-Exponente

#include <stdio.h>
#include <math.h>

double baseExponente(double b, double e);

int main(void) {

	double base;
	double exponente;

	printf("%s", "Introduzca la base: ");
	scanf_s("%lf", &base);

	printf("%s", "Introduzca el exponente: ");
	scanf_s("%lf", &exponente);

	double resultado = baseExponente(base,exponente);

	printf("%.lf\n", resultado);

}

double baseExponente(double b, double e) {

	if (e == 1) {

		return b;
	}

	else {

		return b* baseExponente(b, e - 1);
	}
}