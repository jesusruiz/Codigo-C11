/*
Enumeraciones

Una enumeraci�n (palabra reservada enum),
es un conjunto de constantes de enumeraci�n enteras representadas por identificadores.

Los valores de una enumeraci�n comienzan con 0, a menos que se especifique lo contrario, y se incrementan en 1.
*/

#include <stdio.h>

//Las siguientes constantes de enumeraci�n representan los meses del a�o
enum meses {
	ENE = 1, FEB, MAR, ABR, MAY, JUN, JUL, AGO, SEP, OCT, NOV, DIC
};

int main(void) {

	//inicializar array de punteros
	//Dejamos el primer elemento sin definir, ya que el primer valor de la enumeraci�n empieza en 1
	const char *nombreMes[] = { "", "Enero", "Febrero", "Marzo",
		"Abril", "Mayo", "Junio", "Julio", "Agosto", "Septiembre", "Octubre",
		"Noviembre", "Diciembre" };

	//Bucle a trav�s de meses
	for (enum meses mes = ENE; mes <= DIC; ++mes) {
		printf("%2d%11s\n", mes, nombreMes[mes]);
	}
}

