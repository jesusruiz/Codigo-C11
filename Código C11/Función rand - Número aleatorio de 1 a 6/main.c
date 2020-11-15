#include <stdio.h>
#include <stdlib.h>  //Archivo de cabecera que incluye la funci�n rand() y el valor de constante RAND_MAX

int main(void) {

	printf("%s", "Valor maximo que puede tener un numero entero aleatorio: ");
	printf("%d\n", RAND_MAX);  //imprime el valor m�ximo que puede tener un n�mero aleatorio: 32767 (2 bytes - 16 bits)

	//Contador que hace tirar un dado 20 veces
	for (unsigned int contador = 1; contador <= 20; contador++) {

		//Valor aleatorio de 1 a 6
		printf("%10d", 1 + (rand() % 6));

		//Cada 5 n�meros damos un salto de l�nea
		if (contador % 5 == 0) {  //si divir el numero entre 5 da como resto 0, damos un salto de l�nea
			puts("");
		}
	}

	return 0;
}