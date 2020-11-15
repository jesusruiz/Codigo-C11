//Array - Buscar elemento - T�cnica: B�squeda lineal simple
//La t�cnica o m�todo de la B�squeda lineal simple, funciona bien para arrays de pocos elementos o sin clasificar.

//La b�squeda lineal compara cada elemento del array con la clave de b�squeda.

//Debido a que la matriz no est� en ning�n orden en particular, es tan probable que el valor se encuentre 
//en el primer elemento como en el �ltimo. 
//En promedio, por lo tanto, el programa tendr� que comparar la clave de b�squeda 
//con la mitad de los elementos del array.

#include <stdio.h>
#define TAMANO 100

//funci�n prototipo
//recibe el array deonde buscar, la clave a buscar, y el tama�o del array (n�mero de elementos del array)
size_t busquedaLineal(const int array[], int clave, size_t tam);   

int main(void) {

	int a[TAMANO];  //Crear array con nombre identificativo 'a' de 100 elementos

	//Almacenar alg�n sdato en el array
	for (size_t x = 0; x < TAMANO; ++x) {
		a[x] = 2 * x;
	}

	printf("%s\n", "Valores del array:");
	printf("%s\n", "------------------");
	//Mostrar los valores almacenados en el array
	for (size_t x = 0; x < TAMANO; ++x) {
		if (x % 10 == 0) {
			puts("");  //salto de l�nea cada 10 elementos
		}
		printf("%7d", x[a]);
	}

	puts("\n");  //salto de l�nea

	//Pedir al usuario el n�mero a buscar
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

//compare la clave con cada elemento del array hasta que se encuentre la ubicaci�n
//o hasta que se alcanza el final del array; se retorna el �ndice del elemento si se encuentra la clave 
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