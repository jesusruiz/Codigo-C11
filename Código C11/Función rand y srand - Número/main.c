#include <stdio.h>
#include <stdlib.h>  //Archivo de cabecera que incluye la función rand() y srand() y el valor de constante RAND_MAX

//Función rand() y srand() - Números aleatorios con semilla:  srand(time(NULL));

int main(void) {

	unsigned int semilla; //número utilizado como semilla para el generador de números aleatorios

	printf("%s", "Valor maximo que puede tener un numero entero aleatorio: ");
	printf("%d\n", RAND_MAX);  //imprime el valor máximo que puede tener un número aleatorio: 32767 (2 bytes - 16 bits)

	/*
	Esto hace que la computadora lea el reloj interno del equipo, para obtener el valor de la semilla automáticamente.
	La función time() devuelve el número de segundos que han pasado desde la medianoche del 1 de enero de 1970. 
	Este valor se convierte en un entero sin signo y se utiliza como semilla para el generador de números aleatorios. 
	La función prototipo de time() se encuentra en el archivo de cabecera <time.h>.
	*/
	srand(time(NULL));  //sembrar el generador de números aleatorios

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