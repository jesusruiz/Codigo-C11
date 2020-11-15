//Puntero - Intento de modificar un puntero constante que apunta a dato no constante

//Un puntero constante a datos no constantes siempre apunta a la misma ubicaci�n de memoria, y los datos 
//en esa ubicaci�n pueden modificarse a trav�s del puntero.

//Este es el valor predeterminado para un nombre de matriz.
//Un nombre de matriz es un puntero constante al elemento inicial de la matriz. 
//Se puede acceder y cambiar todos los datos de la matriz utilizando el nombre de la matriz y el indice de la matriz.
//Los punteros que se declaran constantes deben inicializarse cuando se definen

//En este ejemplo, se intenta modificar un puntero constante. 
//El puntero ptr se define en la l�nea 26 como de tipo int * const. 
//La definici�n se lee de derecha a izquierda como "ptr es un puntero constante a un entero". 
//El puntero se inicializa (l�nea 26) con la direcci�n de memoria de la variable entera x. 
//El programa intenta asignar la direcci�n de y a ptr (l�nea 29), pero el compilador genera un mensaje de error.

#include <stdio.h>

int main(void) {

	int x;  //declaro una variable de tipo entero sin inicializar
	int y;  //declaro otra variable de tipo entero sin inicializar

	//ptr es un puntero constante a un entero que puede ser modificado a trav�s de ptr, 
	//pero ptr siempre apunta a la misma ubicaci�n de memoria
	int* const ptr = &x; 

	*ptr = 7;  //permitido: *ptr no es const
	ptr = &y;  //error: ptr es const; y no se le puede asignar otra ubicaci�n de memoria
}
