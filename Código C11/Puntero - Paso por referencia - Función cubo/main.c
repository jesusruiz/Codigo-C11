//Puntero - Paso por referencia - Funci�n cubo

#include <stdio.h>

//Funci�n prototipo
void cuboPorReferencia(int *numPtr);  //Se le pasa a la funci�n como argumento un puntero a entero

int main(void) {

	int numero = 5;  //inicializar variable numero a 5
	
	printf("El valor original de la variable numero es: %d", numero);

	//Pasar la direcci�n de memoria de la variable numero a la funci�n cuboPorReferencia
	cuboPorReferencia(&numero);

	printf("\nEl nuevo valor de la variable numero es: %d\n", numero);
}

//Funci�n cuboPorReferencia
void cuboPorReferencia(int *numPtr) {

	*numPtr = *numPtr * *numPtr * *numPtr;  //cubo *nPtr
}