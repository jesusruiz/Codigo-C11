#include <stdio.h>
#include <math.h>

int main(void) {

	float numero = 20.0;
	float numero2 = 20.2;

	printf("%.1f\n", ceil(numero)); //devuelve 20.0
	printf("%.1f", ceil(numero2)); //devuelve 21.0
}