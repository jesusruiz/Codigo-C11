//Punteros - Funci�n imprimir una cadena de caracteres utilizando
//un puntero no constante a dato constante

//Un puntero no constante que apunta a datos constantes puede modificarse para apuntar a cualquier elemento de datos 
//del tipo apropiado, pero los datos a los que apunta no pueden modificarse.

//Tal puntero podr�a usarse para recibir un argumento de matriz para una funci�n que procesar� cada elemento 
//sin modificar ese elemento. 
//Un puntero no constante a datos constantes puede modificarse para apuntar a cualquier elemento de datos del
//tipo apropiado, pero los datos a los que apunta no pueden modificarse.

//Por ejemplo, la funci�n imprimirCaracteres declara que el par�metro sPtr es de tipo const char * (l�nea 36). 
//La declaraci�n se lee de derecha a izquierda como "sPtr es un puntero a una constante de caracteres". 
//La funci�n utiliza una instrucci�n for para generar cada car�cter en la cadena hasta que se encuentre el car�cter nulo.
//Despu�s de que se imprime cada car�cter, se incrementa el puntero sPtr; esto hace que el puntero se mueva 
//al siguiente car�cter de la cadena.

#include <stdio.h>

//Funci�n prototipo
void imprimirCaracteres(const char *sPtr);

int main(void) {

	//Inicializar array de tipo char formado por una cadena de caracteres
	char cadena[] = "imprimir caracteres de una cadena";

	puts("La cadena es:");
	imprimirCaracteres(cadena);
	puts("");
}

//Funci�n imprimirCaracteres
//sPtr no se puede ser utilizado para modificar el car�cter al que apunta,
//es decir, sPtr es un puntero de "solo lectura"
void imprimirCaracteres(const char* sPtr) {

	//recorrer toda la cadena
	for (; *sPtr != '\0'; ++sPtr) {  //bucle sin inicializaci�n
		printf("%c", *sPtr);
	}
}
