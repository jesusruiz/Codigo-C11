//Array - Calcular la media, la mediana y la moda utilizando matrices

//Array que almacena 99 valores de respuesta sobre una encuesta.
//El programa calcula la media, la mediana y la moda de los 99 valores.

//Media (promedio): Sumar todos los valores y luego dividirlos entre el número de elementos en el array.
//Mediana: Se registran los datos de manera creciente. Es el valor medio cuando los datos se ordenan de menor a mayor.
//Moda: Se recoge el valor (o dato) que más se repite. 

#include <stdio.h>
#define TAMANO 99

//funciona prototipo
void promedio(const unsigned int respuestas[]);
void mediana(unsigned int respuestas[]);
void moda(unsigned int frec[], unsigned const int respuestas[]);
void imprimirArray(const unsigned int a[]);
void burbujaOrdenar(unsigned int a[]);


//función principal que inicia la ejecución del programa
int main(void) {

	unsigned int frecuencia[10] = { 0 }; //inicializar el array frecuencia

	//inicializar el array de respuestas
		unsigned int respuestas[TAMANO] =
		{6, 7, 8, 9, 8, 7, 8, 9, 8, 9,
		 7, 8, 9, 5, 9, 8, 7, 8, 7, 8,
		 6, 7, 8, 9, 3, 9, 8, 7, 8, 7,
		 7, 8, 9, 8, 9, 8, 9, 7, 8, 9,
		 6, 7, 8, 7, 8, 7, 9, 8, 9, 2,
		 7, 8, 9, 8, 9, 8, 9, 7, 5, 3,
		 5, 6, 7, 2, 5, 3, 9, 4, 6, 4,
		 7, 8, 9, 6, 8, 7, 8, 9, 7, 8,
		 7, 4, 4, 2, 5, 3, 8, 7, 5, 6,
		 4, 5, 6, 1, 6, 5, 7, 8, 7};

		//procesar las respuestas
		promedio(respuestas);
		mediana(respuestas);
		moda(frecuencia, respuestas);
}

//calcular el promedio de todas las respuestas
void promedio(const unsigned int respuestas[])
{
	printf("%s\n%s\n%s\n", "********", " Promedio", "********");
	
		unsigned int total = 0;  //variable que almacena la suma total de todos los elementos
	
		//total de los valores de las respuestas
		for (size_t j = 0; j < TAMANO; ++j) {
			total += respuestas[j];
		}
	
		printf("La media es el valor promedio de los datos.\n"
			   "La media es igual al total de todos\n"
			   "los valores de los elementos divididos por el\n"
			   "el numero de datos del array (%u). El valor promedio\n"
			   "en este caso es de: %u / %u = %.4f\n\n",
			   TAMANO, total, TAMANO, (double)total / TAMANO);
}

//ordenar el array y determinar la mediana de los elementos
void mediana(unsigned int respuestas[]) {

	printf("\n%s\n%s\n%s\n%s",
		   "********", " Mediana", "********",
		   "El conjunto no ordenado de respuestas es:");

	imprimirArray(respuestas);  //imprimir array desordenado

	burbujaOrdenar(respuestas);  //ordenar array

	printf("%s", "\n\nEl array ordenado:");
	imprimirArray(respuestas);  //imprimir array ordenado

	//mostrar elemento mediano
	printf("\n\nEl elemento mediano se encuentra en la posicion %u de\n"
		  "un array ordenado formado por %u elementos.\n"
		  "En este caso el elemento mediana es %u\n\n",
		  TAMANO / 2, TAMANO, respuestas[TAMANO / 2]);
}

//determinar la respuesta más frecuente
void moda(unsigned int frec[], const unsigned int respuestas[])
{
	printf("\n%s\n%s\n%s\n", "********", " Moda", "********");
	
		//inicializar frecuencias a 0
		for (size_t calificacion = 1; calificacion <= 9; ++calificacion) {
			frec[calificacion] = 0;
		}

		//resumir frecuencias
		for (size_t j = 0; j < TAMANO; ++j) {
			++frec[respuestas[j]];
		}

		//encabezados de salida para columnas de resultados
		printf("%s%11s%19s\n\n%54s\n%54s\n\n",
			  "Respuesta", "Frecuencia", "Histograma",
			  "1   1   2   2", "5   0   5   0   5");

		//imprimir resultados
		unsigned int masAlta = 0;  //representa la frecuencia más grande
		unsigned int valorModa = 0;  //representa la respuesta más frecuente
			
		for (size_t calificacion = 1; calificacion <= 9; ++calificacion) {
			
			printf("%8u%11u ", calificacion, frec[calificacion]);

			//realizar un seguimiento del valor moda y el valor de frecuencia más grande
			if (frec[calificacion] > masAlta) {
				masAlta = frec[calificacion];
				valorModa = calificacion;
			}

			//imprimir barra de histograma que representa el valor de frecuencia
			for (unsigned int h = 1; h <= frec[calificacion]; ++h) {
				printf("%s", "*");
			}

			puts("");  //imprimir nueva línea
		}
		
		//imprimir el valor moda 
		printf("\nLa moda es el valor mas frecuente..\n"
				 "En este caso la moda es %u que se produjo en"
				 " %u ocasiones.\n", valorModa, masAlta);
}


//función que ordena un array mediante el algoritmo de ordenación de la burbuja
void burbujaOrdenar(unsigned int a[])
{
	//bucle que controla el número de pasadas
	for (unsigned int pases = 1; pases < TAMANO; ++pases) {
	
		//bucle para controlar el número de comparaciones por pase
		for (size_t j = 0; j < TAMANO - 1; ++j) {
		
			//intercambiar los elementos si están fuera de orden
			 if (a[j] > a[j + 1]) {
				unsigned int auxiliar = a[j];
				a[j] = a[j + 1];
				a[j + 1] = auxiliar;
			}
		}
	}
}

//imprimir contenido del array (20 valores por fila)
void imprimirArray(const unsigned int a[])
{
	//imprimir elementos del array
	for (size_t j = 0; j < TAMANO; ++j) {

		if (j % 20 == 0) {  //comenzar una nueva línea cada 20 elementos imprimidos
			puts("");  //imprimir nueva línea
		}
	
		printf("%2u", a[j]);  //imprimir el valor del elemento
	}
}