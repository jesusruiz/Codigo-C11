//Puntero - Operadores de Dirección (&) e Indirección (*)

//El operador & (Operador de Dirección), es un operador unario que devuelve la dirección de su operando. 

//El operador unario *, comúnmente denominado Operador de Indirección u Operador de Desreferenciación, 
//devuelve el valor de la variable u objeto al que apunta su operando (es decir, un puntero).

#include <stdio.h>

int main(void) {

	int a = 7;  //Declaración e incialización de una variable de tipo entero
	int* aPtr = &a;  //Establecer la variable 'aPtr' de tipo entero que apunta a la dirección de la variable 'a'

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