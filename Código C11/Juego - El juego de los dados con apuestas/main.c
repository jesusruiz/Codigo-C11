#include <stdio.h>
#include <stdlib.h>  //Archivo de cabecera que contiene las funciones rand() y srand()
#include <time.h>  //Archivo de cabecera que contiene el prototipo de la función time()

/* EL JUEGO DE LOS DADOS - VERSIÓN CON APUESTAS

Un jugador tira dos dados. Cada dado tiene seis caras. Estas caras contienen 1, 2, 3, 4, 5 y 6 puntos.

Tras la tirada de datos, se calcula la suma de los puntos en las caras hacia arriba de ambos dados.

Si el total de la suma es 7 u 11 en este primer lanzamiento, el jugador gana.
Si la suma total es 2, 3 o 12 en este primer lanzamiento (llamados "dados"), el jugador pierde (es decir, la "casa" gana)
Si el total de la suma es 4, 5, 6, 8, 9 o 10 en este primer lanzamiento, entonces esa suma se convierte la única "puntuación"
que permitirá ganar al jugador en la próxima tirada.

Para ganar, el jugador debe continuar tirando los dados hasta que la suma de ambos dados sumen la única "puntuación" que le
hace ganador.
El jugador pierde si en alguna de estas tiradas posteriores de dados se suma 7 antes de que el jugador consiga la suma
de la única "puntuación" que le hace ganador.

*/

enum Estado { CONTINUAR, GANASTE, PERDISTE };  //las constantes de enumeración representan el estado del juego

int tiradaDados(void);  //función prototipo

int main(void) {

	//aleatorizar el generador de números aleatorios usando la hora actual
	srand(time(NULL));

	int saldo = 1000; //Saldo del jugador para apostar
	int cantidadApostar;  //Cantidad que quiere apostar el usuario

	int miPuntuacion; //El jugador debe conseguir esta suma de puntuación para ganar si no lo consigue en la primera tirada

	enum Estado estadoDeJuego;  //puede contener únicamente los valores CONTINUAR, GANASTE, o PERDISTE

	do {
		printf("?Cuanto desea apostar? (maximo %d): ", saldo);
		scanf_s("%d", &cantidadApostar);
	} while (cantidadApostar > saldo);

	int suma = tiradaDados();  //primera tirada de dados

	//determinar el estado del juego basado en la suma de ambos dados
	switch (suma) {

		//jugador ganador en la primera tirada
	case 7:  //7 hace ganador al jugador
	case 11: //11 hace ganador al jugador
		estadoDeJuego = GANASTE;
		break;

		//jugador perdedor en la primera tirada
	case 2:  //2 hace perdedor al jugador
	case 3:  //3 hace perdedor al jugador
	case 12: //12 hace perdedor al jugador
		estadoDeJuego = PERDISTE;
		break;

		//hay que seguir jugando. Recordar única puntuación ganadora.
	default:
		estadoDeJuego = CONTINUAR; //jugador debe seguir tirando los dados
		miPuntuacion = suma;  //recordar la puntuación
		printf("La puntuacion es: %d\n", miPuntuacion);
		break;  //opcional
	}

	//mientras el juego continue
	while (CONTINUAR == estadoDeJuego) {  //el jugador debe seguir tirando
		suma = tiradaDados();

		//determinar el estado de juego
		if (suma == miPuntuacion) {  //ganar por obtener como resultado la puntuación
			estadoDeJuego = GANASTE;
		}
		else if (suma == 7) {  //  //perder por obtener como resultado un 7
			estadoDeJuego = PERDISTE;
		}
	}

	//mostrar mensaje GANADOR o PERDEDOR al final de la partida
	if (GANASTE == estadoDeJuego) {  //¿jugador gana?
		saldo = saldo + cantidadApostar;
		puts("Jugador gana\n");
		printf("Saldo actual: %d\n", saldo);
	}
	else {  //jugador pierde
		saldo = saldo - cantidadApostar;
		puts("Jugador pierde\n");
		if (saldo == 0) {
			puts("Lo siento. Lo has perdido absolutamente todo.\n");
		}
	}
}


//tirar los dos dados, calcular la suma y mostrar los resultados
int tiradaDados(void) {

	int tiradaDado1 = 1 + (rand() % 6);  //almacena el valor aleatorio del dado 1
	int tiradaDado2 = 1 + (rand() % 6);  //almacena el valor aleatorio del dado 2

	//mostrar los resultados de esta tirada
	printf("Tirada del jugador: %d + %d = %d\n", tiradaDado1, tiradaDado2, tiradaDado1 + tiradaDado2);
	return tiradaDado1 + tiradaDado2;  //retorna la suma de los dos dados
}