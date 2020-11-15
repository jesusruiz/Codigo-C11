//Punteros y Arrays - Barajar un mazo de cartas y simular el reparto

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PALOS 4  //Tama�o que representa a los 4 palos de una baraja. En este caso: Corazones, Diamantes, Tr�boles y Espadas
#define CARAS 13   //Tama�o que representa a los 13 valores que pueden tener las caras: 1 a 10 y sota, caballo, rey.
#define CARTAS 52  //Tama�o que representa a las 52 cartas que tiene una baraja:  4 (palos) X 13 (cartas) = 52

//Definici�n de la estructura 'carta'
struct carta {
	const char *cara;  //definir puntero 'cara'
	const char *palo;  //definir puntero 'palo'
};

typedef struct carta Carta;  //'Carta' es nuevo nombre de tipo para la estructura 'carta'

//Funciones prototipo
void rellenarDatosBaraja(Carta* const wBaraja, const char* wCara[],
	 const char* wPalo[]);  //Rellenar datos de la baraja introduciendo los valores de las caras y palos de las cartas
void barajar(Carta* const wBaraja);  //Barajar las cartas
void repartir(const Carta* const wBaraja);  //Repartir las cartas

int main(void) {

	Carta baraja[CARTAS];  //definir array de Cartas (52 elementos de tipo carta)

	//inicializar array de punteros
	const char *cara[] = { "As", "Dos", "Tres", "Cuatro",
	"Cinco", "Seis", "Siete", "Ocho",
	"Nueve", "Diez", "Sota", "Caballo", "Rey" };

	//inicializar array de punteros
	const char *palo[] = { "Corazones", "Diamantes", "Treboles", "Espadas" };

	srand(time(NULL));  //semilla para generar n�meros aleatorios

	//cargar la baraja con cartas
	rellenarDatosBaraja(baraja, cara, palo);

	//funci�n barajar
	barajar(baraja);  //barajar la baraja de cartas poni�ndolas en orden aleatorio

	//funci�n repartir
	repartir(baraja);  //repartir la baraja. Se reparten las 52 cartas
}

//Introducir las cadenas en la estructura de cartas
void rellenarDatosBaraja(Carta* const wBaraja, const char* wCara[],
	const char* wPalo[]) {

	//bucle a trav�s de la Baraja
	for (size_t i = 0; i < CARTAS; ++i) {
		wBaraja[i].cara = wCara[i % CARAS];
		wBaraja[i].palo = wPalo[i / CARAS];
	}
}

//Funci�n barajar
//barajar las cartas del mazo
void barajar(Carta* const wBaraja)
{
	//bucle a trav�s de wBaraja intercambiando cartas al azar
	for (size_t i = 0; i < CARTAS; ++i) {
		size_t j = rand() % CARTAS;
		Carta temp = wBaraja[i];
		wBaraja[i] = wBaraja[j];
		wBaraja[j] = temp;
	}
}

//Funci�n repartir
//repartir las cartas del mazo
void repartir(const Carta* const wBaraja)
{
	//bucle a trav�s de wBaraja
	for (size_t i = 0; i < CARTAS; ++i) {
		printf("%5s of %-8s%s", wBaraja[i].cara, wBaraja[i].palo,
			(i + 1) % 4 ? " " : "\n");
	}
}