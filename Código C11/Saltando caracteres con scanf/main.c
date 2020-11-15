/*
Saltando caracteres con scanf()

A menudo, es necesario omitir ciertos caracteres en el flujo de entrada. Por ejemplo, una fecha puede introducirse como

11-10-2020

Cada número de la fecha debe almacenarse, pero los guiones que separan los números pueden ser descartados. 
Para eliminar los caracteres innecesarios, inclúyalos en la cadena de control de formato de scanf; 
caracteres de espacio en blanco, espacio, nueva línea y tabulación, omitir todos los espacios en blanco iniciales.

scanf("%d-%d-%d", &mes, &dia, &ano);

Aunque este ejemplo anterior, elimina los guiones introducidos, es posible que la fecha pueda ser introducida como

11/10/2020

En este caso, la instrucción scanf anterior no eliminaría los caracteres innecesarios. 
Por esta razón, scanf proporciona el carácter de supresión de asignación *. 
Este carácter permite a scanf leer cualquier tipo de datos de la entrada y descartarlos sin asignarlos a una variable.
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