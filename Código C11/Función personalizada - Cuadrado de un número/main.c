#include <stdio.h>

// Funci�n personalizada - Cuadrado de los diez primeros numeros

int cuadrado(int num); // function prototipo

int main(void) {
	
	for (int numero = 1; numero <= 10; numero++) {
		printf("%d  ", cuadrado(numero)); //funci�n cuadrado que env�a una copia del argumento numero a la funci�n cuadrado
	}
}

//la funci�n cuadrado devuelve el cuadrado de su par�metro
int cuadrado(int num) {

	int resultado = num * num;

	return resultado;
}