#include <stdio.h>
#include <ctype.h>
#define BUFFER_TAM 100

// Funciones de clasificaci�n de caracteres

int main() {

	char buffer[BUFFER_TAM];  //Buffer de entrada
	int nLetras = 0;  //N�mero de letras en la entrada
	int nDigitos = 0;   //N�mero de digitos en la entrada
	int nSignosPuntuacion = 0;  //N�mero de signos de puntuaci�n en la entrada

	printf("Introduzca una cadena de %d caracteres como maximo:\n", BUFFER_TAM);
	//gets se diferencia de scanf en que scanf s�lo captura una cadena de texto hasta que aparece el primer espacio 
	//o fin de l�nea
	if (!gets_s(buffer, sizeof(buffer))) {  //Leer una cadena dentro del buffer
		printf("Error leyendo la cadena\n");
			return 1;
	}

	size_t i = 0;

	while (buffer[i]) {
		if (isalpha(buffer[i])) {
			nLetras++;
		}
		if (isdigit(buffer[i])) {
			nDigitos++;
		}
		else if (ispunct(buffer[i])) {
			nSignosPuntuacion++;
		}
		i++;
	}

	printf("Ha introducido una cadena formada por %d letras, %d digitos y %d signos de puntuacion",
			nLetras, nDigitos, nSignosPuntuacion);
}

