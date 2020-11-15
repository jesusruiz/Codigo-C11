//Punteros a Funciones - Ordenar elementos de un array en orden ascendente o descendente
/*
Este ejemplo consta de una función método de la burbuja, 
una función para intercambiar los valores, otra función para ordenar ascendentemente 
y otra función para ordenar descendentemente.

La función burbuja recibe como argumento:
un puntero a una función - que puede apuntar a la función ascendente o a la función descendente, 
además de un array de tipo entero y el tamaño del array. 

El programa solicita al usuario que elija si el array debe ser ordenado en orden ascendente o descendente. 
Si el usuario ingresa 1, se pasa un puntero a la función ascendente de la función burbuja, 
lo que hace que la array se ordene en orden creciente. 
Si el usuario ingresa 2, se pasa un puntero a la función descendente de la función burbuja, 
lo que hace que el array se ordene en orden decreciente.
*/

#include <stdio.h>

#define TAMANO 10  //Tamaño del array

//Funciones prototipo
//recibe un array, el tamaño del array, y un puntero a la función comparar(que a su vez espera dos valores de tipo entero)
void burbuja(int numeros[], size_t tamano, int (*comparar)(int a, int b));  
//ambas funciones reciben dos valores de tipo entero
int ascendente(int a, int b);
int descendente(int a, int b);

//Función principal inicio de programa
int main(void) {
	
	//inicializar array desordenado 'numeros'
	int numeros[TAMANO] = { 2, 6, 4, 8, 10, 12, 89, 68, 45, 37 };

	printf("%s", "Introduzca 1 para ordenar array en orden ascendente,\n"
			"introduzca 2 para ordenar array en orden descendente: ");
	int orden;  //almacenará 1 para orden ascendente o 2 para orden descendente
	scanf_s("%d", &orden);

	puts("\nValores de los elementos del array en el orden original");

	//imprimir los valores de los elementos en el orden original
	for (size_t contador = 0; contador < TAMANO; ++contador) {
		printf("%5d", numeros[contador]);
	}

	//ordenar array en orden ascendente; se pasa a la función ascendente como argumento
	//para especificar el orden ascendente
	if (orden == 1) {
		burbuja(numeros, TAMANO, ascendente);
		puts("\nElementos ordenados en orden ascendente");
	}
	else {  //pasar a la función descendente
		burbuja(numeros, TAMANO, descendente);
		puts("\nElementos ordenados en orden descendente");
	}

	//imprimir array ordenado
	for (size_t contador = 0; contador < TAMANO; ++contador) {
		printf("%5d", numeros[contador]);
	}

	puts("\n");
}

//Método de la burbuja de tipo multipropósito
//La comparación de parámetros es un puntero a la función de comparación que determina el orden de clasificación
//El puntero *comparar ya ha recibido en este punto si apunta a la función ascendente o a la función descendente
void burbuja(int numeros[], size_t tamano, int (*comparar)(int a, int b))
{
	void intercambiar(int* elemento1Ptr, int* elemento2ptr);  //Función prototipo

	//bucle para controlar pases
	for (unsigned int pase = 1; pase < tamano; ++pase) {
		
		//bucle para controlar el número de comparaciones por pase
		for (size_t contador = 0; contador < tamano - 1; ++contador) {
			//si elementos adjuntos se encuentran desordenados, intercambiar sus valores
			//Del mismo modo que un puntero a una variable se desreferencia para acceder al valor de la variable,
			//un puntero a una función se desreferencia (*nombre_función) para usar la función.
			//si (llamar a la función ascendente o descendente) y comparar ambos elementos en la función 
			if ((*comparar)(numeros[contador], numeros[contador + 1])) {
				//llamar a la función intercambiar para intercambiar sus posiciones de memoria
				intercambiar(&numeros[contador], &numeros[contador + 1]);
			}
		}
	}
}

//Intercambiar valores de las ubicaciones de memoria de los punteros elemento1Ptr y
//elemento2Ptr
void intercambiar(int* elemento1Ptr, int* elemento2Ptr)
{
	int temporal = *elemento1Ptr;
	*elemento1Ptr = *elemento2Ptr;
	*elemento2Ptr = temporal;
}

//Determinar si los elementos están desordenados para un orden ascendente
int ascendente(int a, int b)
{
	return b < a;  //deben intercambiarse si b es menor que a
}

//Determinar si los elementos están desordenados para un orden descendente
int descendente(int a, int b)
{
	return b > a;  //deben intercambiarse si b es mayor que a
}
