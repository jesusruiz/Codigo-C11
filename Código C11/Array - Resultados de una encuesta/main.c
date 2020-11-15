// Array - Analizando los resultados de una encuesta

/* Se pidió a cuarenta estudiantes que calificaran la calidad de la comida en la cafetería de estudiantes 
en una escala del 1 al 10 (1 significa horrible y 10 significa excelente). 
Almacene las 40 respuestas en un array de tipo entero y resuma los resultados de la encuesta.*/

#include <stdio.h>
#define RESPUESTAS 40
#define FRECUENCIA_RESPUESTAS 11

int main(void) {
	
	//incializamos contador de frecuencias a 0
	int frecuencia[FRECUENCIA_RESPUESTAS] = { 0 };

	//almacenamos las respuestas proporcionadas en el array de respuestas
	int respuestas[RESPUESTAS] = { 1, 2, 6, 4, 8, 5, 9, 7, 8, 10,
			1, 6, 3, 8, 6, 10, 3, 8, 2, 7, 6, 5, 7, 6, 8, 6, 7, 5, 6, 6,
			5, 6, 7, 5, 6, 4, 8, 6, 8, 10 };

	//para cada respuesta, seleccionar el valor de un elemento de las respuestas de la matriz
	//y usar ese valor como índice en la frecuencia de la matriz para
	//determina el elemento a incrementar
	for (size_t respuesta = 0; respuesta < RESPUESTAS; respuesta++) {
		++frecuencia[respuestas[respuesta]];
	}

	//mostrar resultados
	printf("%s%15s\n", "Ratio", "Frecuencia");
	
	//imprimir las frecuencias en formato tabular
	for (size_t ratio = 1; ratio < FRECUENCIA_RESPUESTAS; ++ratio) {
		printf("%5d%15d\n", ratio, frecuencia[ratio]);
	}
}



