#include <stdio.h>

//Instrucción continue

int main(void) {

	unsigned int x;

	//En este bucle al llegar al número 5 se salta debido a la instrucción continue
	//El bucle volverá a ejecutarse desde el número 6
	//Se impimirá por tanto 1 2 3 4 6 7 8 9 10
	for (x = 1; x <= 10; x++) {
		if (x == 5) {
			continue;
		}
		printf("%u ", x);
	}

	puts("\nInstruccion 'continue' utilizada para saltarse el valor 5");
}