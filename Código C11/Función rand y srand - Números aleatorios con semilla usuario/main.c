#include <stdio.h>
#include <stdlib.h>  //Archivo de cabecera que incluye la funci�n rand() y srand() y el valor de constante RAND_MAX

//Funci�n rand() y srand() - N�meros aleatorios con semilla utilizada introducida por el usuario

int main(void) {

	unsigned int semilla; //n�mero utilizado como semilla para el generador de n�meros aleatorios

	printf("%s", "Valor maximo que puede tener un numero entero aleatorio: ");
	printf("%d\n", RAND_MAX);  //imprime el valor m�ximo que puede tener un n�mero aleatorio: 32767 (2 bytes - 16 bits)

	printf("\n%s", "Introduzca un valor para la semilla no superior a ");
	printf("%d: ", RAND_MAX);
	scanf_s("%u", &semilla);  //almacenamos el valor introducido por el usuario en la variable semilla

	srand(semilla);  //sembrar el generador de n�meros aleatorios

	//Contador que hace tirar un dado 10 veces
	for (unsigned int contador = 1; contador <= 10; contador++) {

		//Valor aleatorio de 1 a 6
		printf("%10d", 1 + (rand() % 6));

		//Cada 5 n�meros damos un salto de l�nea
		if (contador % 5 == 0) {  //si divir el numero entre 5 da como resto 0, damos un salto de l�nea
			puts("");
		}
	}

	return 0;
}