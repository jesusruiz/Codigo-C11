//Función ¿Es Multiplo?

#include <stdio.h>
#include <stdbool.h>

bool esMultiplo(unsigned int num1, unsigned int num2);  //Función prototipo

int main(void) {

	unsigned int numero1, numero2;
	bool resultado;

	printf("%s","Introduzca el primer numero: ");
	scanf_s("%d", &numero1);
	printf("%s", "Introduzca el segundo numero: ");
	scanf_s("%d", &numero2);

	resultado = esMultiplo(numero1, numero2);
	if (resultado) {
		printf("\n%d es multiplo de %d", numero1, numero2);
	}
	else
		printf("\n%d no es multiplo de %d", numero1, numero2);
}

bool esMultiplo(unsigned int num1, unsigned int num2) {

	if (num1 % num2 == 0)
		return true;
	else
		return false;
}