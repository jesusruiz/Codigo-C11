//Función Máximo común divisor (mcd)

#include <stdio.h>

int mcd(int num1, int num2);  //Función prototipo

int main(void) {

	int numero1, numero2;
	int resmcd;  //Variable que guardará el resultado final

	printf("%s", "Introduzca el primer numero: ");
	scanf_s("%d", &numero1);
	printf("%s", "Introduzca el segundo numero: ");
	scanf_s("%d", &numero2);

	resmcd = mcd(numero1, numero2);

	printf("Maximo comun divisor de %d y %d = %d\n", numero1, numero2, resmcd);

}

int mcd(int num1, int num2) {

	int resultado;
	int aux;   //Variable auxiliar

	//Como solamente hay que revisar hasta la mitad de los numeros proporcionados,
	//tenemos que comprobar cual es primero el número mal alto de los proporcionados
	//y almacenar la mitad de ese número en la variable auxiliar
	if (num1 < num2) {
		aux = num1 / 2;
	}
	else {
		aux = num2 / 2;
	}

	for (int i = 1; i <= aux; i++) {
		if ((num1 % i == 0) && (num2 % i == 0)) {
			resultado = i;
		}
	}
	return resultado;
}