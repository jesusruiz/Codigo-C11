/*
La siguiente definición de estructura contiene tres campos de bits int sin signo (cara, palo y color) 
que se utilizan para representar una carta de una baraja formada por 52 cartas. 

Un campo de bit es declarado mediante un tipo int con signo o sin signo, 
seguido del nombre de miembro integral con dos puntos (:) y una constante entera que representa el ancho del campo
(es decir, el número de bits en los que se almacena el miembro). 

La constante que representa el ancho debe ser un número entero entre 0 y el total
número de bits utilizados para almacenar un int en su sistema, inclusive.

La definición de estructura indica que el miembro 'cara' se almacena en 4 bits, 
el miembro 'palo' se almacena en 2 bits 
y el miembro 'color' se almacena en 1 bit. 

El número de bits se basa en el rango de valores deseado para cada miembro de la estructura. 
El miembro 'cara' almacena valores desde 0 (As) hasta 12 (Rey); 4 bits pueden almacenar valores en el rango de 0 a 15. 
El miembro 'palo' almacena valores de 0 a 3 (0 = Corazones, 1 = Diamantes, 2 = Tréboles, 3 = Picas) - 
2 bits pueden almacenar valores en el rango 0-3
Finalmente, el miembro 'color' almacena 0 (rojo) o 1 (negro); 1 bit puede almacenar 0 o 1.
*/

//Representando cartas de una baraja mediante campos de bits en una estructura
#include <stdio.h>
#define CARTAS 52

//Definición de estructura bitCarta con campos de bits
struct bitCarta {
	unsigned int cara : 4;  // 4 bits; 0-15
	unsigned int palo : 2;  // 2 bits; 0-3
	unsigned int color : 1; // 1 bit; 0-1
};

typedef struct bitCarta Carta;  //nuevo nombre de tipo para la estructura bitCarta

//Funciones protipo
void rellenarBaraja(Carta * const wBaraja);  
void barajar(const Carta * const wBaraja); 

int main(void) {

	Carta baraja[CARTAS];  //crear un array de Cartas

	rellenarBaraja(baraja);

	puts("Los valores de Cara 0-12 corresponden al As y al Rey");
	puts("Los valores de Palo 0-3 corresponden a Corazones, Diamantes, Tréboles y Picas");
	puts("Los valores de Color 0-1 corresponden a rojo y negro\n");
	barajar(baraja);
}

//Inicializar Cartas
void rellenarBaraja()
{
	//bucle a través de wBaraja
	for (size_t i = 0; i < CARTAS; ++i) {
		wBaraja[i].cara = i % (CARTAS / 4);
		wBaraja[i].palo = i / (CARTAS / 4);
		wBaraja[i].color = i / (CARTAS / 2);
	}
}


//imprimir cartas en un formato de dos columnas; cartas 0-25 indexadas con
//k1 (columna 1); cartas 26-51 indexadas con k2 (columna 2)
void barajar(const Carta* const wBaraja)
{
	printf("%-6s%-6s%-15s%-6s%-6s%s\n", "Carta", "Palo", "Color",
		"Carta", "Palo", "Color");

	//bucle a través de wBaraja
	for (size_t k1 = 0, k2 = k1 + 26; k1 < CARTAS / 2; ++k1, ++k2) {
		printf("Carta:%3d Palo:%2d Color:%2d ",
			wBaraja[k1].cara, wBaraja[k1].palo, wBaraja[k1].color);
		printf("Carta:%3d Palo:%2d Color:%2d ",
			wBaraja[k2].cara, wBaraja[k2].palo, wBaraja[k2].color);
	}
}