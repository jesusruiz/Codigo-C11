#include <stdio.h>
#include <stdlib.h>  //Archivo de cabecera que incluye la funci�n rand() y el valor de constante RAND_MAX

int main(void) {

	int numeroAleatorio;

	printf("%s", "Valor maximo que puede tener un numero entero aleatorio: ");
	printf("%d", RAND_MAX);  //imprime el valor m�ximo que puede tener un n�mero aleatorio: 32767 (2 bytes - 16 bits)

	numeroAleatorio = rand();  //imprime un n�mero entre 0 y 32767 (RAND_MAX)

	printf("\nNumero aleatorio obtenido al ejecutar el programa: %d", numeroAleatorio);

	return 0;
}