//Función números perfectos

#include <stdio.h>
#include <math.h>

void esPerfecto(unsigned int num);  //Función prototipo

int main(void) {

	for (int num = 1; num <= 1000; num++) {

		esPerfecto(num);
	}

    return 0;
}

void esPerfecto(unsigned int num) {

	int j = 0;

	for (int i = 1; i < num; i++) {

		if (num % i == 0) {
			j = j + i;
		}
	}

	if (num == j) {
		printf("Numero perfecto: %d\n", num);
		printf("%s", "Sus divisores son: ");

		for (int i = 1; i < num; i++) {
			if (num % i == 0) {
				printf("%d ", i);
			}
		}
		printf("\n\n");
	}
}