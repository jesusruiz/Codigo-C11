//Puntero - Operadores de Direcci�n (&) e Indirecci�n (*)

//El operador & (Operador de Direcci�n), es un operador unario que devuelve la direcci�n de su operando. 

//El operador unario *, com�nmente denominado Operador de Indirecci�n u Operador de Desreferenciaci�n, 
//devuelve el valor de la variable u objeto al que apunta su operando (es decir, un puntero).

#include <stdio.h>

int main(void) {

	int a = 7;  //Declaraci�n e incializaci�n de una variable de tipo entero
	int* aPtr = &a;  //Establecer la variable 'aPtr' de tipo entero que apunta a la direcci�n de la variable 'a'

	printf("La direccion de la variable a es: %p"
			"\nLa direccion del puntero aPtr es: %p", &a, &aPtr);
	
	puts("");

	printf("\nEl valor de la variable a es: %d"
			"\nEl valor de la variable aPtr es: %d", a, *aPtr);

	puts("");

	printf("\n\nMostrando que los operadores * y & son complementarios "
			"entre si\n&*aPtr = %p"
			"\n*&aPtr = %p\n", &*aPtr, &*aPtr);
}