/*
Leyendo Caracteres y Cadenas con scanf()
*/

#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <stdio.h>

int main(void) {

	char x;  //variable de tipo caracter
	char y[9];  //variable de tipo matriz de cadena (9 caracteres como maximo - incluyendo caracter fin de cadena '/0')

	printf("%s", "Introduzca una cadena: ");
	scanf("%c%8s", &x, y);

	puts("La entrada realizada fue:\n");
	printf("el caracter \"%c\" y la cadena \"%s\"\n", x, y);
}