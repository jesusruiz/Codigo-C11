//Array - Definir un array y establecer sus valores a ceros

#include <stdio.h>

int main(void) {

	int n[5];  //Definimos un array de 5 elementos (valores índice de 0 a 4)

	//Establecer los valores de los elementos del array a ceros
	for (size_t i = 0; i < 5; i++) {
		n[i] = 0;
	}

	printf("%s%13s\n", "Elemento", "Valor");

	//Imprimir el contenido del array n en formato tabular
	for (size_t i = 0; i < 5; i++) {
		printf("%8u%13d\n", i, n[i]);
	}
}