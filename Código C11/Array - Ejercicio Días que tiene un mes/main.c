/*
Crea un programa que pida un número al usuario un número de mes (por ejemplo, el 4) y diga cuántos días tiene 
(por ejemplo, 30) y el nombre del mes. Debes usar un vector. 
Para simplificarlo vamos a suponer que febrero tiene 28 días.
*/

#include <stdio.h>
#define MESES 12

int main(void) {

	int meses[MESES] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int numero = 0;

	do {
		printf("Introduzca un numero del 1 al 12: ");
		scanf_s("%u", &numero);
	} while (numero < 1 || numero > 12);

	printf("\nNumero introducido: %u\n", numero);

	switch (numero) {

		case 1: 
			printf("%s\n", "Nombre del mes ENERO");
			printf("Enero tiene %d dias.\n", meses[numero - 1]);
			break;

		case 2:
			printf("%s\n", "Nombre del mes FEBRERO");
			printf("Febrero tiene %d dias cuando el año no es bisiesto.\n", meses[numero - 1]);
			break;

		case 3:
			printf("%s\n", "Nombre del mes MARZO");
			printf("Marzo tiene %d dias.\n", meses[numero - 1]);
			break;

		case 4:
			printf("%s\n", "Nombre del mes ABRIL");
			printf("Abril tiene %d dias.\n", meses[numero - 1]);
			break;

		case 5:
			printf("%s\n", "Nombre del mes MAYO");
			printf("Mayo tiene %d dias.\n", meses[numero - 1]);
			break;

		case 6:
			printf("%s\n", "Nombre del mes JUNIO");
			printf("Junio tiene %d dias.\n", meses[numero - 1]);
			break;

		case 7:
			printf("%s\n", "Nombre del mes JULIO");
			printf("Julio tiene %d dias.\n", meses[numero - 1]);
			break;

		case 8:
			printf("%s\n", "Nombre del mes AGOSTO");
			printf("Agosto tiene %d dias.\n", meses[numero - 1]);
			break;

		case 9:
			printf("%s\n", "Nombre del mes SEPTIEMBRE");
			printf("Septiembre tiene %d dias.\n", meses[numero - 1]);
			break;

		case 10:
			printf("%s\n", "Nombre del mes OCTUBRE");
			printf("Octubre tiene %d dias.\n", meses[numero - 1]);
			break;

		case 11:
			printf("%s\n", "Nombre del mes NOVIEMBRE");
			printf("Noviembre tiene %d dias.\n", meses[numero - 1]);
			break;

		case 12:
			printf("%s\n", "Nombre del mes DICIEMBRE");
			printf("Diciembre tiene %d dias.\n", meses[numero - 1]);
			break;
	}

}