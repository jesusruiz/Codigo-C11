//Punteros y Arrays - Barajar un mazo de cartas, simular el reparto y clasificación de manos

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
void clasificacionPar(unsigned int wBaraja[][CARAS], const char* wCara[],
	const char* wPalo[]);  //la acción de repartir no modifica el array, por tanto se pasa un array de caracteres const
void clasificacionTrio(unsigned int wBaraja[][CARAS], const char* wCara[],
	const char* wPalo[]);  //la acción de repartir no modifica el array, por tanto se pasa un array de caracteres const
void clasificacionPoker(unsigned int wBaraja[][CARAS], const char* wCara[],
	const char* wPalo[]);  //la acción de repartir no modifica el array, por tanto se pasa un array de caracteres const
void clasificacionColor(unsigned int wBaraja[][CARAS], const char* wCara[],
	const char* wPalo[]);  //la acción de repartir no modifica el array, por tanto se pasa un array de caracteres const
void clasificacionEscalera(unsigned int wBaraja[][CARAS], const char* wCara[],
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

	//función clasificacion
	clasificacionPar(baraja, cara, palo);  //clasificar el resultado de las cartas
	clasificacionTrio(baraja, cara, palo);  //clasificar el resultado de las cartas
	clasificacionPoker(baraja, cara, palo);  //clasificar el resultado de las cartas
	clasificacionColor(baraja, cara, palo);  //clasificar el resultado de las cartas 
	clasificacionEscalera(baraja, cara, palo);  //clasificar el resultado de las cartas 
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
	for (size_t carta = 1; carta <= 5; ++carta) {
		//bucle para recorrer filas de wBaraja
		for (size_t fila = 0; fila < PALOS; ++fila) {
			//bucle para recorrer las columnas de wBaraja para fila actual
			for (size_t columna = 0; columna < CARAS; ++columna) {
				//si espacio contiene carta actual, mostrar carta
				if (wBaraja[fila][columna] == carta) {
					printf("%5s de %-8s\n", wCara[columna], wPalo[fila]);
						//, carta % 2 == 0 ? '\n' : '\t');  //formato 2-columnas
				}
			}
		}
	}
}

//Función clasificacion
//comprobar el resultado de las 5 cartas obtenidas por el jugador
void clasificacionPar(unsigned int wBaraja[][CARAS], const char* wCara[],
	const char* wPalo[])
{
	int arrayTotalImpactos[13] = { 0 };
	int cara;
	unsigned int par = 0;  //Dos cartas iguales de número (y tres diferentes). 
	unsigned int doblepareja = 0;  //Dos pares de cartas del mismo número (par y par).
	unsigned int trio = 0;  //Tres cartas iguales de valor. 
	unsigned int poker = 0;  //Cuatro cartas iguales en su valor. 
	unsigned int color = 0;  //Cinco cartas del mismo palo, sin ser consecutivas. 
	unsigned int escalera = 0;  //Cinco cartas consecutivas del mismo palo. 

	//AL TERMINAR LAS COMPROBACIONES DE UN CARA (POR EJEMPLO EL AS), SI NO HAY UN PAR,
	//LA VARIABLE 'IMPACTO' DEBERÍA ESTABLECERSE A CERO OTRA VEZ,
	//PARA COMENZAR A CONTABILIZAR LOS IMPACTOS DE LA SIGUIENTE CARA (POR EJEMPLO EL DOS)

	//¿QUIZÁS UN BUCLE FOR DE FILAS
	//PONER IMPACTO A 0 AL INICIO DE ESTE BUCLE FOR
	//OTRO BUCLE FOR DE COLUMNAS

	//DECLARAR OTRA VARIABLE PARES ENCONTRADOS, PORQUE SI INICIO LA VARIABLE IMPACTO A 0 CADA VEZ QUE INICIO EL BUCLE FOR NO TENDRÉ
	//EN CUENTA LOS IMPACTOS ENCONTRADOS ANTERIORMENTE

	for (size_t carta = 1; carta <= 5; ++carta) {
		//bucle para recorrer filas de wBaraja
		for (size_t fila = 0; fila < PALOS; ++fila) {
			//bucle para recorrer las columnas de wBaraja para fila actual
			for (size_t columna = 0; columna < CARAS; ++columna) {
				//si espacio contiene carta actual, mostrar carta
				if (wBaraja[fila][columna] == carta) {
					arrayTotalImpactos[columna] = arrayTotalImpactos[columna] + 1;
				}
			}
		}
	}

	puts("\nCOMPRABACION PAR: ");

	for (size_t elemento = 0; elemento < 13; ++elemento) {
		printf("%d", arrayTotalImpactos[elemento]);
		if (arrayTotalImpactos[elemento] == 2) {
			cara = elemento;
			par = 1;
		}
	}
	if (par == 1) {
		printf("\nPar de %s en la mano\n", wCara[cara]);
	}

	puts("");
}

