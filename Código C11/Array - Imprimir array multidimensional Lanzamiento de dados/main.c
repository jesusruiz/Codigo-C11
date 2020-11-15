//Lanzar dos dados y almacenar el valor de cada dado en un array multidimensional

#include <stdio.h>
#include <time.h>
#define TAMANO 6

int main(void) {

	int dado1, dado2;
	int tiradasDados[TAMANO][TAMANO] = { 0 };

	//Encabezado tabla
	printf("\t1  2  3  4  5  6\n");

	srand(time(NULL));

	//Lanzar 100 veces dos dados
	for (int lanzamiento = 0; lanzamiento <= 100; lanzamiento++) {
		//Lanzamiento de ambos dados
		dado1 = 1 + rand() % 6;
		dado2 = 1 + rand() % 6;

		//Imprimir el resultado de los lanzamientos de los dados
		//printf("%d\n", dado1);
		//printf("%d\n", dado2);

		if (dado1 == 1) {

			if (dado2 == 1) {
				tiradasDados[0][0] = tiradasDados[0][0] + 1;
			}
			else if (dado2 == 2) {
				tiradasDados[1][0] = tiradasDados[1][0] + 1;
			}
			else if (dado2 == 3) {
				tiradasDados[2][0] = tiradasDados[2][0] + 1;
			}
			else if (dado2 == 4) {
				tiradasDados[3][0] = tiradasDados[3][0] + 1;
			}
			else if (dado2 == 5) {
				tiradasDados[4][0] = tiradasDados[4][0] + 1;
			}
			else {
				tiradasDados[5][0] = tiradasDados[5][0] + 1;
			}
		}

		if (dado1 == 2) {

			if (dado2 == 1) {
				tiradasDados[0][1] = tiradasDados[0][1] + 1;
			}
			else if (dado2 == 2) {
				tiradasDados[1][1] = tiradasDados[1][1] + 1;
			}
			else if (dado2 == 3) {
				tiradasDados[2][1] = tiradasDados[2][1] + 1;
			}
			else if (dado2 == 4) {
				tiradasDados[3][1] = tiradasDados[3][1] + 1;
			}
			else if (dado2 == 5) {
				tiradasDados[4][1] = tiradasDados[4][1] + 1;
			}
			else {
				tiradasDados[5][1] = tiradasDados[5][1] + 1;
			}
		}

		if (dado1 == 3) {

			if (dado2 == 1) {
				tiradasDados[0][2] = tiradasDados[0][2] + 1;
			}
			else if (dado2 == 2) {
				tiradasDados[1][2] = tiradasDados[1][2] + 1;
			}
			else if (dado2 == 3) {
				tiradasDados[2][2] = tiradasDados[2][2] + 1;
			}
			else if (dado2 == 4) {
				tiradasDados[3][2] = tiradasDados[3][2] + 1;
			}
			else if (dado2 == 5) {
				tiradasDados[4][2] = tiradasDados[4][2] + 1;
			}
			else {
				tiradasDados[5][2] = tiradasDados[5][2] + 1;
			}
		}

		if (dado1 == 4) {

			if (dado2 == 1) {
				tiradasDados[0][3] = tiradasDados[0][3] + 1;
			}
			else if (dado2 == 2) {
				tiradasDados[1][3] = tiradasDados[1][3] + 1;
			}
			else if (dado2 == 3) {
				tiradasDados[2][3] = tiradasDados[2][3] + 1;
			}
			else if (dado2 == 4) {
				tiradasDados[3][3] = tiradasDados[3][3] + 1;
			}
			else if (dado2 == 5) {
				tiradasDados[4][3] = tiradasDados[4][3] + 1;
			}
			else {
				tiradasDados[5][3] = tiradasDados[5][3] + 1;
			}
		}

		if (dado1 == 5) {

			if (dado2 == 1) {
				tiradasDados[0][4] = tiradasDados[0][4] + 1;
			}
			else if (dado2 == 2) {
				tiradasDados[1][4] = tiradasDados[1][4] + 1;
			}
			else if (dado2 == 3) {
				tiradasDados[2][4] = tiradasDados[2][4] + 1;
			}
			else if (dado2 == 4) {
				tiradasDados[3][4] = tiradasDados[3][4] + 1;
			}
			else if (dado2 == 5) {
				tiradasDados[4][4] = tiradasDados[4][4] + 1;
			}
			else {
				tiradasDados[5][4] = tiradasDados[5][4] + 1;
			}
		}

		if (dado1 == 6) {

			if (dado2 == 1) {
				tiradasDados[0][5] = tiradasDados[0][5] + 1;
			}
			else if (dado2 == 2) {
				tiradasDados[1][5] = tiradasDados[1][5] + 1;
			}
			else if (dado2 == 3) {
				tiradasDados[2][5] = tiradasDados[2][5] + 1;
			}
			else if (dado2 == 4) {
				tiradasDados[3][5] = tiradasDados[3][5] + 1;
			}
			else if (dado2 == 5) {
				tiradasDados[4][5] = tiradasDados[4][5] + 1;
			}
			else {
				tiradasDados[5][5] = tiradasDados[5][5] + 1;
			}
		}
	}

	//Bucle que recorre todos los elementos del array multidimensional
	for (int f = 0; f < TAMANO; f++) {
		printf("%d  \t", f + 1);
			for (int c = 0; c < TAMANO; c++) {
				printf("%d  ", tiradasDados[f][c]);
					if (c == 5) {
					puts("");
			}
		}
	}
}