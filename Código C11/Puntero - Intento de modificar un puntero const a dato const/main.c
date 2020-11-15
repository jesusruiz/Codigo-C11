//Puntero - Intento de modificar un puntero const a dato const

//El menor privilegio de acceso es otorgado por un puntero const a dato const. 

//Este puntero siempre apunta a la misma ubicación de memoria, 
//y los datos en esa ubicación de memoria no pueden modificarse.

//Así es como se debe pasar una matriz a una función que solo revisa o visualiza la matriz utilizando la notación índice
//de la matriz y que no modifica la matriz.

//En este ejemplo, se define la variable puntero ptr (línea 27) para que sea de tipo const int * const, 
//que se lee de derecha a izquierda como "ptr es un puntero constante a una constante entera". 

//Los mensajes de error son generados cuando se intenta modificar los datos a los que apunta ptr (línea 31)
//y cuando se intenta modificar la dirección almacenada en la variable de puntero (línea 32).

#include <stdio.h>

int main(void) {

	int x = 5;  //declarar e inicializar variable 'x' de tipo entero
	int y;  //declarar variable 'y' de tipo entero

	//ptr es un puntero constante que apunta a un entero constante. 
	//ptr siempre apunta a la misma ubicación de memoria;
	//el valor entero en la ubicación de memoria no puede ser modificado
	const int* const ptr = &x;  //inicialización se produce correctamente

	printf("%d\n", *ptr);  

	*ptr = 7;  //error: *ptr es const; no se le puede asignar un nuevo valor
	ptr = &y;  //error: ptr es const; no se le puede asignar una nueva ubicación de memoria
}