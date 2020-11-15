#include <stdio.h>

int main(void) {

	int numero;
	int temporal;
	int primerDigito, segundoDigito, tercerDigito, cuartoDigito;

	//Pedimos un número hasta que no se cumpla que sea de 4 cifras
	do {
		printf("Introduzca un numero de 4 cifras: ");
		scanf_s("%d", &numero, 4);
	} while (numero < 1000 || numero > 10000);

	//Obtenemos los 4 digitos que forman la cifra introducida por separado
	primerDigito = numero / 1000;
	printf("%d\n", primerDigito);

	temporal = numero % 1000;
	printf("%d\n", temporal);

	segundoDigito = temporal / 100;
	printf("%d\n", segundoDigito);

	temporal = numero % 100;
	printf("%d\n", temporal);

	tercerDigito = temporal / 10;
	printf("%d\n", tercerDigito);

	temporal = numero % 10;
	printf("%d\n", temporal);

	cuartoDigito = temporal;
	printf("%d\n", cuartoDigito);

	//Imprimimos todos los digitos
	printf("%d%d%d%d\n", primerDigito, segundoDigito, tercerDigito, cuartoDigito);

	//Sumamos 7 a cada digito
	primerDigito += 7;
	segundoDigito += 7;
	tercerDigito += 7;
	cuartoDigito += 7;

	//Volvemos a impimir los digitos
	printf("%d\n", primerDigito);
	printf("%d\n", segundoDigito);
	printf("%d\n", tercerDigito);
	printf("%d\n", cuartoDigito);

	//Con el resultado obtenido tras sumar 7 a cada digito. Dividimos ese resultado entre 10 quedandonos con el resto e la operación
	primerDigito = primerDigito % 10;
	printf("%d\n", primerDigito);

	segundoDigito = segundoDigito % 10;
	printf("%d\n", segundoDigito);

	tercerDigito = tercerDigito % 10;
	printf("%d\n", tercerDigito);

	cuartoDigito = cuartoDigito % 10;
	printf("%d\n", cuartoDigito);

	//Intercambiamos el primer dígito con el tercero, e intercambiamos el segundo dígito con el cuarto.
	printf("Numero cifrado: %d%d%d%d\n", tercerDigito, cuartoDigito, primerDigito, segundoDigito);
}