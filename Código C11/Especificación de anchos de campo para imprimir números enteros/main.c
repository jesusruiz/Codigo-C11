/*
Especificaci�n de anchos de campo para imprimir n�meros enteros
*/

#include <stdio.h>

int main(void) {
	
	printf("%4d\n", 1);  //imprime 3 espacios a la izquierda en blanco y el d�gito 
	printf("%4d\n", 12);  //imprime 2 espacios a la izquierda en blanco y los dos d�gito 
	printf("%4d\n", 123);  //imprime 1 espacio a la izquierda en blanco y los tres d�gitos 
	printf("%4d\n", 1234);   //imprime los cuatro d�gitos 
	printf("%4d\n\n", 12345);  //imprime 12345
	
	printf("%4d\n", -1);  //imprime 2 espacios a la izquierda en blanco, el signo menos y el d�gito 
	printf("%4d\n", -12); //imprime 1 espacio a la izquierda en blanco, el signo menos y los dos d�gitos
	printf("%4d\n", -123); //imprime el signo menos y los tres d�gitos
	printf("%4d\n", -1234); //imprime -1234
	printf("%4d\n", -12345); //imprime -12345
}