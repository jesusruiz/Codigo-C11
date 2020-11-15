#include <stdio.h>

// Función personalizada - Cuadrado de los diez primeros numeros

int cuadrado(int num); // function prototipo

int main(void) {
	
	for (int numero = 1; numero <= 10; numero++) {
		printf("%d  ", cuadrado(numero)); //función cuadrado que envía una copia del argumento numero a la función cuadrado
	}
}

//la función cuadrado devuelve el cuadrado de su parámetro
int cuadrado(int num) {

	int resultado = num * num;

	return resultado;
}