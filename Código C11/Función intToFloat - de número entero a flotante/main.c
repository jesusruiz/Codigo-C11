//Funci�n intToFloat - de n�mero entero a flotante

#include <stdio.h>

float intToFloat(int num);  //Funci�n prototipo

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