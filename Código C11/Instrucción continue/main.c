#include <stdio.h>

//Instrucci�n continue

int main(void) {

	unsigned int x;

	//En este bucle al llegar al n�mero 5 se salta debido a la instrucci�n continue
	//El bucle volver� a ejecutarse desde el n�mero 6
	//Se impimir� por tanto 1 2 3 4 6 7 8 9 10
	for (x = 1; x <= 10; x++) {
		if (x == 5) {
			continue;
		}
		printf("%u ", x);
	}

	puts("\nInstruccion 'continue' utilizada para saltarse el valor 5");
}