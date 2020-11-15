//Puntero - Operador unario size_t: Tama�o en bytes que ocupa un array

//Aplicando sizeof a un nombre de matriz devuelve
//el n�mero de bytes en la matriz como tipo de dato size_t

#include <stdio.h>
#define TAMANO 20

//Funci�n prototipo
//Funci�n que recibe un puntero que apunta a una array de tipo float
size_t obtenerBytesQueOcupa(float *ptr); 

int main(void) {

	float array[TAMANO]; //Crear un array de 20 elementos de tipo float. El tipo de dato float ocupa 4 bytes

	printf("El n�mero de bytes en el array es: %u"
		   "\nEl n�mero de bytes retornado por la funcion obtenerBytesOcupa es: %u\n",
			sizeof(array), obtenerBytesQueOcupa(array));  //se imprimir� 20 bytes y 4 bytes
}

//Funci�n obtenerBytesQueOcupa
size_t obtenerBytesQueOcupa(float* ptr) {

	return sizeof(ptr);  //se retorna el valor 4, ya que el puntero apunta �nicamente al primer elemento de la matriz
	                     //y un elemento float ocupa 4 bytes
}