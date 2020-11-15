//Función intToFloat - de número entero a flotante

#include <stdio.h>

float intToFloat(int num);  //Función prototipo

int main(void) {

	unsigned int num;
	float resultado;

	printf("%s", "Introduzca el numero a convertir a flotante: ");
	scanf_s("%u", &num);

	resultado = intToFloat(num);
	printf("%u = %f", num, resultado);
}

float intToFloat(int num) {

	return (float)num;
}