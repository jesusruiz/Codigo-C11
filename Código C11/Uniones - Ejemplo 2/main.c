/*
Uniones.

Una unión es el análogo de una estructura, salvo por un detalle:
todos los campos (miembros) de los que consta una unión comienzan en una misma posición,
que es la dirección de comienzo de la unión.
Recordemos que los campos de los que conta una estructura no comienzan en una misma posición de memoria.

Consiguientemente, las uniones tienen una longitud que es precisamente la del mayor de sus campos.
Dicho de otro modo, una unión es una estructura en que todos los campos están superpuestos,
ocupando la misma porción de memoria física.

El siguiente programa permite observar la estructura de bits de un entero (de 4 bytes) y de un float.
*/

#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <stdio.h>

//declaración de una estructura
struct muchos_bits {
	unsigned bit1 : 1;
	unsigned bit2 : 1;
	unsigned bit3 : 1;
	unsigned bit4 : 1;
	unsigned bit5 : 1;
	unsigned bit6 : 1;
	unsigned bit7 : 1;
	unsigned bit8 : 1;
	unsigned bit9 : 1;
	unsigned bit10 : 1;
	unsigned bit11 : 1;
	unsigned bit12 : 1;
	unsigned bit13 : 1;
	unsigned bit14 : 1;
	unsigned bit15 : 1;
	unsigned bit16 : 1;
	unsigned bit17 : 1;
	unsigned bit18 : 1;
	unsigned bit19 : 1;
	unsigned bit20 : 1;
	unsigned bit21 : 1;
	unsigned bit22 : 1;
	unsigned bit23 : 1;
	unsigned bit24 : 1;
	unsigned bit25 : 1;
	unsigned bit26 : 1;
	unsigned bit27 : 1;
	unsigned bit28 : 1;
	unsigned bit29 : 1;
	unsigned bit30 : 1;
	unsigned bit31 : 1;
	unsigned bit32 : 1;
};

//declaración de una union
union Ejemplo_union {
	int entero_union;
	float float_union;
	struct muchos_bits bits_union;  //introducimos en la unión una variable de la estructura declarada anteriormente
} union_prueba;  //como solamente vamos a utilizar esta union una sola vez la definimos aquí directamente

int entero_prueba;
float float_prueba;

int main(void) {

	printf("Programa de prueba para uniones, enteros y reales.\n\n");

	printf("Escriba el valor de un entero: ");
	scanf("%d", &entero_prueba);

	union_prueba.entero_union = entero_prueba;

	printf("\nLo que sigue es la estructura de bits del entero:\n\n");
	/*
	 printf("@primer bit: %ld\n",&(union_prueba.bits_union.bit1));
	 printf("@noveno bit: %ld\n",&(union_prueba.bits_union.bit9));
	 printf("@decimoseptimo bit: %ld\n",&(union_prueba.bits_union.bit17));
	 printf("@vigesimoquinto bit: %ld\n\n",&(union_prueba.bits_union.bit25));
	*/
	printf("%d", union_prueba.bits_union.bit1);
	printf("%d", union_prueba.bits_union.bit2);
	printf("%d", union_prueba.bits_union.bit3);
	printf("%d", union_prueba.bits_union.bit4);
	printf("%d", union_prueba.bits_union.bit5);
	printf("%d", union_prueba.bits_union.bit6);
	printf("%d", union_prueba.bits_union.bit7);
	printf("%d", union_prueba.bits_union.bit8);
	printf("%d", union_prueba.bits_union.bit9);
	printf("%d", union_prueba.bits_union.bit10);
	printf("%d", union_prueba.bits_union.bit11);
	printf("%d", union_prueba.bits_union.bit12);
	printf("%d", union_prueba.bits_union.bit13);
	printf("%d", union_prueba.bits_union.bit14);
	printf("%d", union_prueba.bits_union.bit15);
	printf("%d", union_prueba.bits_union.bit16);
	printf("%d", union_prueba.bits_union.bit17);
	printf("%d", union_prueba.bits_union.bit18);
	printf("%d", union_prueba.bits_union.bit19);
	printf("%d", union_prueba.bits_union.bit20);
	printf("%d", union_prueba.bits_union.bit21);
	printf("%d", union_prueba.bits_union.bit22);
	printf("%d", union_prueba.bits_union.bit23);
	printf("%d", union_prueba.bits_union.bit24);
	printf("%d", union_prueba.bits_union.bit25);
	printf("%d", union_prueba.bits_union.bit26);
	printf("%d", union_prueba.bits_union.bit27);
	printf("%d", union_prueba.bits_union.bit28);
	printf("%d", union_prueba.bits_union.bit29);
	printf("%d", union_prueba.bits_union.bit30);
	printf("%d", union_prueba.bits_union.bit31);
	printf("%d", union_prueba.bits_union.bit32);

	printf("\n\nEscriba el valor de un float: ");
	scanf_s("%f", &float_prueba);

	union_prueba.float_union = float_prueba;

	printf("\nLo que sigue es la estructura de bits del float:\n\n");

	printf("%d", union_prueba.bits_union.bit1);
	printf("%d", union_prueba.bits_union.bit2);
	printf("%d", union_prueba.bits_union.bit3);
	printf("%d", union_prueba.bits_union.bit4);
	printf("%d", union_prueba.bits_union.bit5);
	printf("%d", union_prueba.bits_union.bit6);
	printf("%d", union_prueba.bits_union.bit7);
	printf("%d", union_prueba.bits_union.bit8);
	printf("%d", union_prueba.bits_union.bit9);
	printf("%d", union_prueba.bits_union.bit10);
	printf("%d", union_prueba.bits_union.bit11);
	printf("%d", union_prueba.bits_union.bit12);
	printf("%d", union_prueba.bits_union.bit13);
	printf("%d", union_prueba.bits_union.bit14);
	printf("%d", union_prueba.bits_union.bit15);
	printf("%d", union_prueba.bits_union.bit16);
	printf("%d", union_prueba.bits_union.bit17);
	printf("%d", union_prueba.bits_union.bit18);
	printf("%d", union_prueba.bits_union.bit19);
	printf("%d", union_prueba.bits_union.bit20);
	printf("%d", union_prueba.bits_union.bit21);
	printf("%d", union_prueba.bits_union.bit22);
	printf("%d", union_prueba.bits_union.bit23);
	printf("%d", union_prueba.bits_union.bit24);
	printf("%d", union_prueba.bits_union.bit25);
	printf("%d", union_prueba.bits_union.bit26);
	printf("%d", union_prueba.bits_union.bit27);
	printf("%d", union_prueba.bits_union.bit28);
	printf("%d", union_prueba.bits_union.bit29);
	printf("%d", union_prueba.bits_union.bit30);
	printf("%d", union_prueba.bits_union.bit31);
	printf("%d", union_prueba.bits_union.bit32);
	printf("\n\nTerminacion normal del programa.\n");
}