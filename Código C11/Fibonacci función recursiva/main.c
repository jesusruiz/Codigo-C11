//Fibonacci función recursiva

#include <stdio.h>
unsigned long long int fibonacci(unsigned int n);  //función prototipo

int main(void) {

	unsigned int numero; //almacena el número introducido por el usuario

	//obtener número entero por parte del usuario
	printf("%s", "Introduzca un numero: ");
	scanf_s("%u", &numero);

	//calcula el valor fibonacci del número introducido por el usuario
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