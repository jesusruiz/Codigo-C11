/*
La funci�n sscanf() se utiliza para leer datos formateados desde un array de caracteres 's'.
La funci�n utiliza los mismos especificadores de conversi�n que la funci�n scanf().
Para a�adir seguridad al programa, es mejor utilizar la funci�n sscanf_s() introducida en el est�ndar C11

El programa lee un valor int y un valor double desde el array 's' 
y almacena los valores en las variables 'x' e 'y' respectivamente. 

A continuaci�n, se imprimen los valores de 'x' e 'y'. Array s es el primer argumento de la funci�n sscanf().
*/

#include <stdio.h>

int main(void) {

	char s[] = "31298 87.375";  //inicializar el array de caracteres 's'
	int x;  //variable para almacenar un valor entero
	double y;  //variable para almacenar un valor double

	//Funci�n sscanf() destinada a almacenar los valores almacenados en el array 's' 
	//dentro de las variables 'x' e 'y' respectivamente
	sscanf_s(s, "%d%lf", &x, &y);

	printf("%s\n%s%6d\n%s%8.3f\n",
		"Los valores almacenados en el array de caracteres \'s\' son:",
		"entero:", x, "double:", y);
}