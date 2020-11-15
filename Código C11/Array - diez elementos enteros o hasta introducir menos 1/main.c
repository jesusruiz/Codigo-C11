/*Programa que declare un vector de diez elementos enteros y pida números para rellenarlo 
hasta que se llene el vector o se introduzca un número negativo.Entonces se debe imprimir 
el vector(sólo los elementos introducidos).
*/

#include <stdio.h>
#define TAMANO 10

int main(void) {

	int numeros[TAMANO];
	int numero;
	int contador = 0;

	do {
		printf("Introduzca un numero positivo (NUMERO NEGATIVO para finalizar de introducir numeros): ");
		scanf_s("%u", &numero);
		numeros[contador] = numero;
		contador = contador + 1;
	} while (numero > 0  && contador <= 9);

	printf("\nElementos introducidos en el array:\n");
	for (int elemento = 0; elemento <= TAMANO; elemento++) {
		if (numeros[elemento] >= 0) {
			printf("%u ", numeros[elemento]);
		}
	}
}