/*
Saltando caracteres con scanf()

A menudo, es necesario omitir ciertos caracteres en el flujo de entrada. Por ejemplo, una fecha puede introducirse como

11-10-2020

Cada n�mero de la fecha debe almacenarse, pero los guiones que separan los n�meros pueden ser descartados. 
Para eliminar los caracteres innecesarios, incl�yalos en la cadena de control de formato de scanf; 
caracteres de espacio en blanco, espacio, nueva l�nea y tabulaci�n, omitir todos los espacios en blanco iniciales.

scanf("%d-%d-%d", &mes, &dia, &ano);

Aunque este ejemplo anterior, elimina los guiones introducidos, es posible que la fecha pueda ser introducida como

11/10/2020

En este caso, la instrucci�n scanf anterior no eliminar�a los caracteres innecesarios. 
Por esta raz�n, scanf proporciona el car�cter de supresi�n de asignaci�n *. 
Este car�cter permite a scanf leer cualquier tipo de datos de la entrada y descartarlos sin asignarlos a una variable.
*/

#include <stdio.h>

int main(void) {

	int dia = 0;
	int mes = 0;
	int ano = 0;

	printf("%s", "Introduzca una fecha en formato dd-mm-yyyy: ");
	scanf_s("%d%*c%d%*c%d", &dia, &mes, &ano);

	printf("dia = %d mes = %d ano = %d\n\n", dia, mes, ano);

	printf("%s", "Introduzca una fecha en formato dd/mm/yyyy: ");
	scanf_s("%d%*c%d%*c%d", &dia, &mes, &ano);
	printf("dia = %d mes = %d ano = %d\n\n", dia, mes, ano);
}