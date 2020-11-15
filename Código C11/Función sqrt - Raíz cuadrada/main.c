#include <stdio.h>
#include <math.h>

int main(void) {

	float numero;

	printf("%s", "Introduzca el numero del que desea conocer su raiz cuadrada: ");
	scanf_s("%f", &numero);

	float raiz = sqrt(numero);

	printf("%.2f", raiz);

	return 0;
}