//Punteros a Funciones - Ordenar elementos de un array en orden ascendente o descendente
/*
Este ejemplo consta de una funci�n m�todo de la burbuja, 
una funci�n para intercambiar los valores, otra funci�n para ordenar ascendentemente 
y otra funci�n para ordenar descendentemente.

La funci�n burbuja recibe como argumento:
un puntero a una funci�n - que puede apuntar a la funci�n ascendente o a la funci�n descendente, 
adem�s de un array de tipo entero y el tama�o del array. 

El programa solicita al usuario que elija si el array debe ser ordenado en orden ascendente o descendente. 
Si el usuario ingresa 1, se pasa un puntero a la funci�n ascendente de la funci�n burbuja, 
lo que hace que la array se ordene en orden creciente. 
Si el usuario ingresa 2, se pasa un puntero a la funci�n descendente de la funci�n burbuja, 
lo que hace que el array se ordene en orden decreciente.
*/

#include <stdio.h>

#define TAMANO 10  //Tama�o del array

//Funciones prototipo
//recibe un array, el tama�o del array, y un puntero a la funci�n comparar(que a su vez espera dos valores de tipo entero)
void burbuja(int numeros[], size_t tamano, int (*comparar)(int a, int b));  
//ambas funciones reciben dos valores de tipo entero
int ascendente(int a, int b);
int descendente(int a, int b);

//Funci�n principal inicio de programa
int main(void) {
	
	//inicializar array desordenado 'numeros'
	int numeros[TAMANO] = { 2, 6, 4, 8, 10, 12, 89, 68, 45, 37 };

	printf("%s", "Introduzca 1 para ordenar array en orden ascendente,\n"
			"introduzca 2 para ordenar array en orden descendente: ");
	int orden;  //almacenar� 1 para orden ascendente o 2 para orden descendente
	scanf_s("%d", &orden);

	puts("\nValores de los elementos del array en el orden original");

	//imprimir los valores de los elementos en el orden original
	for (size_t contador = 0; contador < TAMANO; ++contador) {
		printf("%5d", numeros[contador]);
	}

	//ordenar array en orden ascendente; se pasa a la funci�n ascendente como argumento
	//para especificar el orden ascendente
	if (orden == 1) {
		burbuja(numeros, TAMANO, ascendente);
		puts("\nElementos ordenados en orden ascendente");
	}
	else {  //pasar a la funci�n descendente
		burbuja(numeros, TAMANO, descendente);
		puts("\nElementos ordenados en orden descendente");
	}

	//imprimir array ordenado
	for (size_t contador = 0; contador < TAMANO; ++contador) {
		printf("%5d", numeros[contador]);
	}

	puts("\n");
}

//M�todo de la burbuja de tipo multiprop�sito
//La comparaci�n de par�metros es un puntero a la funci�n de comparaci�n que determina el orden de clasificaci�n
//El puntero *comparar ya ha recibido en este punto si apunta a la funci�n ascendente o a la funci�n descendente
void burbuja(int numeros[], size_t tamano, int (*comparar)(int a, int b))
{
	void intercambiar(int* elemento1Ptr, int* elemento2ptr);  //Funci�n prototipo

	//bucle para controlar pases
	for (unsigned int pase = 1; pase < tamano; ++pase) {
		
		//bucle para controlar el n�mero de comparaciones por pase
		for (size_t contador = 0; contador < tamano - 1; ++contador) {
			//si elementos adjuntos se encuentran desordenados, intercambiar sus valores
			//Del mismo modo que un puntero a una variable se desreferencia para acceder al valor de la variable,
			//un puntero a una funci�n se desreferencia (*nombre_funci�n) para usar la funci�n.
			//si (llamar a la funci�n ascendente o descendente) y comparar ambos elementos en la funci�n 
			if ((*comparar)(numeros[contador], numeros[contador + 1])) {
				//llamar a la funci�n intercambiar para intercambiar sus posiciones de memoria
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

//Determinar si los elementos est�n desordenados para un orden ascendente
int ascendente(int a, int b)
{
	return b < a;  //deben intercambiarse si b es menor que a
}

//Determinar si los elementos est�n desordenados para un orden descendente
int descendente(int a, int b)
{
	return b > a;  //deben intercambiarse si b es mayor que a
}
