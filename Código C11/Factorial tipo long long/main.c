//Factorial tipo unsigned long long int

#include <stdio.h>

unsigned long long int factorial(unsigned int number);

int main(void) {
	//durante cada iteración, calcula el
	//factorial(i) y muestra el resultado
	for (unsigned int i = 0; i <= 21; i++) {
		printf("%u! = %llu\n", i, factorial(i));
	}
}

unsigned long long int factorial(unsigned int numero) {

	//caso base                     
	if (numero <= 1) {
		return 1;
	}
	else { //paso recursivo
		//ejemplo !6 * 5 = 30, se devuelve 30 y se multiplica * 4 = 120, se devuelve 120 y se multiplica por 3 = 360
		//se devuelve 360 y se multiplica * 2 = 720
		return (numero * factorial(numero - 1)); 
	}
}