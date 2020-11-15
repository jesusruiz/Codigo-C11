//Función Exponenciación

#include <stdio.h>
#include <math.h>

unsigned int calcularExponenciacion(unsigned int b, unsigned int e);

int main(void) {
	
	unsigned int base;
	unsigned int exponente;
	unsigned int resultado;

	printf("%s","Introduzca la base: ");
	scanf_s("%u", &base);
	printf("%s", "Introduzca el exponente: ");
	scanf_s("%u", &exponente);

	resultado = calcularExponenciacion(base, exponente);
	printf("%u", resultado);
}

calcularExponenciacion(unsigned int b, unsigned int e) {

	return pow(b, e);
}