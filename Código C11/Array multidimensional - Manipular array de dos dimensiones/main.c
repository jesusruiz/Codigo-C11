//Array multidimensional - Manipular array de dos dimensiones

/*
Array que contiene la puntuación conseguida en 4 examenes por 3 estudiantes.

Cada fila del array representa a un estudiante y cada columna representa una calificación en uno de los cuatro exámenes
que los estudiantes realizaron durante el semestre.

Las manipulaciones del array se realizan mediante cuatro funciones. 

La función mínima determina la calificación más baja de cualquier estudiante para el semestre. 
La función máxima determina la calificación más alta de cualquier estudiante para el semestre. 
La función promedio determina el promedio del semestre de un estudiante en particular. 
La función imprimirArray genera la matriz bidimensional en un formato ordenado y tabular.
*/

#include <stdio.h>
#define ESTUDIANTES 3
#define EXAMENES 4

//Funciones prototipo
int minima(const int calificaciones[][EXAMENES], size_t alumnos, size_t exams); 
int maxima(const int calificaciones[][EXAMENES], size_t alumnos, size_t exams);
double promedio(const int conjuntoDeCalificaciones[], size_t exams);
void imprimirArray(const int calificaciones[][EXAMENES], size_t alumnos, size_t exams);

//Función principal que inicia el programa
int main(void) {

	//Inicializar las calificaciones de los estudiantes para los tres estudiantes (filas)
	int calificacionesEstudiantes[ESTUDIANTES][EXAMENES] =
															{ 
																{ 77, 68, 86, 73 },
																{ 96, 87, 89, 78 },
																{ 70, 90, 86, 81 } 
															};

	//Imprimir array calificacionesEstudiantes
	puts("El array es:");
	imprimirArray(calificacionesEstudiantes, ESTUDIANTES, EXAMENES);

	//determinar las calificaciones más baja y más alta
	printf("\n\nCalificacion mas baja: %d\nCalificacion mas alta: %d\n",
		  minima(calificacionesEstudiantes, ESTUDIANTES, EXAMENES),
		  maxima(calificacionesEstudiantes, ESTUDIANTES, EXAMENES));

	//calcular el promedio de calificaciones para cada estudiante
	for (size_t estudiante = 0; estudiante < ESTUDIANTES; ++estudiante) {
		printf("La calificacion promedia para el estudiante %u es %.2f\n",
			estudiante, 
			promedio(calificacionesEstudiantes[estudiante], EXAMENES));
	}
}

//Función Imprimir Array
void imprimirArray(const int calificaciones[][EXAMENES], size_t alumnos, size_t exams) {

	//impimir cabecera de la columna
	printf("%s", "			    [0]  [1]  [2]  [3]");

	//imprimir calificaciones en formato tabular
	for (size_t i = 0; i < alumnos; ++i) {

		//imprimir etiqueta para fila
		printf("\ncalificacionesEstudiante[%u] ", i);

		//imprimir calificaciones de un estudiante
		for (size_t j = 0; j < exams; ++j) {
			printf("%-5d", calificaciones[i][j]);
		}
	}
}

//Función minima
int minima(const int calificaciones[][EXAMENES], size_t alumnos, size_t exams) {

	//almacenamos la primera nota del array para que nos sirva de referencia a la hora de comparar las demás calificaciones.
	int min = calificaciones[0][0];

	//bucle para recorrer las filas
	for (size_t i = 0; i < alumnos; ++i) {

		//bucle para recorrer las columnas
		for (size_t j = 0; j < exams; ++j) {
		//preguntamos si el valor contenido en el elemento del array actual es menor que el almacenado en la variable min
			if (calificaciones[i][j] < min) {
				min = calificaciones[i][j];
			}
		}
	}

	return min;
}

//Función maxima
int maxima(const int calificaciones[][EXAMENES], size_t alumnos, size_t exams) {

	//almacenamos la primera nota del array para que nos sirva de referencia a la hora de comparar las demás calificaciones.
	int max = calificaciones[0][0];

	//bucle para recorrer las filas
	for (size_t i = 0; i < alumnos; ++i) {

		//bucle para recorrer las columnas
		for (size_t j = 0; j < exams; ++j) {
			//preguntamos si el valor contenido en el elemento del array actual es mayor que el almacenado en la variable min
			if (calificaciones[i][j] > max) {
				max = calificaciones[i][j];
			}
		}
	}

	return max;
}

//Función promedio
double promedio(const int conjuntoDeCalificaciones[], size_t exams) {

	int total = 0;  //suma de las calificaciones de los examenes

	//total de todas las calificaciones para un estudiante
	for (size_t i = 0; i < exams; ++i) {
		total += conjuntoDeCalificaciones[i];
	}
	
	return (double)total / exams;  //promedio
}