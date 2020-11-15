//Fibonacci funci�n recursiva

#include <stdio.h>
unsigned long long int fibonacci(unsigned int n);  //funci�n prototipo

int main(void) {

	unsigned int numero; //almacena el n�mero introducido por el usuario

	//obtener n�mero entero por parte del usuario
	printf("%s", "Introduzca un numero: ");
	scanf_s("%u", &numero);

	//calcula el valor fibonacci del n�mero introducido por el usuario
	unsigned long long int resultado = fibonacci(numero);

	//muestra el resultado
	printf("Fibonacci(%u) = %llu\n", numero, resultado);
}

unsigned long long int fibonacci(unsigned int n) {

	//caso base
	if (0 == n || 1 == n) {
		return n;
	}
	else {
		//paso recursivo
		return fibonacci(n - 1) + fibonacci(n - 2);
	}
}