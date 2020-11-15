//Array - Definición del array y establecimiento de los valores de sus elementos en una sola línea

#include <stdio.h>

int main(void) {

	int n[5] = { 12, 24, 32, 48, 64 };

	printf("%s%13s\n", "Elemento", "Valor");

	for (size_t c = 0; c < 5; c++) {
		printf("%8u%13d\n", c, n[c]);
	}
}