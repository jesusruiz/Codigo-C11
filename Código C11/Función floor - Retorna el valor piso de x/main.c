#include <stdio.h>
#include <math.h>

int main(void) {

	float numero = 21.8;
	float numero2 = 21.0;

	printf("%.1f\n", floor(numero));  //Devuelve 21.0
	printf("%.1f", floor(numero2));  //Devuelve 21.0
}