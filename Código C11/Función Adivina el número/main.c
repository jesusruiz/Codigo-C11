//Función Adivina el número

#include <stdio.h>
#include <time.h>
#include <stdbool.h>

void adivinaNumero(unsigned int);  //Función prototipo
unsigned int numAleatorio(void);  //Función prototipo

int main(void) {

	unsigned int numeroAleatorio;

	numeroAleatorio = numAleatorio();

	adivinaNumero(numeroAleatorio);

}

unsigned int numAleatorio(void) {

	unsigned int numAleatorio;

	srand(time(NULL));

	numAleatorio = 1 + rand() % 1000;  //número aleatorio de 1 al 1000

	return numAleatorio;
}

void adivinaNumero(unsigned int numAleatorio) {

	unsigned int numUsuario;
	bool acierto = false;

	while (acierto == false) {
		printf("%s", "Adivina el numero que estoy pensando (1 al 1000): ");
		scanf_s("%u", &numUsuario);

		if (numUsuario == numAleatorio) {
			printf("\nAcertaste, el numero que estaba pensando era el %u.\n", numAleatorio);
			acierto = true;
			break;
		}

		else if (numUsuario < numAleatorio) {
			printf("%s", "El numero que estoy buscando es mayor que el introducido\n");
		}
		else {
			printf("%s", "El numero que estoy buscando es menor que el introducido\n");
		}
	}

}