//Función clasificacion
//comprobar el resultado de las 5 cartas obtenidas por el jugador
void clasificacionTrio(unsigned int wBaraja[][CARAS], const char* wCara[],
	const char* wPalo[])
{
	int arrayTotalImpactos[13] = { 0 };
	int cara;
	unsigned int trio = 0;  //Tres cartas iguales de valor. 

	//AL TERMINAR LAS COMPROBACIONES DE UN CARA (POR EJEMPLO EL AS), SI NO HAY UN PAR,
	//LA VARIABLE 'IMPACTO' DEBERÍA ESTABLECERSE A CERO OTRA VEZ,
	//PARA COMENZAR A CONTABILIZAR LOS IMPACTOS DE LA SIGUIENTE CARA (POR EJEMPLO EL DOS)

	//¿QUIZÁS UN BUCLE FOR DE FILAS
	//PONER IMPACTO A 0 AL INICIO DE ESTE BUCLE FOR
	//OTRO BUCLE FOR DE COLUMNAS

	//DECLARAR OTRA VARIABLE PARES ENCONTRADOS, PORQUE SI INICIO LA VARIABLE IMPACTO A 0 CADA VEZ QUE INICIO EL BUCLE FOR NO TENDRÉ
	//EN CUENTA LOS IMPACTOS ENCONTRADOS ANTERIORMENTE

	for (size_t carta = 1; carta <= 5; ++carta) {
		//bucle para recorrer filas de wBaraja
		for (size_t fila = 0; fila < PALOS; ++fila) {
			//bucle para recorrer las columnas de wBaraja para fila actual
			for (size_t columna = 0; columna < CARAS; ++columna) {
				//si espacio contiene carta actual, mostrar carta
				if (wBaraja[fila][columna] == carta) {
					arrayTotalImpactos[columna] = arrayTotalImpactos[columna] + 1;
				}
			}
		}
	}

	puts("\nCOMPROBACION TRIO: ");

	for (size_t elemento = 0; elemento < 13; ++elemento) {
		printf("%d", arrayTotalImpactos[elemento]);
		if (arrayTotalImpactos[elemento] == 3) {
			cara = elemento;
			trio = 1;
		}
	}
	if (trio == 1) {
		printf("\nTrio de %s en la mano\n", wCara[cara]);
	}

	puts("");
}

//Función clasificacion
//comprobar el resultado de las 5 cartas obtenidas por el jugador
void clasificacionPoker(unsigned int wBaraja[][CARAS], const char* wCara[],
	const char* wPalo[])
{
	int arrayTotalImpactos[13] = { 0 };
	int cara;
	unsigned int poker = 0;  //Cuatro cartas iguales de valor. 

	//AL TERMINAR LAS COMPROBACIONES DE UN CARA (POR EJEMPLO EL AS), SI NO HAY UN PAR,
	//LA VARIABLE 'IMPACTO' DEBERÍA ESTABLECERSE A CERO OTRA VEZ,
	//PARA COMENZAR A CONTABILIZAR LOS IMPACTOS DE LA SIGUIENTE CARA (POR EJEMPLO EL DOS)

	//¿QUIZÁS UN BUCLE FOR DE FILAS
	//PONER IMPACTO A 0 AL INICIO DE ESTE BUCLE FOR
	//OTRO BUCLE FOR DE COLUMNAS

	//DECLARAR OTRA VARIABLE PARES ENCONTRADOS, PORQUE SI INICIO LA VARIABLE IMPACTO A 0 CADA VEZ QUE INICIO EL BUCLE FOR NO TENDRÉ
	//EN CUENTA LOS IMPACTOS ENCONTRADOS ANTERIORMENTE

	for (size_t carta = 1; carta <= 5; ++carta) {
		//bucle para recorrer filas de wBaraja
		for (size_t fila = 0; fila < PALOS; ++fila) {
			//bucle para recorrer las columnas de wBaraja para fila actual
			for (size_t columna = 0; columna < CARAS; ++columna) {
				//si espacio contiene carta actual, mostrar carta
				if (wBaraja[fila][columna] == carta) {
					arrayTotalImpactos[columna] = arrayTotalImpactos[columna] + 1;
				}
			}
		}
	}

	puts("\nCOMPROBACION POKER: ");

	for (size_t elemento = 0; elemento < 13; ++elemento) {
		printf("%d", arrayTotalImpactos[elemento]);
		if (arrayTotalImpactos[elemento] == 4) {
			cara = elemento;
			poker = 1;
		}
	}
	if (poker == 1) {
		printf("\nPoker de %s en la mano\n", wCara[cara]);
	}
	puts("");
}

