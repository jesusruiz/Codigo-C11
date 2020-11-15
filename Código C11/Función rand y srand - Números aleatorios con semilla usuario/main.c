#include <stdio.h>
#include <stdlib.h>  //Archivo de cabecera que incluye la función rand() y srand() y el valor de constante RAND_MAX

//Función rand() y srand() - Números aleatorios con semilla utilizada introducida por el usuario

int main(void) {

	unsigned int semilla; //número utilizado como semilla para el generador de números aleatorios

	printf("%s", "Valor maximo que puede tener un numero entero aleatorio: ");
	printf("%d\n", RAND_MAX);  //imprime el valor máximo que puede tener un número aleatorio: 32767 (2 bytes - 16 bits)

	printf("\n%s", "Introduzca un valor para la semilla no superior a ");
	printf("%d: ", RAND_MAX);
	scanf_s("%u", &semilla);  //almacenamos el valor introducido por el usuario en la variable semilla

	srand(semilla);  //sembrar el generador de números aleatorios

	//Contador que hace tirar un dado 10 veces
	for (unsigned int contador = 1; contador <= 10; contador++) {

		//Valor aleatorio de 1 a 6
		printf("%10d", 1 + (rand() % 6));

		//Cada 5 números damos un salto de línea
		if (contador % 5 == 0) {  //si divir el numero entre 5 da como resto 0, damos un salto de línea
			puts("");
		}
	}

	return 0;
}