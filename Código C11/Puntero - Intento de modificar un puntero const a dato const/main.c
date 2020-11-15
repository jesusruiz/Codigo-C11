//Puntero - Intento de modificar un puntero const a dato const

//El menor privilegio de acceso es otorgado por un puntero const a dato const. 

//Este puntero siempre apunta a la misma ubicaci�n de memoria, 
//y los datos en esa ubicaci�n de memoria no pueden modificarse.

//As� es como se debe pasar una matriz a una funci�n que solo revisa o visualiza la matriz utilizando la notaci�n �ndice
//de la matriz y que no modifica la matriz.

//En este ejemplo, se define la variable puntero ptr (l�nea 27) para que sea de tipo const int * const, 
//que se lee de derecha a izquierda como "ptr es un puntero constante a una constante entera". 

//Los mensajes de error son generados cuando se intenta modificar los datos a los que apunta ptr (l�nea 31)
//y cuando se intenta modificar la direcci�n almacenada en la variable de puntero (l�nea 32).

#include <stdio.h>

int main(void) {

	int x = 5;  //declarar e inicializar variable 'x' de tipo entero
	int y;  //declarar variable 'y' de tipo entero

	//ptr es un puntero constante que apunta a un entero constante. 
	//ptr siempre apunta a la misma ubicaci�n de memoria;
	//el valor entero en la ubicaci�n de memoria no puede ser modificado
	const int* const ptr = &x;  //inicializaci�n se produce correctamente

	printf("%d\n", *ptr);  

	*ptr = 7;  //error: *ptr es const; no se le puede asignar un nuevo valor
	ptr = &y;  //error: ptr es const; no se le puede asignar una nueva ubicaci�n de memoria
}