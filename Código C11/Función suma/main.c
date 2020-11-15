#include <stdio.h>

int main(void) {

	unsigned int num1 = 2;
	unsigned int num2 = 2;

	int resultado = suma(num1, num2);
	printf("%u + %u = %u", num1, num2, resultado);
	
	return 0;
}

int suma(int numero1, int numero2) {
	return numero1 + numero2;
}