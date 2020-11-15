/*
Leyendo un número específico de caracteres con scanf()
*/

#include <stdio.h>

int main(void) {

	int x;
	int y;

	printf("%s", "Introduzca seis digitos: ");
	scanf_s("%2d%d", &x, &y);

	printf("Los seis digitos introducidos fueron %d y %d\n", x, y);
}