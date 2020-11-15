#include <stdio.h>

int main(void) {

	int numero;
	int primerDigito;
	int ultimoDigito;

	do {
		printf("%s", "Introduzca un numero de 2 digitos: ");
		scanf_s("%d", &numero, 2);
	} while (numero < 10 || numero > 99);
	
	primerDigito = numero / 10;  //El resultado de esta división nos devuelve el primer dígito del número introducido
	ultimoDigito = numero % 10;  //El resto de realizar esta división nos devuelve el último dígito del número introducido

	printf("%d\n", primerDigito);
	printf("%d", ultimoDigito);
}