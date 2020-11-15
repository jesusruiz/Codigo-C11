/*Tarifas de estacionamiento

3 horas - 2.00 €
24 horas - 10.00 €

0.50 € por hora adicional superior a las 3 horas y menor a 24 horas. Es decir, 4 horas - 2.50 €
*/

#include <stdio.h>

float calcularTarifa(float horasCliente);  //Función prototipo
void mostrarResultados(float horasCliente1, float totalTarifaCliente1, 
		float horasCliente2, float totalTarifaCliente2, 
		float horasCliente3, float totalTarifaCliente3);  //Función prototipo

int main(void) {

	float horasCliente1, horasCliente2, horasCliente3;
	float totalTarifaCliente1, totalTarifaCliente2, totalTarifaCliente3;

	printf("%s","Introduzca las horas de estacionamiento del primer cliente: ");
	scanf_s("%f", &horasCliente1);
	totalTarifaCliente1 = calcularTarifa(horasCliente1);

	printf("%s", "Introduzca las horas de estacionamiento del segundo cliente: ");
	scanf_s("%f", &horasCliente2);
	totalTarifaCliente2 = calcularTarifa(horasCliente2);

	printf("%s", "Introduzca las horas de estacionamiento del tercer cliente: ");
	scanf_s("%f", &horasCliente3);
	totalTarifaCliente3 = calcularTarifa(horasCliente3);

	mostrarResultados(horasCliente1, totalTarifaCliente1, horasCliente2, totalTarifaCliente2, horasCliente3, totalTarifaCliente3);
}

float calcularTarifa(float horasCliente) {

	float totalHorasdeMas;
	float totalTarifaCliente;

	if (horasCliente <= 3) {
		return 2.00;
	}
	else if (horasCliente == 24) {
		return 10.00;
	}
	else {
		totalHorasdeMas = horasCliente - 3.00;
		//printf("%.2f", totalHorasdeMas);
		totalTarifaCliente = 2.00 + (totalHorasdeMas * 0.50);  //tarifa minima de 2€ por haber superado las 3 horas
		//printf("%.2f", totalTarifaCliente);
		return totalTarifaCliente;
	}
}

void mostrarResultados(float horasCliente1, float totalTarifaCliente1, 
	float horasCliente2, float totalTarifaCliente2, float totalTarifaCliente3, float horasCliente3) {

	printf("Coche  \tHoras  \tCargo\n");
	printf("1  \t%.1f  \t%.2f\n", horasCliente1, totalTarifaCliente1);
	printf("2  \t%.1f  \t%.2f\n", horasCliente2, totalTarifaCliente2);
	printf("3  \t%.1f  \t%.2f\n", horasCliente3, totalTarifaCliente3);
	printf("TOTAL: \t%.1f \t%.2f\n", horasCliente1 + horasCliente2 + horasCliente3, 
		totalTarifaCliente1 + totalTarifaCliente2 + totalTarifaCliente3);
}