//Función clasificacion
//comprobar el resultado de las 5 cartas obtenidas por el jugador
void clasificacionColor(unsigned int wBaraja[][CARAS], const char* wCara[],
	const char* wPalo[])
{
	int arrayTotalImpactos[4] = { 0 };
	int palo;
	unsigned int color = 0;  //Cinco cartas del mismo palo no consecutivas. 

	//AL TERMINAR LAS COMPROBACIONES DE UN CARA (POR EJEMPLO EL AS), SI NO HAY UN PAR,
	//LA VARIABLE 'IMPACTO' DEBERÍA ESTABLECERSE A CERO OTRA VEZ,
	//PARA COMENZAR A CONTABILIZAR LOS IMPACTOS DE LA SIGUIENTE CARA (POR EJEMPLO EL DOS)

	//¿QUIZÁS UN BUCLE FOR DE FILAS
	//PONER IMPACTO A 0 AL INICIO DE ESTE BUCLE FOR
	//OTRO BUCLE FOR DE COLUMNAS

	//DECLARAR OTRA VARIABLE PARES ENCONTRADOS, PORQUE SI INICIO LA VARIABLE IMPACTO A 0 CADA VEZ QUE INICIO EL BUCLE FOR NO TENDRÉ
	//EN CUENTA LOS IMPACTOS ENCONTRADOS ANTERIORMENTE

	for (size_t carta = 1; carta <= 5; ++carta) {
		//bucle para recorrer filas de wBaraja
		for (size_t fila = 0; fila < PALOS; ++fila) {
			//bucle para recorrer las columnas de wBaraja para fila actual
			for (size_t columna = 0; columna < CARAS; ++columna) {
				//si espacio contiene carta actual, mostrar carta
				if (wBaraja[fila][columna] == carta) {
					arrayTotalImpactos[fila] = arrayTotalImpactos[fila] + 1;
				}
			}
		}
	}

	puts("\nCOMPROBACION COLOR: ");

	for (size_t elemento = 0; elemento < 4; ++elemento) {
		printf("%d", arrayTotalImpactos[elemento]);
		if (arrayTotalImpactos[elemento] == 5) {
			palo = elemento;
			color = 1;
		}
	}
	if (color == 1) {
		printf("\nColor de %s en la mano\n", wPalo[palo]);
	}
	puts("");
}

//Función clasificacion
//comprobar el resultado de las 5 cartas obtenidas por el jugador
void clasificacionEscalera(unsigned int wBaraja[][CARAS], const char* wCara[],
	const char* wPalo[])
{
	int arrayTotalImpactos[4][13] = { 0 };
	int palo;
	unsigned int impacto = 0;
	unsigned int escalera = 0;  //Cinco cartas consecutivas del mismo palo. 

	//AL TERMINAR LAS COMPROBACIONES DE UN CARA (POR EJEMPLO EL AS), SI NO HAY UN PAR,
	//LA VARIABLE 'IMPACTO' DEBERÍA ESTABLECERSE A CERO OTRA VEZ,
	//PARA COMENZAR A CONTABILIZAR LOS IMPACTOS DE LA SIGUIENTE CARA (POR EJEMPLO EL DOS)

	//¿QUIZÁS UN BUCLE FOR DE FILAS
	//PONER IMPACTO A 0 AL INICIO DE ESTE BUCLE FOR
	//OTRO BUCLE FOR DE COLUMNAS

	//DECLARAR OTRA VARIABLE PARES ENCONTRADOS, PORQUE SI INICIO LA VARIABLE IMPACTO A 0 CADA VEZ QUE INICIO EL BUCLE FOR NO TENDRÉ
	//EN CUENTA LOS IMPACTOS ENCONTRADOS ANTERIORMENTE

	for (size_t carta = 1; carta <= 5; ++carta) {
		//bucle para recorrer filas de wBaraja
		for (size_t fila = 0; fila < PALOS; ++fila) {
			//bucle para recorrer las columnas de wBaraja para fila actual
			for (size_t columna = 0; columna < CARAS; ++columna) {
				//si espacio contiene carta actual, mostrar carta
				if (wBaraja[fila][columna] == carta) {
					arrayTotalImpactos[fila][columna] = arrayTotalImpactos[fila][columna] + 1;
				}
			}
		}
	}

	puts("\nCOMPROBACION ESCALERA: ");

	for (size_t fila = 0; fila < PALOS; ++fila) {
		//bucle para recorrer las columnas de wBaraja para fila actual
		impacto = 0;
		for (size_t columna = 0; columna < CARAS; ++columna) {
			//si espacio contiene carta actual, mostrar carta
			printf("%d", arrayTotalImpactos[fila][columna]);
			if (arrayTotalImpactos[fila][columna] == 1) {
				impacto++;
			}
			else {
				impacto = 0;
			}
			if (impacto == 5) {
				palo = fila;
				escalera = 1;
			}
		}
		puts("");
	}
	//	if (arrayTotalImpactos[fila][columna] == 5) {
	//		palo = elemento;
	//		escalera = 1;
	//	}
	//}

	if (escalera == 1) {
		printf("\n\nEscalera de %s en la mano\n", wPalo[palo]);
	}
}
