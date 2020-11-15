//Función Par o Impar

#include <stdio.h>
#include <stdbool.h>

bool parImpar(int num);  //Función prototipo

int main(void) {

	unsigned int numero;
	bool resultado;

	printf("%s", "Introduzca un numero: ");
	scanf_s("%u", &numero);

	resultado = parImpar(numero);
	if (resultado) 
		printf("%d es par", numero);  //si la función parImpar() ha devuelto 1 el numero es par
	else
		printf("%d es impar", numero);  //si la función parImpar() ha devuelto 0 el numero es impar
}

bool parImpar(int num) {

	if (num % 2 == 0)
		return true;
	else
		return false;
}