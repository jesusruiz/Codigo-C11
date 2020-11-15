//Punteros - Función imprimir una cadena de caracteres utilizando
//un puntero no constante a dato constante

//Un puntero no constante que apunta a datos constantes puede modificarse para apuntar a cualquier elemento de datos 
//del tipo apropiado, pero los datos a los que apunta no pueden modificarse.

//Tal puntero podría usarse para recibir un argumento de matriz para una función que procesará cada elemento 
//sin modificar ese elemento. 
//Un puntero no constante a datos constantes puede modificarse para apuntar a cualquier elemento de datos del
//tipo apropiado, pero los datos a los que apunta no pueden modificarse.

//Por ejemplo, la función imprimirCaracteres declara que el parámetro sPtr es de tipo const char * (línea 36). 
//La declaración se lee de derecha a izquierda como "sPtr es un puntero a una constante de caracteres". 
//La función utiliza una instrucción for para generar cada carácter en la cadena hasta que se encuentre el carácter nulo.
//Después de que se imprime cada carácter, se incrementa el puntero sPtr; esto hace que el puntero se mueva 
//al siguiente carácter de la cadena.

#include <stdio.h>

//Función prototipo
void imprimirCaracteres(const char *sPtr);

int main(void) {

	//Inicializar array de tipo char formado por una cadena de caracteres
	char cadena[] = "imprimir caracteres de una cadena";

	puts("La cadena es:");
	imprimirCaracteres(cadena);
	puts("");
}

//Función imprimirCaracteres
//sPtr no se puede ser utilizado para modificar el carácter al que apunta,
//es decir, sPtr es un puntero de "solo lectura"
void imprimirCaracteres(const char* sPtr) {

	//recorrer toda la cadena
	for (; *sPtr != '\0'; ++sPtr) {  //bucle sin inicialización
		printf("%c", *sPtr);
	}
}
