//Números aleatorios pares e impares
//a) 2, 4, 6, 8, 10.
//b) 3, 5, 7, 9, 11.
//c) 6, 10, 14, 18, 22.

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	srand(time(NULL));

	int numero_aleatorio_entre_0y10 = rand() % 11;  //número aleatorio entre 0 y 10
	int numero_aleatorio_entre_1y10 = 1 + rand() % 10;  //número aleatorio entre 1 y 10
	int numero_aleatorio_entre_20y30 = rand() % 11 + 20;  //número aleatorio entre 20 y 30 
	int numero_aleatorio_par_entre_2y10 = 2 * (1 + rand() % 5);  //número aleatorio par entre 2 y 10
	int numero_aleatorio_impar_entre_3y11 = 1 + 2 * (1 + rand() % 5);  //número aleatorio par entre 3 y 11
	int numero_aleatorio_par_cada_cuatro_cifras_entre_6y22 = 6 + 4 * (rand() % 5);  //número aleatorio par cada cuatro cifras entre 6 y 22

	printf("Numero aleatorio entre 0 y 10: %d", numero_aleatorio_entre_0y10);
	printf("\nNumero aleatorio entre 1 y 10: %d", numero_aleatorio_entre_1y10);
	printf("\nNumero aleatorio entre 20 y 30: %d", numero_aleatorio_entre_20y30);
	printf("\nNumero aleatorio par entre 2 y 10: %d", numero_aleatorio_par_entre_2y10);
	printf("\nNumero aleatorio impar entre 3 y 11: %d", numero_aleatorio_impar_entre_3y11);
	printf("\nNumero aleatorio par cada cuatro cifras entre 6 y 22: %d", numero_aleatorio_par_cada_cuatro_cifras_entre_6y22);

}