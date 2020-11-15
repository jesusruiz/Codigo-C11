/*
Operadores bit a bit (bitwise) - Imprimir los bits de un entero sin signo
*/

#include <stdio.h>

//Función prototipo
void mostrarBits(unsigned int valor);

int main(void) {

	unsigned int x;  //variable en donde guardamos el valor de tipo entero introducido por el usuario

	printf("%s", "Introduce un valor entero no negativo: ");
	scanf_s("%u", &x);
	
	mostrarBits(x);
}

//Imprimir los bits de un entero sin signo
void mostrarBits(unsigned int valor) {

	//definir mascara y desplazar 31 bits a la izquierda 
	//El operador de desplazamiento a la izquierda, cambia el valor 1 del bit menos significativo (más a la derecha)
	//al bit más significativo (más a la izquierda) en la máscara y rellena los bits a 0 desde la derecha.
	unsigned int mascara = 1 << 31;  //(10000000 00000000 00000000 00000000)

	printf("%10u = ", valor);

	//Bucle a través de los bits
	for (unsigned int c = 1; c <= 32; ++c) {
		/*
		se determina si se debe imprimir un 1 o un 0 para el bit actual más a la izquierda del valor de la variable. 
		Cuando valor y mascara se combinan usando el operador AND (&), todos los bits excepto el bit más significativo
		en el valor de la variable están "enmascarados" (ocultos), 
		porque cualquier bit "ANDed" con 0 produce 0. 
		Si el bit más a la izquierda es 1, valor & mascara evalúa a un valor distinto de cero (verdadero)
		y se imprime 1; de lo contrario, se imprime 0. 
		El valor de la variable se desplaza a la izquierda un bit por el valor de la expresión << = 1 
		(esto es equivalente a valor = valor << 1). 
		Estos pasos se repiten para cada bit del valor de la variable sin signo.
		*/
		putchar(valor & mascara ? '1' : '0');
		valor <<= 1;  //valor de desplazamiento a la izquierda en 1.
					  //en binario se va añadiendo un dígito binario desde la izquierda

		if (c % 8 == 0) {  //imprimir espacio después de 8 bits
			putchar(' ');
		}
	}
	putchar('\n');
}