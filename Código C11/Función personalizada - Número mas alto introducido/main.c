#include <stdio.h>

//Funci�n personalizada - Retorna el n�mero m�s alto de tres n�meros previamente introducidos por el usuario

int valorMasAlto(int x, int y, int z);  //Funci�n prototipo

int main(void) {

	int numero1, numero2, numero3;

	printf("%s","Introduzca el primer numero: ");
	scanf_s("%d", &numero1);

	printf("\n%s", "Introduzca el segundo numero: ");
	scanf_s("%d", &numero2);

	printf("\n%s", "Introduzca el tercer numero: ");
	scanf_s("%d", &numero3);

	printf("\nEl numero mas alto introducido es: %d", valorMasAlto(numero1, numero2, numero3));
}

int valorMasAlto(int x, int y, int z) {

	int numeroMasAlto;

	if (x >= y && x >= z) {
		numeroMasAlto = x;
	}

	else if (y >= x && y >= z) {
		numeroMasAlto = y;
	}
	else {
		numeroMasAlto = z;
	}

	return numeroMasAlto;
}