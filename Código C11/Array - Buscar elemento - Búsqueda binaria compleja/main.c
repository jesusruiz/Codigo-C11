//Array - Buscar elemento - Técnica de la Búsqueda binaria compleja de alta velocidad en un array ordenado

//La técnica o método de la Búsqueda lineal simple, funciona bien para arrays de pocos elementos o sin clasificar. 
//Sin embargo, para arrays de grandes dimensiones la Búsqueda lineal es ineficiente. 
//Si se ordena la matriz, se puede utilizar la técnica de Búsqueda binaria de alta velocidad.

//El algoritmo de búsqueda binaria elimina de la consideración la mitad de los elementos en un array ordenado 
//después de cada comparación.
//El algoritmo localiza el elemento central del array y lo compara con la clave de búsqueda.
//Si son iguales, se ha encontrado la clave de búsqueda y se devuelve el índice del array de ese elemento.
//Si no son iguales, el problema se reduce a seguir buscando en la mitad del array.

//Si la clave de búsqueda es menor que el elemento central del array, 
//el algoritmo buscará en la primera mitad del array, 
//de lo contrario, el algoritmo buscará en la segunda mitad.

//Si la clave de búsqueda no es el elemento central en la submatriz especificada (parte de la matriz original), 
//el algoritmo se repite en una cuarta parte de la matriz original.
//La búsqueda continúa hasta que la clave de búsqueda es igual al elemento central de una submatriz, 
//o hasta que la submatriz consta de un elemento que no es igual a la clave de búsqueda 
//(es decir, no se encuentra la clave de búsqueda).

#include <stdio.h>
#define TAMANO 15

//Funciones prototipo
//-------------------

//La función recibe cuatro argumentos: 
//un array 'b' de tipo entero en el que buscar, 
//una clave de búsqueda de tipo entero, 
//el índice del array más bajo y el índice del array más alto (estos definen la parte del array en donde buscar).
size_t busquedaBinaria(const int b[], int claveBusqueda, size_t min, size_t max);
void imprimirCabecera(void);
void imprimirFila(const int b[], size_t min, size_t med, size_t max);

//Iniciar la ejecución del programa
int main(void) {

	int a[TAMANO];  //Crear array 'a'

	//Almacenar datos en el array 'a'. El array estará ordenado.
	for (size_t i = 0; i < TAMANO; ++i) {
		a[i] = 2 * i;
	}

	printf("%s", "Introduzca un numero entre 0 y 28: ");
	int clave;  //Valor a localizar en array 'a'
	scanf_s("%d", &clave);

	imprimirCabecera();

	//Buscar clave en el array 'a'
	//Se pasa el argumento del nombre del array, de la clave a buscar,
	//de la posición del elementos más bajo donde empezar a buscar 
	//y de la posición del elementos más alto donde terminar la busqueda
	size_t resultado = busquedaBinaria(a, clave, 0, TAMANO - 1);

	//mostrar resultados
	if (resultado != -1) {
		printf("\n%d encontrado en indice %d\n", clave, resultado);
	}
	else {
		printf("\n%d no encontrado\n", clave);
	}
}

//Imprimir una cabecera para la salida de los datos
void imprimirCabecera(void)
{
	puts("\nIndices:");

	//Cabecera de la columna de salida
	for (unsigned int i = 0; i < TAMANO; ++i) {
		printf("%3u ", i);
	}

	puts("");  //nueva línea

	//Línea de salida de - caracteres
	//imprimir 4 guiones por cada elemento existente en el array: 15 x 4 = 60
	for (unsigned int i = 1; i <= 4 * TAMANO; ++i) {  
		printf("%s", "-");
	}

	puts("");  //nueva línea
}

//Función que realiza la Búsqueda Binaria en un array
size_t busquedaBinaria(const int b[], int claveBusqueda, size_t min, size_t max)
{
	//Bucle hasta que el índice más bajo (min) sea mayor que el índice más alto (max)
	while (min <= max) {

		//determinar el elemento medio de la submatriz en la que se busca
		size_t medio = (min + max) / 2;

		//mostrar submatriz utilizada en esta iteración de bucle
		imprimirFila(b, min, medio, max);

		//si la claveBusqueda se encuentra precisamente en el elemento medio, retornar la posición del elemento medio
		if (claveBusqueda == b[medio]) {
			return medio;
		}
		//si la claveBusqueda es menor que el elemento medio, establecer nuevo índice más alto (max)
		else if (claveBusqueda < b[medio]) {
			max = medio - 1;  //buscar en la primera mitad del array
		} //si la busquedaClave es mayor que el elemento medio, establecer nuevo índice más bajo (min)
		else {
			min = medio + 1;  //buscar en la segunda mitad del array
		}
	} //end while

	return -1;  //busquedaClave no encontrada
}

//Imprimir una fila que muestra la parte actual
//del array que está siendo procesado.
void imprimirFila(const int b[], size_t min, size_t med, size_t max)
{
	//recorrer todo el array
	for (size_t i = 0; i < TAMANO; ++i) {

		//mostrar espacios si está fuera del rango de la submatriz actual
		if (i < min || i > max) {
			printf("%s", " ");
		}
		else if (i == med) {  //mostrar elemento medio
			printf("%3d*", b[i]);  //marcar valor medio
		}
		else {  //mostrar otros elementos en la submatriz
			printf("%3d ", b[i]);
		}
	}

	puts("");  //imprimir nueva línea
}