//Punteros a Funciones - Crear un subsistema basado en men�s

/*Se le solicita al usuario que seleccione una opci�n de un men� (por ejemplo de la 1 a la 3) 
introduciendo el n�mero del elemento del men�. Cada opci�n es servida por una funci�n diferente.

Los punteros a cada funci�n se almacenan en un array de punteros a funciones. 
La elecci�n del usuario es utilizada como �ndice en el array, y el puntero del array ses utilizado para llamar a la funci�n.

Definimos tres funciones �funci�n1, funci�n2 y funci�n3� que toman un argumento entero y no devuelven nada.

Almacenamos los punteros a estas tres funciones en el array 'f', definido en la l�nea 39.

La definici�n se lee comenzando por el conjunto de par�ntesis m�s a la izquierda, 
"f es un array de 3 punteros a funciones que toman un int como argumento y devuelven void".

El array se inicializa con los nombres de las tres funciones. 
Cuando el usuario introduce un valor entre 0 y 2, el valor se utiliza como �ndice en el array de punteros a funciones.

En la llamada a la funci�n (l�nea 25), f[elecci�n] selecciona el puntero en la ubicaci�n [elecci�n] del array. 
El puntero se desreferencia para llamar a la funci�n, y la elecci�n se pasa como argumento a la funci�n.

Cada funci�n imprime el valor de su argumento y el nombre de su funci�n para demostrar que la funci�n 
es llamada correctamente.
*/

#include <stdio.h>

//Funciones prototipo
//Funciones que no devuelven nada y que reciben un argumento de tipo entero
void funcion1(int a);
void funcion2(int b);
void funcion3(int c);

//Funci�n Inicio de programa
int main(void) {

	//Inicializar array de 3 punteros a funciones que toman un argumento de tipo entero
	//y no devuelven nada
	void (*f[3])(int) = { funcion1, funcion2, funcion3 };

	printf("%s", "Introduzca un numero entre 0 y 2, 3 para finalizar: ");
	size_t eleccion;  //variable para almacenar la eleccion del usuario
	scanf_s("%u", &eleccion);

	//procesar la elecci�n del usuario
	while (eleccion >= 0 && eleccion < 3) {

		//invocar a la funci�n elegida en la ubicaci�n correspondiente del array 'f' y pasar
		//la elecci�n como argumento
		(*f[eleccion])(eleccion);

		printf("%s", "Introduzca un numero entreo 0 y 2, 3 para finalizar: ");
		scanf_s("%u", &eleccion);
	}

	puts("Ejecucion del programa finalizada.");
}

//Funci�n1
void funcion1(int a) {

	printf("Introdujo %d por lo que la funcion1 fue llamada\n\n", a);
}

//Funci�n2
void funcion2(int b) {

	printf("Introdujo %d por lo que la funcion2 fue llamada\n\n", b);
}

//Funci�n3
void funcion3(int c) {

	printf("Introdujo %d por lo que la funcion3 fue llamada\n\n", c);
}