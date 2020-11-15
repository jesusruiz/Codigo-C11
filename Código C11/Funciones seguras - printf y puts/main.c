#include <stdio.h>

//Funciones seguras printf(con dos argumentos) y puts

//Si se necesita mostrar una cadena que termina con una nueva l�nea, debemos utilizar la funci�n
//puts(), que a�ade al final del argumento de cadena un car�cter de nueva l�nea.

//Si se necesita mostrar una cadena SIN que termine con una nueva l�nea, debemos utilizar la funci�n
//printf(), pero con dos argumentos: una cadena de control de formato "%s" y la cadena para mostrar

int main(void) {

	puts("Hola mundo");  //Imprimir� la cadena "Hola mundo" a�adir� autom�ticamente una nueva l�nea
	printf("%s", "Bienvenido ");  //funci�n printf() segura
}