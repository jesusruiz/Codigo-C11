//Punteros a Funciones - Crear un subsistema basado en menús

/*Se le solicita al usuario que seleccione una opción de un menú (por ejemplo de la 1 a la 3) 
introduciendo el número del elemento del menú. Cada opción es servida por una función diferente.

Los punteros a cada función se almacenan en un array de punteros a funciones. 
La elección del usuario es utilizada como índice en el array, y el puntero del array ses utilizado para llamar a la función.

Definimos tres funciones —función1, función2 y función3— que toman un argumento entero y no devuelven nada.

Almacenamos los punteros a estas tres funciones en el array 'f', definido en la línea 39.

La definición se lee comenzando por el conjunto de paréntesis más a la izquierda, 
"f es un array de 3 punteros a funciones que toman un int como argumento y devuelven void".

El array se inicializa con los nombres de las tres funciones. 
Cuando el usuario introduce un valor entre 0 y 2, el valor se utiliza como índice en el array de punteros a funciones.

En la llamada a la función (línea 25), f[elección] selecciona el puntero en la ubicación [elección] del array. 
El puntero se desreferencia para llamar a la función, y la elección se pasa como argumento a la función.

Cada función imprime el valor de su argumento y el nombre de su función para demostrar que la función 
es llamada correctamente.
*/

#include <stdio.h>

//Funciones prototipo
//Funciones que no devuelven nada y que reciben un argumento de tipo entero
void funcion1(int a);
void funcion2(int b);
void funcion3(int c);

//Función Inicio de programa
int main(void) {

	//Inicializar array de 3 punteros a funciones que toman un argumento de tipo entero
	//y no devuelven nada
	void (*f[3])(int) = { funcion1, funcion2, funcion3 };

	printf("%s", "Introduzca un numero entre 0 y 2, 3 para finalizar: ");
	size_t eleccion;  //variable para almacenar la eleccion del usuario
	scanf_s("%u", &eleccion);

	//procesar la elección del usuario
	while (eleccion >= 0 && eleccion < 3) {

		//invocar a la función elegida en la ubicación correspondiente del array 'f' y pasar
		//la elección como argumento
		(*f[eleccion])(eleccion);

		printf("%s", "Introduzca un numero entreo 0 y 2, 3 para finalizar: ");
		scanf_s("%u", &eleccion);
	}

	puts("Ejecucion del programa finalizada.");
}

//Función1
void funcion1(int a) {

	printf("Introdujo %d por lo que la funcion1 fue llamada\n\n", a);
}

//Función2
void funcion2(int b) {

	printf("Introdujo %d por lo que la funcion2 fue llamada\n\n", b);
}

//Función3
void funcion3(int c) {

	printf("Introdujo %d por lo que la funcion3 fue llamada\n\n", c);
}