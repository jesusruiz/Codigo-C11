//Función número menor

#include <stdio.h>

int numeroMenor(int num1, int num2, int num3);  //función prototipo

int main(void) {

	int num1, num2, num3;
	int numMenor;

	printf("%s", "Introduzca el primer numero: ");
	scanf_s("%d", &num1);
	printf("%s", "\nIntroduzca el segundo numero: ");
	scanf_s("%d", &num2);
	printf("%s", "\nIntroduzca el tercer numero: ");
	scanf_s("%d", &num3);

	numMenor = numeroMenor(num1, num2, num3);

	printf("\nEl numero menor introducido ha sido: %d", numMenor);
}

int numeroMenor(int num1, int num2, int num3) {

	if (num1 <= num2 && num1 <= 3) {
		return num1;
	}
	else if (num2 <= num1 && num2 <= num3) {
		return num2;
	}
	else
		return num3;
}
