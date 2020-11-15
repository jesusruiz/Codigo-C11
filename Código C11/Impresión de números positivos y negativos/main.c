/*
Impresi�n de n�meros positivos y negativos

imprime un n�mero positivo y un n�mero negativo, con y sin el indicador de bandera '+'. 
El signo menos se muestra en ambos casos, pero el signo m�s solo se muestra cuando se usa la bandera '+'.
*/

#include <stdio.h>

int main(void) {

	printf("%d\n%d\n", 786, -786);  //se imprime 786. Un salto de l�nea.
									//se imprime -786. Un salto de l�nea.

	puts("");  //salto de l�nea

	printf("%+d\n%+d\n", 786, -786);  //se imprime +786. Un salto de l�nea.
									  //se imprime -786. Un salto de l�nea.
}