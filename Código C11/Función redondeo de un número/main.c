//Funci�n redondeo de un n�mero

#include <stdio.h>
#include <math.h>

int main(void) {

	float numero;
	float redondeo;

	for (;;) {
		printf("%s", "Introduzca un numero flotante. ej: 2.3 (0 para salir): ");
		scanf_s("%f", &numero);

		if (numero == 0)
			break;
		else
			redondeo = floor(numero + .5);  //redondea al valor m�s pr�ximo 2.5 a 2   y   2.6 a 3
			printf("%.f\n", redondeo);
	}
}