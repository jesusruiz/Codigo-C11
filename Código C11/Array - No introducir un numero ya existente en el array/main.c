//Pedir que el usuario introduzca quince números por teclado entre el 10 y el 100
//Si el número introducido es repetido, no incluirlo en el array

#include <stdio.h>
#include <stdbool.h>

int main(void) {

	bool existe = false;
	int numero;
	int array[15];

	for (unsigned int c = 0; c < 15; ++c) {
		printf("Introduzca un numero (%d de 15):", c + 1);
		scanf_s("%u", &numero);

		for (unsigned int c = 0; c < 15; ++c) {
			if (numero == array[c]) {
				existe = true;
				printf("existe");
				break;
			}
			else
			{
				existe = false;
				printf("no existe");
			}
		}

		if (existe == false) {
			array[c] = numero;
		}
	}

	//imprimir array
	for (unsigned int c = 0; c < 15; ++c) {
		if (array[c] > 0  && array[c] < 100)
		printf("%u ,", array[c]);
	}
}