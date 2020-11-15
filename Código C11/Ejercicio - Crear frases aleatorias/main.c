/*
Ejercicio - Crear frases aleatorias.

Escriba un programa que utilice la generación de números aleatorios para crear oraciones.

El programa debe usar cuatro arrays de punteros a char llamadas artículo, sustantivo, verbo y preposicion.

El programa debe crear una oración seleccionando una palabra al azar de cada array en el siguiente orden: 
artículo, sustantivo, verbo, preposición, artículo y sustantivo. 

A medida que se selecciona cada palabra, debe concatenarse con las palabras anteriores en una matriz lo
suficientemente grande como para contener la oración completa.

Las palabras deben estar separadas por espacios. 

Cuando se imprima la oración final, debe comenzar con una letra mayúscula y terminar con un punto. 

El programa debería generar 6 frases de este tipo. 

Las matrices deben llenarse de la siguiente manera: 
El array de artículos debe contener los artículos "el", "un", "uno", "algun" y "cualquier"; 
El array de sustantivos debe contener los sustantivos "niño", "niña", "perro", "pueblo" y "coche"; 
El array de verbos debe contener los verbos "condujo", "saltó", "corrió", "caminó" y "pasó";
El array de preposiciones debe contener las preposiciones "a", "desde", "sobre", "por" y "tras".

Una vez que el programa anterior esté escrito y funcionando, 
modifíquelo para producir una historia corta que consta de varias de estas oraciones. 
(¿Qué tal la posibilidad de un escritor de trabajos finales al azar?)
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <time.h>

//Función prototipo Generador de Frase
void generadorFrase(char *articulo[], char *sustantivo[], char *verbo[], char *preposicion[]);

//Función prototipo Generador de Numeros Aleatorios
int generadorAleatorio(int rango);

int main(void) {

	/* Declaración e incialización del array de artículos */
	char* articulo[5] = { "el", "un", "este", "algun", "cualquier" };
	/* Declaración e incialización del array de sustantivos */
	char* sustantivo[5] = { "chico", "chica", "perro", "pueblo", "coche" };
	/* Declaración e incialización del array de verbos */
	char* verbo[5] = { "condujo", "salto", "corrio", "camino", "paso" };
	/* Declaración e incialización del array de preposiciones */
	char* preposicion[5] = { "a", "desde", "sobre", "por", "tras" };

	int contador = 0;  //contador que lleva el conteo del numero de frases procesadas

	srand(time(NULL));  //proporcionar la semilla una sola vez dentro de todo el programa 
						//y hacerlo dentro de la función main()

	while (contador <= 6) {

		generadorFrase(articulo, sustantivo, verbo, preposicion);

		contador++;
	}
}

//Función generadorFrase
void generadorFrase(char *articulo[], char *sustantivo[], char *verbo[], char *preposicion[]) {

	char frase[32] = "";  //Array para concatenar las palabras

	strcat_s(frase, sizeof frase, articulo[generadorAleatorio(5)]);
	strcat_s(frase, sizeof frase, " ");
	strcat_s(frase, sizeof frase, sustantivo[generadorAleatorio(5)]);
	strcat_s(frase, sizeof frase, " ");
	strcat_s(frase, sizeof frase, verbo[generadorAleatorio(5)]);
	strcat_s(frase, sizeof frase, " ");
	strcat_s(frase, sizeof frase, preposicion[generadorAleatorio(5)]);
	strcat_s(frase, sizeof frase, ".");

	frase[0] = toupper(frase[0]);

	printf("%s", frase);


	/*Otro método podría ser utilizando sprintf()
	
	 sprintf("%s %s %s %s %s %s.",

	articulo	 [srand(time( NULL)) % 5],
	sustantivo   [srand(time( NULL)) % 5],
	verbo        [srand(time( NULL)) % 5],
	preposicion  [srand(time( NULL)) % 5],

	frase[0] = toupper( sentence[0] );

	*/
}

//Función Generador de Números Aleatorios
int generadorAleatorio(int rango) {

	int numero = rand() % 5;

	return numero;
}