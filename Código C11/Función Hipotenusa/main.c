//Función hipotenusa

#include <stdio.h>
#include <math.h>

double calcularHipotenusa(double lad1, double lad2);  //Función prototipo

int main(void) {
	
	double lado1;
	double lado2;
	double hipotenusa; 
	
	for (int t = 1; t <= 3; t++) { 
		printf("%s","Introduzca los dos lados del triangulo: ");
		scanf_s("%lf%lf", &lado1, &lado2); 
		printf("Hipotenusa: %.1f\n\n", calcularHipotenusa(lado1, lado2)); 
	}

}

double calcularHipotenusa(double lad1, double lad2) {

	return sqrt(pow(lad1, 2) + pow(lad2, 2));  //Raíz cuadrada (del cuadrado del lado 1 + el cuadrado del lado 2)

}