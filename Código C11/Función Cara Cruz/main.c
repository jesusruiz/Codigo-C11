//Función Moneda Cara o Cruz

#include <stdio.h>
#include <time.h>

void caraCruz(void);  //Función prototipo

int main(void) {

	caraCruz();

}

void caraCruz(void) {

	int tirar;
	int caras = 0;  //contar el numero de caras
	int cruz = 0;  //contar el numero de cruz

	srand(time(NULL));

	for (int i = 0; i <= 50; i++) {

		tirar = 1 + rand() % 2;

		if (tirar == 1) {
			caras++;
		}
		else {
			cruz++;
		}
	}

	printf("Caras: %d\n", caras);
	printf("Cruces: %d\n", cruz);
}