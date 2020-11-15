//Punteros y Arrays - Barajar un mazo de cartas y simular el reparto

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PALOS 4  //Tamaño que representa a los 4 palos de una baraja. En este caso: Corazones, Diamantes, Tréboles y Espadas
#define CARAS 13   //Tamaño que representa a los 13 valores que pueden tener las caras: 1 a 10 y sota, caballo, rey.
#define CARTAS 52  //Tamaño que representa a las 52 cartas que tiene una baraja:  4 (palos) X 13 (cartas) = 52

//Funciones prototipo
void barajar(unsigned int wBaraja[][CARAS]);  //la acción barajar modifica wBaraja
void repartir(unsigned int wBaraja[][CARAS], const char* wCara[], 
	const char* wPalo[]);  //la acción de repartir no modifica el array, por tanto se pasa un array de caracteres const

int main(void) {

	//Inicializar array baraja
	unsigned int baraja[PALOS][CARAS] = { 0 };  //baraja formada por 52 cartas:  4 palos x 13 caras

	srand(time(NULL));  //semilla para generar números aleatorios
	//función barajar
	barajar(baraja);  //barajar la baraja de cartas

	//Inicializar array palo
	const char* palo[PALOS] =
	{ "Corazones", "Diamantes", "Treboles", "Espadas" };

	//Inicializar array cara
	const char* cara[CARAS] =
	{ "As", "Dos", "Tres", "Cuatro",
	"Cinco", "Seis", "Siete", "Ocho",
	"Nueve", "Diez", "Sota", "Caballo", "Rey" };

	//función repartir
	repartir(baraja, cara, palo);  //repartir la baraja
}

//Función barajar
//barajar las cartas del mazo
void barajar(unsigned int wBaraja[][CARAS])
{
	//para cara una de las cartas, elegir un espacio baraja aleatoriamente
	for (size_t carta = 1; carta <= CARTAS; ++carta) {
		size_t fila;  //número de fila
		size_t columna;  //número de columna

		//elegir una nueva ubicación aleatoria hasta que se encuentre el espacio desocupado
		do {
			fila = rand() % PALOS;
			columna = rand() % CARAS;
		} while (wBaraja[fila][columna] != 0);

		//poner el numero de la carta en el espacio de la baraja elegido
		wBaraja[fila][columna] = carta;
	}
}

//Función repartir
//repartir las cartas del mazo
void repartir(unsigned int wBaraja[][CARAS], const char* wCara[],
	const char* wPalo[])
{
	//repartir cada una de las cartas
	for (size_t carta = 1; carta <= CARTAS; ++carta) {
		//bucle para recorrer filas de wBaraja
		for (size_t fila = 0; fila < PALOS; ++fila) {
			//bucle para recorrer las columnas de wBaraja para fila actual
			for (size_t columna = 0; columna < CARAS; ++columna) {
				//si espacio contiene carta actual, mostrar carta
				if (wBaraja[fila][columna] == carta) {
					printf("%5s de %-8s%c", wCara[columna], wPalo[fila],
						carta % 2 == 0 ? '\n' : '\t');  //formato 2-columnas
				}
			}
		}
	}
}