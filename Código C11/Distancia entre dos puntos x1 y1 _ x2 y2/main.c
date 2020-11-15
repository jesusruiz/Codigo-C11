//Distancia entre dos puntos:  (x1  y1)  y  (x2  y2)

#include <stdio.h>
#include <math.h>

int main(void) {

	double x1 = 4.0;
	double y1 = 1.0;

	double x2 = 7.0;
	double y2 = 5.0;

	double distancia = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
	printf("%.1lf", distancia);
}