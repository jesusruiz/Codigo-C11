#include <stdio.h>

//Ejercicio - Tabla Número decimal, binario, octal y decimal equivalente

int main(void) {

	int contador;
	int c, k;

	printf("%s", "Decimal");
	printf("%10s", "\tOctal");
	printf("%16s", "\tHexadecimal");
	printf("%10s", "\tBinario");
	printf("\n--------");
	printf("\t------");
	printf("\t        -----------");
	printf("\t--------");

	for (contador = 1; contador <= 255; contador++) {
		printf("\n%d", contador);
		printf("\t\t%o", contador);
		printf("\t\t%x", contador);
		//queda convertir a binario que no se puede hacer directamente a través de printf()
		aBinario(contador);
	}
}

//Función convertir numero a binario
int aBinario(int numero) {

	int i, j, sum = 0;

	for (i = numero, j = 1; i >= 1; j *= 10, i /= 2)
		sum += (i % 2) * j;
	printf("\t\t%d", sum);
}