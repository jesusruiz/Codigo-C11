/*
Leer un valor con formato porcentaje. Ejemplo: 3.5% 
Almacenar el porcentaje en la variable 'porcentaje' de tipo float 
y omitir el caracter % del flujo de entrada. No utilice el carácter de supresión de asignación.
*/

#include <stdio.h>

int main(void) {

	float porcentaje = 0.0;

	printf("Introduzca un valor porcentaje (incluyendo el caracter de porcentaje). Ejemplo 3.5%: ");
	scanf_s("%f%%", &porcentaje);
	printf("El porcentaje introducido es: %.1f\n", porcentaje);
}