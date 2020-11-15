//Array - Buscar elemento - Técnica: Búsqueda lineal simple
//La técnica o método de la Búsqueda lineal simple, funciona bien para arrays de pocos elementos o sin clasificar.

//La búsqueda lineal compara cada elemento del array con la clave de búsqueda.

//Debido a que la matriz no está en ningún orden en particular, es tan probable que el valor se encuentre 
//en el primer elemento como en el último. 
//En promedio, por lo tanto, el programa tendrá que comparar la clave de búsqueda 
//con la mitad de los elementos del array.

#include <stdio.h>
#define TAMANO 100

//función prototipo
//recibe el array deonde buscar, la clave a buscar, y el tamaño del array (número de elementos del array)
size_t busquedaLineal(const int array[], int clave, size_t tam);   

int main(void) {

	int a[TAMANO];  //Crear array con nombre identificativo 'a' de 100 elementos

	//Almacenar algún sdato en el array
	for (size_t x = 0; x < TAMANO; ++x) {
		a[x] = 2 * x;
	}

	printf("%s\n", "Valores del array:");
	printf("%s\n", "------------------");
	//Mostrar los valores almacenados en el array
	for (size_t x = 0; x < TAMANO; ++x) {
		if (x % 10 == 0) {
			puts("");  //salto de línea cada 10 elementos
		}
		printf("%7d", x[a]);
	}

	puts("\n");  //salto de línea

	//Pedir al usuario el número a buscar
	printf("Introduzca un numero entero a buscar en el array: ");
	int buscarClave;  //valor a localizar en el array 'a'
	scanf_s("%d", &buscarClave);

	//Probar a localizar el valor buscarClave en el array 'a'
	size_t indice = busquedaLineal(a, buscarClave, TAMANO);

	//mostrar resultados
	if (indice != -1) {
		printf("\nValor encontrado en el indice %d\n", indice);
	}
	else {
		puts("\nValor no encontrado");
	}
}

//compare la clave con cada elemento del array hasta que se encuentre la ubicación
//o hasta que se alcanza el final del array; se retorna el índice del elemento si se encuentra la clave 
//o -1 si no se encuentra la clave
size_t busquedaLineal(const int array[], int clave, size_t tam)
{
	//Recorrer el array
	for (size_t n = 0; n < tam; ++n) {
		if (array[n] == clave) {
			return n;  //retorna la posicion de la clave
		}
	}
	return -1;  //clave no encontrada
}