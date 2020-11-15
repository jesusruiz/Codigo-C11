//Array - Graficar los valores de los elementos de un array

#include <stdio.h>
#define TAMANO 5

int main(void) {

	//Inicializar y establecer los 5 valores del array
	int num[TAMANO] = { 19, 3, 15, 7, 11 };

	printf("%s%13s%17s\n", "Elemento", "Valor", "Histograma");
	
	//Para cada elemento del array num, imprimir una barra de histograma
	for (size_t c = 0; c < TAMANO; c++) {
		printf("%8u%13d", c, num[c]);
		printf("%7s", " ");

		for (int i = 0; i < num[c]; i++) {
			printf("%c",'*');  //imprime el caracter entrecomillado entre comillas simples
		}
		puts("");  //imprime una nueva línea
	}
}
