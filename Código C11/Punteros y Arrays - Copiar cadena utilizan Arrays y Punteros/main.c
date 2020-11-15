//Copiando una cadena usando notación de array y notación de puntero.

#include <stdio.h>
#define TAMANO 10

//Funciones prototipo
void copiar1(char * const s1, const char * const s2);  //recibe puntero s1 constante a cadena y un puntero s2 const a cadena constante
void copiar2(char *s1, const char *s2);   //recibe un puntero s1 a cadena y un puntero s2 cadena constante

int main(void) {

	char cadena1[TAMANO];  //crear array 'cadena1'
	char* cadena2 = "Hola";  //crear un puntero a cadena

	copiar1(cadena1, cadena2);  //copiar cadena2 a cadena1 utilizando notación array
	printf("cadena1 = %s\n", cadena1);

	char cadena3[TAMANO];  //crear array cadena3
	char cadena4[] = "Adios";  //crear un array conteniendo una cadena

	copiar2(cadena3, cadena4);
	printf("cadena3 = %s\n", cadena3);
}

//Función copiar1
//copiar s2 a s1 utilizando notación array
void copiar1(char* const s1, const char* const s2) {

	//Bucle para recorrer cadenas
	//La expresión s1[i] = s2[i] copia un caracter de s2 a s1. 
	//Cuando el caracter null es encontrado en s2, se asigna a s1, y el valor de la asignación 
	//se convierte en el valor asignado al operando izquierdo (s1). 
	//El ciclo termina cuando el carácter nulo se asigna de s2 a s1 (falso).
	for (size_t i = 0; (s1[i] = s2[i]) != '\0'; ++i);
	;  //no hacer nada en el cuerpo
}

//Función copiar2
//copiar s2 a s1 utilizando notación puntero
void copiar2(char* s1, const char* s2) {

	//Bucle para recorrer cadenas
	//la expresión (* s1 = * s2) realiza la operación de copia. 
	//El puntero s2 está desreferenciado, y el carácter resultante se asigna al puntero desreferenciado * s1. 
	//Después de la asignación en la condición, los punteros se incrementan para señalar al siguiente carácter en el array s1 
	//y el siguiente carácter en la cadena s2, respectivamente. 
	//Cuando se encuentra el carácter nulo en s2, se asigna al puntero desreferenciado s1 y el bucle termina.
	for (; (*s1 = *s2) != '\0'; ++s1, ++s2) 
		; //no hacer nada en el cuerpo
}