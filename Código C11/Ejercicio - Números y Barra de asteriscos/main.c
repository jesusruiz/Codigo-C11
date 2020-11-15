#include <stdio.h>

//Ejercicio - Números y Barra de asteriscos (gráfica de asteriscos)

int main(void) {

	unsigned int contador;
	unsigned int numero;
	unsigned int asteriscos;

	for (contador = 1; contador <= 5; contador++) {
		printf("Introduzca el numero %d de 5 (debe ser mayor de 1 y menor a 30): ", contador);
		scanf_s("%u", &numero);
		if (numero < 1 || numero > 30) {
			printf("%s","ERROR el numero introducido debe ser mayor de 1 menor de 30.");
			contador--;
		}
		else {
			for (asteriscos = 1; asteriscos <= numero; asteriscos++) {
				printf("%s", "*");
			}
		}
	printf("\n\n");
	}

}