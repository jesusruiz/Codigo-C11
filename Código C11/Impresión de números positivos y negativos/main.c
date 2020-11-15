/*
Impresión de números positivos y negativos

imprime un número positivo y un número negativo, con y sin el indicador de bandera '+'. 
El signo menos se muestra en ambos casos, pero el signo más solo se muestra cuando se usa la bandera '+'.
*/

#include <stdio.h>

int main(void) {

	printf("%d\n%d\n", 786, -786);  //se imprime 786. Un salto de línea.
									//se imprime -786. Un salto de línea.

	puts("");  //salto de línea

	printf("%+d\n%+d\n", 786, -786);  //se imprime +786. Un salto de línea.
									  //se imprime -786. Un salto de línea.
}