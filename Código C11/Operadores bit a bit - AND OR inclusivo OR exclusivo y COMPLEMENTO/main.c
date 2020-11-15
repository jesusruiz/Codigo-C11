/*
Demostración de uso del operador bit a bit AND, 
el operador bit a bit OR inclusivo, 
el operador bit a bit OR exclusivo
y el operador bit a bit de complemento.

El programa utiliza la función mostrarBits (líneas 54–84) para imprimir los valores int sin signo.
*/

#include <stdio.h>

//Función prototipo
void mostrarBits(unsigned int valor);  //prototipo

int main(void) {

	//demostración operador bit a bit AND (&)
	unsigned int numero1 = 65535;
	unsigned int mascara = 1;
	puts("El resultado de combinar ");
	mostrarBits(numero1);
	mostrarBits(mascara);
	puts("utilizando el operador bit a bit AND & es");
	mostrarBits(numero1 & mascara);

	//demostración operador bit a bit OR  inclusivo (|)
	numero1 = 15;
	unsigned int establecerBits = 241;
	puts("\nEl resultado de combinar ");
	mostrarBits(numero1);
	mostrarBits(establecerBits);
	puts("utilizando el operador bit a bit OR inclusivo | es");
	mostrarBits(numero1 | establecerBits);

	//demostración operador bit a bit OR  exclusivo (^)
	numero1 = 139;
	unsigned int numero2 = 199;
	puts("\nEl resultado de combinar ");
	mostrarBits(numero1);
	mostrarBits(numero2);
	puts("utilizando el operador bit a bit OR exclusivo ^ es");
	mostrarBits(numero1 ^ numero2);

	//demostración operador bit a bit complemento (~)
	numero1 = 21845;
	puts("\nEl complemento a uno ~ de ");
	mostrarBits(numero1);
	puts("es");
	mostrarBits(~numero1);
}

//Función mostrarBits
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