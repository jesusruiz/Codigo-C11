//Array - Especificadores de clase de almacenamiento static y automatic

//Una variable local static existe durante la duraci�n del programa, pero solo es visible en el cuerpo de la funci�n.
//Podemos aplicar static a una definici�n de un array local para que el array no se cree e inicialice
//cada vez que se llama a la funci�n y el array no se destruya cada vez que se sale de la funci�n en el programa.
//Esto reduce el tiempo de ejecuci�n del programa, particularmente para programas con funciones que sean frecuentemente 
//llamadas y que contengan arrays de gran tama�o.

//Los arrays static se inicializan una vez al inicio del programa. 
//Si no inicializa expl�citamente un array static, los elementos de ese array se inicializan a cero predeterminadamente.

#include <stdio.h>

void staticArrayInic(void);  //funci�n prototipo
void automaticArrayInic(void);  //funci�n prototipo

//Funci�n principal
int main(void) {

	puts("Primera llamada a cada funcion:");
	staticArrayInic();
	automaticArrayInic();

	puts("\nSegunda llamada a cada funcion:");
	staticArrayInic();
	automaticArrayInic();

}

//Funci�n para demostrar un array local static
void staticArrayInic(void) {

	//Inicializa los elementos del array a 0 antes de que la funci�n sea llamada
	static int array1[3];

	puts("\nValores al entrar en staticArrayInic:");

	//imprimir contenido del array1
	for (size_t i = 0; i <= 2; ++i) {
		printf("array1[%u] = %d ", i, array1[i]);
	}

	puts("\nValores al salir en staticArrayInic:");

	//modificar e imprimir contenido de array1
	for (size_t i = 0; i <= 2; ++i) {
		printf("array1[%u] = %d ", i, array1[i] += 5);
	}
}


//Funci�n para demostrar un array local automatic
void automaticArrayInic(void) {

	//Inicializa los elementos cada vez que la funci�n es llamada
	int array2[3] = { 1, 2, 3 };

	puts("\nValores al entrar en automaticArrayInic:");

	//imprimir contenido del array2
	for (size_t i = 0; i <= 2; ++i) {
		printf("array2[%u] = %d ", i, array2[i]);
	}

	puts("\nValores al salir en automaticArrayInic:");

	//modificar e imprimir contenido de array2
	for (size_t i = 0; i <= 2; ++i) {
		printf("array2[%u] = %d ", i, array2[i] += 5);
	}
}