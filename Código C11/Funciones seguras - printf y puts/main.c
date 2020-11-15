#include <stdio.h>

//Funciones seguras printf(con dos argumentos) y puts

//Si se necesita mostrar una cadena que termina con una nueva línea, debemos utilizar la función
//puts(), que añade al final del argumento de cadena un carácter de nueva línea.

//Si se necesita mostrar una cadena SIN que termine con una nueva línea, debemos utilizar la función
//printf(), pero con dos argumentos: una cadena de control de formato "%s" y la cadena para mostrar

int main(void) {

	puts("Hola mundo");  //Imprimirá la cadena "Hola mundo" añadirá automáticamente una nueva línea
	printf("%s", "Bienvenido ");  //función printf() segura
}