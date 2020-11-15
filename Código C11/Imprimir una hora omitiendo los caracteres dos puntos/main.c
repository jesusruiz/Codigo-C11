/*
Leer una hora en formato hh: mm: ss 
almacenando las partes de la hora en las variables de tipo entero hora, minutos y segundos. 
Omita los caracteres dos puntos (:) en el flujo de entrada. 
Utilice el carácter de supresión de asignación.
*/

#include <stdio.h>

int main(void) {

	int hora;
	int minutos;
	int segundos;

	printf("Introduzca una hora en formato hh:mm:ss ");
	scanf_s("%d%*c%d%*c%d", &hora, &minutos, &segundos);

	printf("La hora introducida fue: %d %d %d\n", hora, minutos, segundos);
}